from logic import *

class FolKB(KB):
    def _init_(self, initial_clauses=[]):
        self.clauses = []# inefficient: no indexing
        for clause in initial_clauses:
            self.tell(clause)
    def tell(self, sentence):
        if is_definite_clause(sentence):
            self.clauses.append(sentence)
        else:
            raise Exception("Not a definite clause: {}".format(sentence))
    def ask_generator(self, query):
        q = expr(query)
        test_variables = variables(q)
        answers = fol_bc_ask(self, q)
        return sorted([dict((x, v) for x, v in list(a.items())
                            if x in test_variables)
                            for a in answers], key=repr)
    def retract(self, sentence):
        self.clauses.remove(sentence)
    def fetch_rules_for_goal(self, goal):
        return self.clauses

test_kb = FolKB(
   map(expr, ['LakiLaki(JamesI)',
              'Wanita(Elizabeth)',
              'LakiLaki(Charles)',
              'Wanita(Diana)',
              'Wanita(Camila)',
              'LakiLaki(Andrew)',
              'Wanita(Anne)',
              'Wanita(Sarah)',
              'Wanita(Sophie)',
              'Wanita(CatherineI)',
              'LakiLaki(Mark)',
              'Wanita(Elizabeth)',
              'LakiLaki(Phillip)',
              'Wanita(Margareth)',
              'OrangTua(Margareth, Elizabeth)',
              'OrangTua(JamesI, CharlesI)',
              'OrangTua(JamesI, Elizabeth)',
              'OrangTua(Charles, Hendry)',
              'OrangTua(Diana, Hendry)',
              'OrangTua(Camila, Hendry)',
              'OrangTua(Diana, William)',
              'OrangTua(Camila, William)',
              'TidakMelahirkan(Camila, William)',
              'Melahirkan(Diana, Hendry)',
              'OrangTua(Charles, William)',
              'OrangTua(Anne, Peter)',
              'OrangTua(Mark, Peter)',
              'OrangTua(Phillip, Anne)',
              'OrangTua(Phillip, Andrew)',
              'OrangTua(Phillip, Edward)',
              'OrangTua(Phillip, Charles)',
              'OrangTua(Elizabeth, Anne)',
              'OrangTua(Elizabeth, Andrew)',
              'OrangTua(Elizabeth, Edward)',
              'OrangTua(Elizabeth, Charles)',
              'LebihTua(Anne, Andrew)',
              'LebihTua(Charles, Andrew)',
              'TidakSaudaraKandung(Camila, Anne)',
              'TidakSaudaraKandung(Diana, Anne)',
              'TidakSaudaraKandung(Sarah, Anne)',
              'TidakSaudaraKandung(Sophie, Anne)',
              'Sepupu(CatherineI, Anne)',
              '(OrangTua(m, x) & Wanita(m)) ==> Ibu(m, x)',
              '(OrangTua(f, x) & LakiLaki(f)) ==> Ayah(f, x)',
              '(OrangTua(o, x) & OrangTua(o, y)) ==> SaudaraKandung(x, y)',
              '(SaudaraKandung(k, x) & Wanita(k) & LebihTua(k,x)) ==> KakakPerempuan(k, x)',
              '(SaudaraKandung(k, x) & LakiLaki(k) & LebihTua(k, x)) ==> KakakLakiLaki(k, x)',
              '(Ibu(m, x) & TidakMelahirkan(m, x)) ==> IbuTiri(m, x)',
              '(Ibu(m, x) & Melahirkan(m, x)) ==> IbuKandung(m, x)',
              '(Orangtua(o,x) & SaudaraKandung(t,o) & Wanita(t)) ==> TanteKandung(t,x)',
              '(OrangTua(o,x) & TidakSaudaraKandung(t,o) & Wanita(t)) ==> Tante(t,x)',
              '(TanteKandung(x, y)) ==> Tante(x,y)',
              '(OrangTua(o,x) & SaudaraKandung(p,o) & LakiLaki(p)) ==> PamanKandung(p,x)',
              '(OrangTua(o,x) & TidakSaudaraKandung(p,o) & LakiLaki(p)) ==> Paman(p,x)',
              '(PamanKandung(x, y)) ==> Paman(x,y)',
              '(OrangTua(o,x) & Sepupu(t,o) & Wanita(t)) ==> TanteSepupu(t,x)',
              '(TanteSepupu(x, y)) ==> Tante(x,y)',
              '(OrangTua(o,x) & Kakek(k,o)) ==> KakekBuyut(k,x)',
              '(OrangTua(o,x) & Ayah(k,o)) ==> Kakek(k,x)',
              '(OrangTua(o,x) & Ibu(n,o)) ==> Nenek(n,x)',
              '(OrangTua(a,x) & OrangTua(b,y) & SaudaraKandung(a,b)) ==> Sepupu(x,y)',
              '(OrangTua(o,x) & Nenek(n,o)) ==> NenekBuyut(n,x)',
              '(KakekBuyut(b,x) & LakiLaki(x)) ==> CicitLaki(x,b)',
              '(KakekBuyut(b,x) & Wanita(x)) ==> CicitPerempuan(x,b)',
              '(NenekBuyut(b,x) & Wanita(x)) ==> CicitPerempuan(x,b)',
              '(OrangTua(x, y)) ==> Anak(y, x)']))


print(repr(test_kb.ask_generator('Ayah(GeorgeI,JamesI)')))
print(repr(test_kb.ask_generator('Ayah(x,CharlesI)')))
print(repr(test_kb.ask_generator('Ibu(x,Hendry)')))
print(repr(test_kb.ask_generator('Anak(x,Charles)')))
print(repr(test_kb.ask_generator('Paman(Andrew,William)')))
print(repr(test_kb.ask_generator('Tante(x,Peter)')))
# print(repr(test_kb.ask_generator('Sepupu(x,Zara)')))
print(repr(test_kb.ask_generator('Nenek(x,William)')))
print(repr(test_kb.ask_generator('Nenek(Elizabeth,William)')))
print(repr(test_kb.ask_generator('Kakek(x,Peter)')))
print(repr(test_kb.ask_generator('IbuTiri(x,William)')))
print(repr(test_kb.ask_generator('KakakLakiLaki(x,Diana)')))
print(repr(test_kb.ask_generator('SaudaraKandung(x,Andrew)')))
# print(repr(test_kb.ask_generator('KakakLakiLaki(x,JamesII)')))
print(repr(test_kb.ask_generator('Tante(Sarah,Peter)')))
print(repr(test_kb.ask_generator('NenekBuyut(x,Hendry)')))
# print(repr(test_kb.ask_generator('Paman(x,Charles)')))
print(repr(test_kb.ask_generator('IbuKandung(Diana,Hendry)')))
# print(repr(test_kb.ask_generator('Sepupu(x,Hendry)')))
print(repr(test_kb.ask_generator('CicitPerempuan(x,Elizabeth)')))