!===========================================================
! File : BOL1
!===========================================================
! FIELD : T2TPRK TIPO RECORD=BOL1
#define S_BOL1_T2TPRK peel(pick(nPos, 1, 4), " ")
#define R_BOL1_T2TPRK(A) put(taBufBOL1, nRecBOL1, 1, A :4.4)
!-----------------------------------------------------------
! FIELD : T2DELY DELIVERY NUMBER
#define S_BOL1_T2DELY peel(pick(nPos, 5, 10), " ")
#define R_BOL1_T2DELY(A) put(taBufBOL1, nRecBOL1, 5, A :10.10)
!-----------------------------------------------------------
! FIELD : T2TPCO TP CONF PICK/EVASI
#define S_BOL1_T2TPCO peel(pick(nPos, 15, 4), " ")
#define R_BOL1_T2TPCO(A) put(taBufBOL1, nRecBOL1, 15, A :4.4)
!-----------------------------------------------------------
! FIELD : T2RESO FLAG RESO
#define S_BOL1_T2RESO peel(pick(nPos, 19, 1), " ")
#define R_BOL1_T2RESO(A) put(taBufBOL1, nRecBOL1, 19, A :1.1)
!-----------------------------------------------------------
! FIELD : T2CDSO COD SOCIETA'
#define S_BOL1_T2CDSO peel(pick(nPos, 20, 3), " ")
#define R_BOL1_T2CDSO(A) put(taBufBOL1, nRecBOL1, 20, A :3.3)
!-----------------------------------------------------------
! FIELD : T2MAIL MAIL BOX ACCOUNT
#define S_BOL1_T2MAIL peel(pick(nPos, 23, 20), " ")
#define R_BOL1_T2MAIL(A) put(taBufBOL1, nRecBOL1, 23, A :20.20)
!-----------------------------------------------------------
! FIELD : T2LGSB LINGUA STAMPA BOL
#define S_BOL1_T2LGSB peel(pick(nPos, 43, 3), " ")
#define R_BOL1_T2LGSB(A) put(taBufBOL1, nRecBOL1, 43, A :3.3)
!-----------------------------------------------------------
! FIELD : T2ANNO ANNO EMISSIONE
#define S_BOL1_T2ANNO peel(pick(nPos, 46, 4), " ")
#define R_BOL1_T2ANNO(A) put(taBufBOL1, nRecBOL1, 46, A :4.4)
!-----------------------------------------------------------
! FIELD : T2TPOR TIPO ORDINE
#define S_BOL1_T2TPOR peel(pick(nPos, 50, 4), " ")
#define R_BOL1_T2TPOR(A) put(taBufBOL1, nRecBOL1, 50, A :4.4)
!-----------------------------------------------------------
! FIELD : T2DTDL DELIVERY NOTE DT
#define S_BOL1_T2DTDL peel(pick(nPos, 54, 8), " ")
#define R_BOL1_T2DTDL(A) put(taBufBOL1, nRecBOL1, 54, A :8.8)
!-----------------------------------------------------------
! FIELD : T2RIFC CUST.PO  NUMBER
#define S_BOL1_T2RIFC peel(pick(nPos, 62, 10), " ")
#define R_BOL1_T2RIFC(A) put(taBufBOL1, nRecBOL1, 62, A :10.10)
!-----------------------------------------------------------
! FIELD : T2SONR SALES ORD.NR
#define S_BOL1_T2SONR peel(pick(nPos, 72, 10), " ")
#define R_BOL1_T2SONR(A) put(taBufBOL1, nRecBOL1, 72, A :10.10)
!-----------------------------------------------------------
! FIELD : T2MAGA STORAGE LOCATION
#define S_BOL1_T2MAGA peel(pick(nPos, 82, 4), " ")
#define R_BOL1_T2MAGA(A) put(taBufBOL1, nRecBOL1, 82, A :4.4)
!-----------------------------------------------------------
! FIELD : T2NRBO NR BOLLA
#define S_BOL1_T2NRBO peel(pick(nPos, 86, 10), " ")
#define R_BOL1_T2NRBO(A) put(taBufBOL1, nRecBOL1, 86, A :10.10)
!-----------------------------------------------------------
! FIELD : T2DTBO DT BOLLA
#define S_BOL1_T2DTBO peel(pick(nPos, 96, 8), " ")
#define R_BOL1_T2DTBO(A) put(taBufBOL1, nRecBOL1, 96, A :8.8)
!-----------------------------------------------------------
! FIELD : T2CATF CAT. CLIENTE FATT.
#define S_BOL1_T2CATF peel(pick(nPos, 104, 3), " ")
#define R_BOL1_T2CATF(A) put(taBufBOL1, nRecBOL1, 104, A :3.3)
!-----------------------------------------------------------
! FIELD : T2CODF COD.CLIENTE FATT.
#define S_BOL1_T2CODF peel(pick(nPos, 107, 12), " ")
#define R_BOL1_T2CODF(A) put(taBufBOL1, nRecBOL1, 107, A :12.12)
!-----------------------------------------------------------
! FIELD : T2RAGF RAG SOC.FATTURAZ.
#define S_BOL1_T2RAGF peel(pick(nPos, 119, 50), " ")
#define R_BOL1_T2RAGF(A) put(taBufBOL1, nRecBOL1, 119, A :50.50)
!-----------------------------------------------------------
! FIELD : T2RG2F RAG.SOC.2 FATTUR.
#define S_BOL1_T2RG2F peel(pick(nPos, 169, 50), " ")
#define R_BOL1_T2RG2F(A) put(taBufBOL1, nRecBOL1, 169, A :50.50)
!-----------------------------------------------------------
! FIELD : T2INDF INDIRIZZO FATTUR.
#define S_BOL1_T2INDF peel(pick(nPos, 219, 50), " ")
#define R_BOL1_T2INDF(A) put(taBufBOL1, nRecBOL1, 219, A :50.50)
!-----------------------------------------------------------
! FIELD : T2CAPF CAP FATTURAZIONE
#define S_BOL1_T2CAPF peel(pick(nPos, 269, 10), " ")
#define R_BOL1_T2CAPF(A) put(taBufBOL1, nRecBOL1, 269, A :10.10)
!-----------------------------------------------------------
! FIELD : T2LOCF LOCALITA' FATTUR.
#define S_BOL1_T2LOCF peel(pick(nPos, 279, 35), " ")
#define R_BOL1_T2LOCF(A) put(taBufBOL1, nRecBOL1, 279, A :35.35)
!-----------------------------------------------------------
! FIELD : T2PROF PROVINCIA FATT.
#define S_BOL1_T2PROF peel(pick(nPos, 314, 2), " ")
#define R_BOL1_T2PROF(A) put(taBufBOL1, nRecBOL1, 314, A :2.2)
!-----------------------------------------------------------
! FIELD : T2NAZF NAZIONE FATTURAZ.
#define S_BOL1_T2NAZF peel(pick(nPos, 316, 3), " ")
#define R_BOL1_T2NAZF(A) put(taBufBOL1, nRecBOL1, 316, A :3.3)
!-----------------------------------------------------------
! FIELD : T2CATD CAT. CLIENTE DEST.
#define S_BOL1_T2CATD peel(pick(nPos, 319, 3), " ")
#define R_BOL1_T2CATD(A) put(taBufBOL1, nRecBOL1, 319, A :3.3)
!-----------------------------------------------------------
! FIELD : T2CODD COD.CLIENTE DEST.
#define S_BOL1_T2CODD peel(pick(nPos, 322, 12), " ")
#define R_BOL1_T2CODD(A) put(taBufBOL1, nRecBOL1, 322, A :12.12)
!-----------------------------------------------------------
! FIELD : T2RAGD RAG SOC.DESTINAZ.
#define S_BOL1_T2RAGD peel(pick(nPos, 334, 50), " ")
#define R_BOL1_T2RAGD(A) put(taBufBOL1, nRecBOL1, 334, A :50.50)
!-----------------------------------------------------------
! FIELD : T2RG2D RAG.SOC.2 DESTIN.
#define S_BOL1_T2RG2D peel(pick(nPos, 384, 50), " ")
#define R_BOL1_T2RG2D(A) put(taBufBOL1, nRecBOL1, 384, A :50.50)
!-----------------------------------------------------------
! FIELD : T2INDD INDIRIZZO DESTIN.
#define S_BOL1_T2INDD peel(pick(nPos, 434, 50), " ")
#define R_BOL1_T2INDD(A) put(taBufBOL1, nRecBOL1, 434, A :50.50)
!-----------------------------------------------------------
! FIELD : T2CAPD CAP DESTINAZIONE
#define S_BOL1_T2CAPD peel(pick(nPos, 484, 10), " ")
#define R_BOL1_T2CAPD(A) put(taBufBOL1, nRecBOL1, 484, A :10.10)
!-----------------------------------------------------------
! FIELD : T2LOCD LOCALITA' DESTIN.
#define S_BOL1_T2LOCD peel(pick(nPos, 494, 35), " ")
#define R_BOL1_T2LOCD(A) put(taBufBOL1, nRecBOL1, 494, A :35.35)
!-----------------------------------------------------------
! FIELD : T2PROD PROVINCIA DEST.
#define S_BOL1_T2PROD peel(pick(nPos, 529, 2), " ")
#define R_BOL1_T2PROD(A) put(taBufBOL1, nRecBOL1, 529, A :2.2)
!-----------------------------------------------------------
! FIELD : T2NAZD NAZIONE DESTINAZ.
#define S_BOL1_T2NAZD peel(pick(nPos, 531, 3), " ")
#define R_BOL1_T2NAZD(A) put(taBufBOL1, nRecBOL1, 531, A :3.3)
!-----------------------------------------------------------
! FIELD : T2TPTR TIPO    TRASPORTO
#define S_BOL1_T2TPTR peel(pick(nPos, 534, 25), " ")
#define R_BOL1_T2TPTR(A) put(taBufBOL1, nRecBOL1, 534, A :25.25)
!-----------------------------------------------------------
! FIELD : T2DTTA CONSEGNA TASSATIVA
#define S_BOL1_T2DTTA peel(pick(nPos, 559, 8), " ")
#define R_BOL1_T2DTTA(A) put(taBufBOL1, nRecBOL1, 559, A :8.8)
!-----------------------------------------------------------
! FIELD : T2DNNR DELIV.NOTE NUMBER
#define S_BOL1_T2DNNR peel(pick(nPos, 567, 10), " ")
#define R_BOL1_T2DNNR(A) put(taBufBOL1, nRecBOL1, 567, A :10.10)
!-----------------------------------------------------------
! FIELD : T2CONT IMPORTO CONTRASS.
#define S_BOL1_T2CONT peel(pick(nPos, 577, 15), " ")
#define R_BOL1_T2CONT(A) put(taBufBOL1, nRecBOL1, 577, A :15.15)
!-----------------------------------------------------------
! FIELD : T2DIVC VALUTA CONTRASS.
#define S_BOL1_T2DIVC peel(pick(nPos, 592, 3), " ")
#define R_BOL1_T2DIVC(A) put(taBufBOL1, nRecBOL1, 592, A :3.3)
!-----------------------------------------------------------
! FIELD : T2TIPC TIPO CONTRASS.
#define S_BOL1_T2TIPC peel(pick(nPos, 595, 3), " ")
#define R_BOL1_T2TIPC(A) put(taBufBOL1, nRecBOL1, 595, A :3.3)
!-----------------------------------------------------------
! FIELD : T2VETT COD.VETTORE
#define S_BOL1_T2VETT peel(pick(nPos, 598, 10), " ")
#define R_BOL1_T2VETT(A) put(taBufBOL1, nRecBOL1, 598, A :10.10)
!-----------------------------------------------------------
! FIELD : T2ORA ORA
#define S_BOL1_T2ORA peel(pick(nPos, 608, 6), " ")
#define R_BOL1_T2ORA(A) put(taBufBOL1, nRecBOL1, 608, A :6.6)
!-----------------------------------------------------------
! FIELD : T2PESO PESO LORDO
#define S_BOL1_T2PESO peel(pick(nPos, 614, 13), " ")
#define R_BOL1_T2PESO(A) put(taBufBOL1, nRecBOL1, 614, A :13.13)
!-----------------------------------------------------------
!===========================================================
! File : BOL2
!===========================================================
! FIELD : R2TPRK TIPO RECORD=BOL2
#define S_BOL2_R2TPRK peel(pick(nPos, 1, 4), " ")
#define R_BOL2_R2TPRK(A) put(taBufBOL2, nRecBOL2, 1, A :4.4)
!-----------------------------------------------------------
! FIELD : R2DELY DELYVERY NUMBER
#define S_BOL2_R2DELY peel(pick(nPos, 5, 10), " ")
#define R_BOL2_R2DELY(A) put(taBufBOL2, nRecBOL2, 5, A :10.10)
!-----------------------------------------------------------
! FIELD : R2ANNO ANNO EMISSIONE
#define S_BOL2_R2ANNO peel(pick(nPos, 15, 4), " ")
#define R_BOL2_R2ANNO(A) put(taBufBOL2, nRecBOL2, 15, A :4.4)
!-----------------------------------------------------------
! FIELD : R2TPCO TP CONF PICK/EVASI
#define S_BOL2_R2TPCO peel(pick(nPos, 19, 4), " ")
#define R_BOL2_R2TPCO(A) put(taBufBOL2, nRecBOL2, 19, A :4.4)
!-----------------------------------------------------------
! FIELD : R2NRBO NR BOLLA
#define S_BOL2_R2NRBO peel(pick(nPos, 23, 10), " ")
#define R_BOL2_R2NRBO(A) put(taBufBOL2, nRecBOL2, 23, A :10.10)
!-----------------------------------------------------------
! FIELD : R2DTBO DT BOLLA
#define S_BOL2_R2DTBO peel(pick(nPos, 33, 8), " ")
#define R_BOL2_R2DTBO(A) put(taBufBOL2, nRecBOL2, 33, A :8.8)
!-----------------------------------------------------------
! FIELD : R2MAGA STORAGE LOCATION
#define S_BOL2_R2MAGA peel(pick(nPos, 41, 4), " ")
#define R_BOL2_R2MAGA(A) put(taBufBOL2, nRecBOL2, 41, A :4.4)
!-----------------------------------------------------------
! FIELD : R2NRRI NUMERO RIGA
#define S_BOL2_R2NRRI peel(pick(nPos, 45, 6), " ")
#define R_BOL2_R2NRRI(A) put(taBufBOL2, nRecBOL2, 45, A :6.6)
!-----------------------------------------------------------
! FIELD : R2ARTI COD.ARTICOLO
#define S_BOL2_R2ARTI peel(pick(nPos, 51, 17), " ")
#define R_BOL2_R2ARTI(A) put(taBufBOL2, nRecBOL2, 51, A :17.17)
!-----------------------------------------------------------
! FIELD : R2DSAR DESCRIZ.ARTICOLO
#define S_BOL2_R2DSAR peel(pick(nPos, 68, 50), " ")
#define R_BOL2_R2DSAR(A) put(taBufBOL2, nRecBOL2, 68, A :50.50)
!-----------------------------------------------------------
! FIELD : R2ARTC COD.ARTIC.CLIENTE
#define S_BOL2_R2ARTC peel(pick(nPos, 118, 20), " ")
#define R_BOL2_R2ARTC(A) put(taBufBOL2, nRecBOL2, 118, A :20.20)
!-----------------------------------------------------------
! FIELD : R2NRRC NR RIGA ORD.CLIEN
#define S_BOL2_R2NRRC peel(pick(nPos, 138, 6), " ")
#define R_BOL2_R2NRRC(A) put(taBufBOL2, nRecBOL2, 138, A :6.6)
!-----------------------------------------------------------
! FIELD : R2QTUN QTA' EVASA UNIT
#define S_BOL2_R2QTUN peel(pick(nPos, 144, 15), " ")
#define R_BOL2_R2QTUN(A) put(taBufBOL2, nRecBOL2, 144, A :15.15)
!-----------------------------------------------------------
! FIELD : R2PESL PESO LORDO
#define S_BOL2_R2PESL peel(pick(nPos, 159, 13), " ")
#define R_BOL2_R2PESL(A) put(taBufBOL2, nRecBOL2, 159, A :13.13)
!-----------------------------------------------------------
! FIELD : R2RECD REASON CODE
#define S_BOL2_R2RECD peel(pick(nPos, 172, 4), " ")
#define R_BOL2_R2RECD(A) put(taBufBOL2, nRecBOL2, 172, A :4.4)
!-----------------------------------------------------------