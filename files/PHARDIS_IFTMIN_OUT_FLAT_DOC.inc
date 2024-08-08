! File PHARDIS_IFTMIN_BRT : 
!===========================================================
! Line : IFT1 
!===========================================================
! FIELD : TVINDE MANDANTE
#define S_IFT1_TVINDE peel(pick(nPos, 1, 30), " ")
#define R_IFT1_TVINDE(A) put(nRec, 1, A :30.30)
!-----------------------------------------------------------
! FIELD : TVNUBA NR.BOLLA
#define S_IFT1_TVNUBA peel(pick(nPos, 31, 15), " ")
#define R_IFT1_TVNUBA(A) put(nRec, 31, A :15.15)
!-----------------------------------------------------------
! FIELD : TVDABA DATA BOLLA
#define S_IFT1_TVDABA peel(pick(nPos, 46, 8), " ")
#define R_IFT1_TVDABA(A) put(nRec, 46, build(number(A):R08.0))
!-----------------------------------------------------------
! FIELD : TVORSP DELIVERY ADIDAS
#define S_IFT1_TVORSP peel(pick(nPos, 54, 15), " ")
#define R_IFT1_TVORSP(A) put(nRec, 54, A :15.15)
!-----------------------------------------------------------
! FIELD : TVMITT RAG.SOC.MITTENTE
#define S_IFT1_TVMITT peel(pick(nPos, 69, 30), " ")
#define R_IFT1_TVMITT(A) put(nRec, 69, A :30.30)
!-----------------------------------------------------------
! FIELD : TVINMT INDIRIZZO MITT.
#define S_IFT1_TVINMT peel(pick(nPos, 99, 30), " ")
#define R_IFT1_TVINMT(A) put(nRec, 99, A :30.30)
!-----------------------------------------------------------
! FIELD : TVCAPM CAP MITTENTE
#define S_IFT1_TVCAPM peel(pick(nPos, 129, 5), " ")
#define R_IFT1_TVCAPM(A) put(nRec, 129, build(number(A):R05.0))
!-----------------------------------------------------------
! FIELD : TVLOCM LOC.MITTENTE
#define S_IFT1_TVLOCM peel(pick(nPos, 134, 30), " ")
#define R_IFT1_TVLOCM(A) put(nRec, 134, A :30.30)
!-----------------------------------------------------------
! FIELD : TVPRVM PROV.MITTENTE
#define S_IFT1_TVPRVM peel(pick(nPos, 164, 4), " ")
#define R_IFT1_TVPRVM(A) put(nRec, 164, A :4.4)
!-----------------------------------------------------------
! FIELD : TVNAZM NAZIONE MITTENTE
#define S_IFT1_TVNAZM peel(pick(nPos, 168, 30), " ")
#define R_IFT1_TVNAZM(A) put(nRec, 168, A :30.30)
!-----------------------------------------------------------
! FIELD : TVDEST RAG SOC DESTINAT
#define S_IFT1_TVDEST peel(pick(nPos, 198, 30), " ")
#define R_IFT1_TVDEST(A) put(nRec, 198, A :30.30)
!-----------------------------------------------------------
! FIELD : TVINDI INDIRIZZO DEST.
#define S_IFT1_TVINDI peel(pick(nPos, 228, 30), " ")
#define R_IFT1_TVINDI(A) put(nRec, 228, A :30.30)
!-----------------------------------------------------------
! FIELD : TVCAPD CAP DESTINATARIO
#define S_IFT1_TVCAPD peel(pick(nPos, 258, 10), " ")
#define R_IFT1_TVCAPD(A) put(nRec, 258, A :10.10)
!-----------------------------------------------------------
! FIELD : TVLOCD LOC.DESTINATARIO
#define S_IFT1_TVLOCD peel(pick(nPos, 268, 30), " ")
#define R_IFT1_TVLOCD(A) put(nRec, 268, A :30.30)
!-----------------------------------------------------------
! FIELD : TVPRVD PROV DEST.
#define S_IFT1_TVPRVD peel(pick(nPos, 298, 4), " ")
#define R_IFT1_TVPRVD(A) put(nRec, 298, A :4.4)
!-----------------------------------------------------------
! FIELD : TVNAZD NAZIONE DEST
#define S_IFT1_TVNAZD peel(pick(nPos, 302, 30), " ")
#define R_IFT1_TVNAZD(A) put(nRec, 302, A :30.30)
!-----------------------------------------------------------
! FIELD : TVPESO PESO SPEDIZIONE
#define S_IFT1_TVPESO peel(pick(nPos, 332, 15), " ")
#define R_IFT1_TVPESO(A) put(nRec, 332, build(number(A):R015.0))
!-----------------------------------------------------------
! FIELD : TVVOLU VOLUME SPEDIZIONE
#define S_IFT1_TVVOLU peel(pick(nPos, 347, 15), " ")
#define R_IFT1_TVVOLU(A) put(nRec, 347, build(number(A):R015.0))
!-----------------------------------------------------------
! FIELD : TVVALU VALUTA CONTRASS
#define S_IFT1_TVVALU peel(pick(nPos, 362, 30), " ")
#define R_IFT1_TVVALU(A) put(nRec, 362, A :30.30)
!-----------------------------------------------------------
! FIELD : TVIMPO IMPORTO CONTRASS
#define S_IFT1_TVIMPO peel(pick(nPos, 392, 18), " ")
#define R_IFT1_TVIMPO(A) put(nRec, 392, build(number(A):R018.0))
!-----------------------------------------------------------
! FIELD : TVCOLL NUMERO COLLI SPED
#define S_IFT1_TVCOLL peel(pick(nPos, 410, 9), " ")
#define R_IFT1_TVCOLL(A) put(nRec, 410, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : TVNRC1 DA SEGNACOLLO
#define S_IFT1_TVNRC1 peel(pick(nPos, 419, 9), " ")
#define R_IFT1_TVNRC1(A) put(nRec, 419, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : TVNRC2 A SEGNACOLLO
#define S_IFT1_TVNRC2 peel(pick(nPos, 428, 9), " ")
#define R_IFT1_TVNRC2(A) put(nRec, 428, build(number(A):R09.0))
!-----------------------------------------------------------
! FIELD : TVNOTE NOTE
#define S_IFT1_TVNOTE peel(pick(nPos, 437, 80), " ")
#define R_IFT1_TVNOTE(A) put(nRec, 437, A :80.80)
!-----------------------------------------------------------
! FIELD : TVVE01 VETTORE
#define S_IFT1_TVVE01 peel(pick(nPos, 517, 6), " ")
#define R_IFT1_TVVE01(A) put(nRec, 517, A :6.6)
!-----------------------------------------------------------
! FIELD : TVNUDI NR.DISTINTA
#define S_IFT1_TVNUDI peel(pick(nPos, 523, 10), " ")
#define R_IFT1_TVNUDI(A) put(nRec, 523, A :10.10)
!-----------------------------------------------------------
! FIELD : TVDTDI DT.DISTINTA
#define S_IFT1_TVDTDI peel(pick(nPos, 533, 8), " ")
#define R_IFT1_TVDTDI(A) put(nRec, 533, A :8.8)
!-----------------------------------------------------------
! FIELD : TVCPAG COND PAG
#define S_IFT1_TVCPAG peel(pick(nPos, 541, 3), " ")
#define R_IFT1_TVCPAG(A) put(nRec, 541, A :3.3)
!-----------------------------------------------------------
! FIELD : TVCPIA CONS PIANI
#define S_IFT1_TVCPIA peel(pick(nPos, 544, 1), " ")
#define R_IFT1_TVCPIA(A) put(nRec, 544, A :1.1)
!-----------------------------------------------------------
! FIELD : TVTELF TEL.PRIMA CONS.
#define S_IFT1_TVTELF peel(pick(nPos, 545, 20), " ")
#define R_IFT1_TVTELF(A) put(nRec, 545, A :20.20)
!-----------------------------------------------------------
! FIELD : TVDTC1 DT.CONS. TASSAT.1
#define S_IFT1_TVDTC1 peel(pick(nPos, 565, 8), " ")
#define R_IFT1_TVDTC1(A) put(nRec, 565, A :8.8)
!-----------------------------------------------------------
! FIELD : TVDTC2 DT.CONS. TASSAT.2
#define S_IFT1_TVDTC2 peel(pick(nPos, 573, 8), " ")
#define R_IFT1_TVDTC2(A) put(nRec, 573, A :8.8)
!-----------------------------------------------------------
! FIELD : TVNOT1 NOTE 1
#define S_IFT1_TVNOT1 peel(pick(nPos, 581, 65), " ")
#define R_IFT1_TVNOT1(A) put(nRec, 581, A :65.65)
!-----------------------------------------------------------
! FIELD : TVNOT2 NOTE 2
#define S_IFT1_TVNOT2 peel(pick(nPos, 646, 65), " ")
#define R_IFT1_TVNOT2(A) put(nRec, 646, A :65.65)
!-----------------------------------------------------------
! FIELD : TVNOT3 NOTE 3
#define S_IFT1_TVNOT3 peel(pick(nPos, 711, 65), " ")
#define R_IFT1_TVNOT3(A) put(nRec, 711, A :65.65)
!-----------------------------------------------------------
! FIELD : TVNOT4 NOTE 4
#define S_IFT1_TVNOT4 peel(pick(nPos, 776, 65), " ")
#define R_IFT1_TVNOT4(A) put(nRec, 776, A :65.65)
!-----------------------------------------------------------
! FIELD : TVNOT5 NOTE 5
#define S_IFT1_TVNOT5 peel(pick(nPos, 841, 65), " ")
#define R_IFT1_TVNOT5(A) put(nRec, 841, A :65.65)
!-----------------------------------------------------------
! FIELD : TVACTY A=ANN
#define S_IFT1_TVACTY peel(pick(nPos, 906, 1), " ")
#define R_IFT1_TVACTY(A) put(nRec, 906, A :1.1)
!-----------------------------------------------------------
! FIELD : TVTRAS T=TRAS
#define S_IFT1_TVTRAS peel(pick(nPos, 907, 1), " ")
#define R_IFT1_TVTRAS(A) put(nRec, 907, A :1.1)
!-----------------------------------------------------------
! FIELD : TVTITR M=MAN A=AUT
#define S_IFT1_TVTITR peel(pick(nPos, 908, 1), " ")
#define R_IFT1_TVTITR(A) put(nRec, 908, A :1.1)
!-----------------------------------------------------------
! FIELD : TVRGBO RAGRUPPAMENTO
#define S_IFT1_TVRGBO peel(pick(nPos, 909, 10), " ")
#define R_IFT1_TVRGBO(A) put(nRec, 909, A :10.10)
!-----------------------------------------------------------
! FIELD : TVRIDI NR. RIGA DISTINTA
#define S_IFT1_TVRIDI peel(pick(nPos, 919, 3), " ")
#define R_IFT1_TVRIDI(A) put(nRec, 919, A :3.3)
!-----------------------------------------------------------
! FIELD : TVCAPD2 CAP DEST.ALPHA
#define S_IFT1_TVCAPD2 peel(pick(nPos, 922, 15), " ")
#define R_IFT1_TVCAPD2(A) put(nRec, 922, A :15.15)
!-----------------------------------------------------------
! FIELD : TVCOMT COD. MITTENTE
#define S_IFT1_TVCOMT peel(pick(nPos, 937, 10), " ")
#define R_IFT1_TVCOMT(A) put(nRec, 937, A :10.10)
!-----------------------------------------------------------
! FIELD : TVCODE COD. DESTINATARIO
#define S_IFT1_TVCODE peel(pick(nPos, 947, 10), " ")
#define R_IFT1_TVCODE(A) put(nRec, 947, A :10.10)
!-----------------------------------------------------------
! FIELD : TVNOTT Note per FTX SPH
#define S_IFT1_TVNOTT peel(pick(nPos, 957, 100), " ")
#define R_IFT1_TVNOTT(A) put(nRec, 957, A :100.100)
!-----------------------------------------------------------
! FIELD : TVNOTZ Note per FTX AVI
#define S_IFT1_TVNOTZ peel(pick(nPos, 1057, 100), " ")
#define R_IFT1_TVNOTZ(A) put(nRec, 1057, A :100.100)
!-----------------------------------------------------------
! FIELD : TVDES2 Note per 3036.2 NAD-CN
#define S_IFT1_TVDES2 peel(pick(nPos, 1157, 35), " ")
#define R_IFT1_TVDES2(A) put(nRec, 1157, A :35.35)
!-----------------------------------------------------------
! FIELD : TVCOM1 Note per FTX DEL
#define S_IFT1_TVCOM1 peel(pick(nPos, 1192, 70), " ")
#define R_IFT1_TVCOM1(A) put(nRec, 1192, A :70.70)
!-----------------------------------------------------------
! FIELD : TVCOM2 Note per FTX DEL
#define S_IFT1_TVCOM2 peel(pick(nPos, 1262, 70), " ")
#define R_IFT1_TVCOM2(A) put(nRec, 1262, A :70.70)
!-----------------------------------------------------------
! FIELD : TVCOM3 Note per FTX DEL
#define S_IFT1_TVCOM3 peel(pick(nPos, 1332, 70), " ")
#define R_IFT1_TVCOM3(A) put(nRec, 1332, A :70.70)
!-----------------------------------------------------------
! FIELD : TVCOM4 Note per FTX DEL
#define S_IFT1_TVCOM4 peel(pick(nPos, 1402, 70), " ")
#define R_IFT1_TVCOM4(A) put(nRec, 1402, A :70.70)
!-----------------------------------------------------------
! FIELD : TVCOM5 Note per FTX DEL
#define S_IFT1_TVCOM5 peel(pick(nPos, 1472, 70), " ")
#define R_IFT1_TVCOM5(A) put(nRec, 1472, A :70.70)
!-----------------------------------------------------------
