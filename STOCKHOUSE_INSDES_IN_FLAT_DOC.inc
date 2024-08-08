!===========================================================
! File : UNA
!===========================================================
! FIELD : tag tag
#define S_UNA_tag peel(pick(nPos, 1, 3), " ")
#define R_UNA_tag(A) put(nRec, 1, A :3.3)
!-----------------------------------------------------------
! FIELD : UNA1 Component data element separator
#define S_UNA_UNA1 peel(pick(nPos, 4, 1), " ")
#define R_UNA_UNA1(A) put(nRec, 4, A :1.1)
!-----------------------------------------------------------
! FIELD : UNA2 Data element separator
#define S_UNA_UNA2 peel(pick(nPos, 5, 1), " ")
#define R_UNA_UNA2(A) put(nRec, 5, A :1.1)
!-----------------------------------------------------------
! FIELD : UNA3 Decimal notation
#define S_UNA_UNA3 peel(pick(nPos, 6, 1), " ")
#define R_UNA_UNA3(A) put(nRec, 6, A :1.1)
!-----------------------------------------------------------
! FIELD : UNA4 Release character
#define S_UNA_UNA4 peel(pick(nPos, 7, 1), " ")
#define R_UNA_UNA4(A) put(nRec, 7, A :1.1)
!-----------------------------------------------------------
! FIELD : UNA5 Reserved (used from syntax versio4)
#define S_UNA_UNA5 peel(pick(nPos, 8, 1), " ")
#define R_UNA_UNA5(A) put(nRec, 8, A :1.1)
!-----------------------------------------------------------
! FIELD : UNA6 Segment terminator
#define S_UNA_UNA6 peel(pick(nPos, 9, 1), " ")
#define R_UNA_UNA6(A) put(nRec, 9, A :1.1)
!-----------------------------------------------------------
!===========================================================
! File : UNB
!===========================================================
! FIELD : tag tag
#define S_UNB_tag peel(pick(nPos, 1, 3), " ")
#define R_UNB_tag(A) put(nRec, 1, A :3.3)
!-----------------------------------------------------------
! FIELD : e0001 Syntax identifier
#define S_UNB_e0001 peel(pick(nPos, 4, 4), " ")
#define R_UNB_e0001(A) put(nRec, 4, A :4.4)
!-----------------------------------------------------------
! FIELD : e0002 Syntax versionumber
#define S_UNB_e0002 peel(pick(nPos, 8, 1), " ")
#define R_UNB_e0002(A) put(nRec, 8, build(number(A):R01.0))
!-----------------------------------------------------------
! FIELD : e0004 Sender identification
#define S_UNB_e0004 peel(pick(nPos, 9, 35), " ")
#define R_UNB_e0004(A) put(nRec, 9, A :35.35)
!-----------------------------------------------------------
! FIELD : e0007 Partner identificatiocode qualifier
#define S_UNB_e0007 peel(pick(nPos, 44, 4), " ")
#define R_UNB_e0007(A) put(nRec, 44, A :4.4)
!-----------------------------------------------------------
! FIELD : e0008 Address for reverse routing
#define S_UNB_e0008 peel(pick(nPos, 48, 14), " ")
#define R_UNB_e0008(A) put(nRec, 48, A :14.14)
!-----------------------------------------------------------
! FIELD : e0010 Recipient identification
#define S_UNB_e0010 peel(pick(nPos, 62, 35), " ")
#define R_UNB_e0010(A) put(nRec, 62, A :35.35)
!-----------------------------------------------------------
! FIELD : e0007_2 Partner identificatiocode qualifier
#define S_UNB_e0007_2 peel(pick(nPos, 97, 4), " ")
#define R_UNB_e0007_2(A) put(nRec, 97, A :4.4)
!-----------------------------------------------------------
! FIELD : e0014 Routing address
#define S_UNB_e0014 peel(pick(nPos, 101, 14), " ")
#define R_UNB_e0014(A) put(nRec, 101, A :14.14)
!-----------------------------------------------------------
! FIELD : e0017 Date of preparation
#define S_UNB_e0017 peel(pick(nPos, 115, 6), " ")
#define R_UNB_e0017(A) put(nRec, 115, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : e0019 Time of preparation
#define S_UNB_e0019 peel(pick(nPos, 121, 4), " ")
#define R_UNB_e0019(A) put(nRec, 121, build(number(A):R04.0))
!-----------------------------------------------------------
! FIELD : e0020 Interchange control reference
#define S_UNB_e0020 peel(pick(nPos, 125, 14), " ")
#define R_UNB_e0020(A) put(nRec, 125, A :14.14)
!-----------------------------------------------------------
! FIELD : e0022 Recipient's reference/password
#define S_UNB_e0022 peel(pick(nPos, 139, 14), " ")
#define R_UNB_e0022(A) put(nRec, 139, A :14.14)
!-----------------------------------------------------------
! FIELD : e0025 Recipient's reference/password qualifier
#define S_UNB_e0025 peel(pick(nPos, 153, 2), " ")
#define R_UNB_e0025(A) put(nRec, 153, A :2.2)
!-----------------------------------------------------------
! FIELD : e0026 Applicatioreference
#define S_UNB_e0026 peel(pick(nPos, 155, 14), " ")
#define R_UNB_e0026(A) put(nRec, 155, A :14.14)
!-----------------------------------------------------------
! FIELD : e0029 Processing priority code
#define S_UNB_e0029 peel(pick(nPos, 169, 1), " ")
#define R_UNB_e0029(A) put(nRec, 169, A :1.1)
!-----------------------------------------------------------
! FIELD : e0031 Acknowledgement request
#define S_UNB_e0031 peel(pick(nPos, 170, 1), " ")
#define R_UNB_e0031(A) put(nRec, 170, build(number(A):R01.0))
!-----------------------------------------------------------
! FIELD : e0032 Communications agreement ID
#define S_UNB_e0032 peel(pick(nPos, 171, 35), " ")
#define R_UNB_e0032(A) put(nRec, 171, A :35.35)
!-----------------------------------------------------------
! FIELD : e0035 Test indicator
#define S_UNB_e0035 peel(pick(nPos, 206, 1), " ")
#define R_UNB_e0035(A) put(nRec, 206, build(number(A):R01.0))
!-----------------------------------------------------------
!===========================================================
! File : UNH
!===========================================================
! FIELD : tag tag
#define S_UNH_tag peel(pick(nPos, 1, 3), " ")
#define R_UNH_tag(A) put(nRec, 1, A :3.3)
!-----------------------------------------------------------
! FIELD : e0062 Message reference number
#define S_UNH_e0062 peel(pick(nPos, 4, 14), " ")
#define R_UNH_e0062(A) put(nRec, 4, A :14.14)
!-----------------------------------------------------------
! FIELD : e0065 Message type identifier
#define S_UNH_e0065 peel(pick(nPos, 18, 6), " ")
#define R_UNH_e0065(A) put(nRec, 18, A :6.6)
!-----------------------------------------------------------
! FIELD : e0052 Message type versionumber
#define S_UNH_e0052 peel(pick(nPos, 24, 3), " ")
#define R_UNH_e0052(A) put(nRec, 24, A :3.3)
!-----------------------------------------------------------
! FIELD : e0054 Message type release number
#define S_UNH_e0054 peel(pick(nPos, 27, 3), " ")
#define R_UNH_e0054(A) put(nRec, 27, A :3.3)
!-----------------------------------------------------------
! FIELD : e0051 Controlling agency
#define S_UNH_e0051 peel(pick(nPos, 30, 2), " ")
#define R_UNH_e0051(A) put(nRec, 30, A :2.2)
!-----------------------------------------------------------
! FIELD : e0057 Associatioassigned code
#define S_UNH_e0057 peel(pick(nPos, 32, 6), " ")
#define R_UNH_e0057(A) put(nRec, 32, A :6.6)
!-----------------------------------------------------------
! FIELD : e0068 Commoaccess reference
#define S_UNH_e0068 peel(pick(nPos, 38, 35), " ")
#define R_UNH_e0068(A) put(nRec, 38, A :35.35)
!-----------------------------------------------------------
! FIELD : e0070 Sequence message transfer number
#define S_UNH_e0070 peel(pick(nPos, 73, 2), " ")
#define R_UNH_e0070(A) put(nRec, 73, build(number(A):R02.0))
!-----------------------------------------------------------
! FIELD : e0073 First/last sequence message transfer indication
#define S_UNH_e0073 peel(pick(nPos, 75, 1), " ")
#define R_UNH_e0073(A) put(nRec, 75, A :1.1)
!-----------------------------------------------------------
!===========================================================
! File : BGM
!===========================================================
! FIELD : tag tag
#define S_BGM_tag peel(pick(nPos, 1, 3), " ")
#define R_BGM_tag(A) put(nRec, 1, A :3.3)
!-----------------------------------------------------------
! FIELD : EBMENC Nome Codice Messaggio
#define S_BGM_EBMENC peel(pick(nPos, 4, 3), " ")
#define R_BGM_EBMENC(A) put(nRec, 4, A :3.3)
!-----------------------------------------------------------
! FIELD : EBLIQU Qualificativo Codice Lista
#define S_BGM_EBLIQU peel(pick(nPos, 7, 3), " ")
#define R_BGM_EBLIQU(A) put(nRec, 7, A :3.3)
!-----------------------------------------------------------
! FIELD : EBLIRA Codice Responsabile Agenzia
#define S_BGM_EBLIRA peel(pick(nPos, 10, 3), " ")
#define R_BGM_EBLIRA(A) put(nRec, 10, A :3.3)
!-----------------------------------------------------------
! FIELD : EBMENM Nome Messaggio
#define S_BGM_EBMENM peel(pick(nPos, 13, 35), " ")
#define R_BGM_EBMENM(A) put(nRec, 13, A :35.35)
!-----------------------------------------------------------
! FIELD : EBMENN Nome Messaggio
#define S_BGM_EBMENN peel(pick(nPos, 48, 35), " ")
#define R_BGM_EBMENN(A) put(nRec, 48, A :35.35)
!-----------------------------------------------------------
! FIELD : EBMEFU Funzione Messaggio
#define S_BGM_EBMEFU peel(pick(nPos, 83, 3), " ")
#define R_BGM_EBMEFU(A) put(nRec, 83, A :3.3)
!-----------------------------------------------------------
! FIELD : EBRETY Tipo Risposta
#define S_BGM_EBRETY peel(pick(nPos, 86, 3), " ")
#define R_BGM_EBRETY(A) put(nRec, 86, A :3.3)
!-----------------------------------------------------------
!===========================================================
! File : DTM1
!===========================================================
! FIELD : tag tag
#define S_DTM1_tag peel(pick(nPos, 1, 3), " ")
#define R_DTM1_tag(A) put(nRec, 1, A :3.3)
!-----------------------------------------------------------
! FIELD : E4CODI ID- Qualificatore
#define S_DTM1_E4CODI peel(pick(nPos, 4, 3), " ")
#define R_DTM1_E4CODI(A) put(nRec, 4, A :3.3)
!-----------------------------------------------------------
! FIELD : E4VALO AN- Valore
#define S_DTM1_E4VALO peel(pick(nPos, 7, 35), " ")
#define R_DTM1_E4VALO(A) put(nRec, 7, A :35.35)
!-----------------------------------------------------------
! FIELD : E4FORM ID- Formato
#define S_DTM1_E4FORM peel(pick(nPos, 42, 3), " ")
#define R_DTM1_E4FORM(A) put(nRec, 42, A :3.3)
!-----------------------------------------------------------
!===========================================================
! File : FTX1
!===========================================================
! FIELD : tag tag
#define S_FTX1_tag peel(pick(nPos, 1, 3), " ")
#define R_FTX1_tag(A) put(nRec, 1, A :3.3)
!-----------------------------------------------------------
! FIELD : EFIDTX ID- Codice Soggetto
#define S_FTX1_EFIDTX peel(pick(nPos, 4, 3), " ")
#define R_FTX1_EFIDTX(A) put(nRec, 4, A :3.3)
!-----------------------------------------------------------
! FIELD : EFCDFU ID- Codice Funzione
#define S_FTX1_EFCDFU peel(pick(nPos, 7, 3), " ")
#define R_FTX1_EFCDFU(A) put(nRec, 7, A :3.3)
!-----------------------------------------------------------
! FIELD : EFCDTE AN- Codice Testo
#define S_FTX1_EFCDTE peel(pick(nPos, 10, 17), " ")
#define R_FTX1_EFCDTE(A) put(nRec, 10, A :17.17)
!-----------------------------------------------------------
! FIELD : EFCLQU ID- Codice Lista
#define S_FTX1_EFCLQU peel(pick(nPos, 27, 3), " ")
#define R_FTX1_EFCLQU(A) put(nRec, 27, A :3.3)
!-----------------------------------------------------------
! FIELD : EFCLRE ID- Codice Resp.Agenzia
#define S_FTX1_EFCLRE peel(pick(nPos, 30, 3), " ")
#define R_FTX1_EFCLRE(A) put(nRec, 30, A :3.3)
!-----------------------------------------------------------
! FIELD : EFTES1 AN- Testo Libero 1
#define S_FTX1_EFTES1 peel(pick(nPos, 33, 512), " ")
#define R_FTX1_EFTES1(A) put(nRec, 33, A :512.512)
!-----------------------------------------------------------
! FIELD : EFTES2 AN- Testo Libero 2
#define S_FTX1_EFTES2 peel(pick(nPos, 545, 512), " ")
#define R_FTX1_EFTES2(A) put(nRec, 545, A :512.512)
!-----------------------------------------------------------
! FIELD : EFTES3 AN- Testo Libero 3
#define S_FTX1_EFTES3 peel(pick(nPos, 1057, 512), " ")
#define R_FTX1_EFTES3(A) put(nRec, 1057, A :512.512)
!-----------------------------------------------------------
! FIELD : EFTES4 AN- Testo Libero 4
#define S_FTX1_EFTES4 peel(pick(nPos, 1569, 512), " ")
#define R_FTX1_EFTES4(A) put(nRec, 1569, A :512.512)
!-----------------------------------------------------------
! FIELD : EFTES5 AN- Testo Libero 5
#define S_FTX1_EFTES5 peel(pick(nPos, 2081, 512), " ")
#define R_FTX1_EFTES5(A) put(nRec, 2081, A :512.512)
!-----------------------------------------------------------
! FIELD : EFCDLI AN- Codice Lingua
#define S_FTX1_EFCDLI peel(pick(nPos, 2593, 3), " ")
#define R_FTX1_EFCDLI(A) put(nRec, 2593, A :3.3)
!-----------------------------------------------------------
! FIELD : E4447 AN-Code
#define S_FTX1_E4447 peel(pick(nPos, 2596, 3), " ")
#define R_FTX1_E4447(A) put(nRec, 2596, A :3.3)
!-----------------------------------------------------------
!===========================================================
! File : RFF1
!===========================================================
! FIELD : tag tag
#define S_RFF1_tag peel(pick(nPos, 1, 3), " ")
#define R_RFF1_tag(A) put(nRec, 1, A :3.3)
!-----------------------------------------------------------
! FIELD : ERQURI ID- Qualif.Riferimenti
#define S_RFF1_ERQURI peel(pick(nPos, 4, 3), " ")
#define R_RFF1_ERQURI(A) put(nRec, 4, A :3.3)
!-----------------------------------------------------------
! FIELD : ERNRRI AN- Numero Riferimento
#define S_RFF1_ERNRRI peel(pick(nPos, 7, 35), " ")
#define R_RFF1_ERNRRI(A) put(nRec, 7, A :35.35)
!-----------------------------------------------------------
! FIELD : ERNRLI AN- Numero Linea
#define S_RFF1_ERNRLI peel(pick(nPos, 42, 6), " ")
#define R_RFF1_ERNRLI(A) put(nRec, 42, A :6.6)
!-----------------------------------------------------------
! FIELD : ERNRVR AN- Numero Ver.Rif.
#define S_RFF1_ERNRVR peel(pick(nPos, 48, 35), " ")
#define R_RFF1_ERNRVR(A) put(nRec, 48, A :35.35)
!-----------------------------------------------------------
!===========================================================
! File : DTM2
!===========================================================
! FIELD : tag tag
#define S_DTM2_tag peel(pick(nPos, 1, 3), " ")
#define R_DTM2_tag(A) put(nRec, 1, A :3.3)
!-----------------------------------------------------------
! FIELD : E4CODI ID- Qualificatore
#define S_DTM2_E4CODI peel(pick(nPos, 4, 3), " ")
#define R_DTM2_E4CODI(A) put(nRec, 4, A :3.3)
!-----------------------------------------------------------
! FIELD : E4VALO AN- Valore
#define S_DTM2_E4VALO peel(pick(nPos, 7, 35), " ")
#define R_DTM2_E4VALO(A) put(nRec, 7, A :35.35)
!-----------------------------------------------------------
! FIELD : E4FORM ID- Formato
#define S_DTM2_E4FORM peel(pick(nPos, 42, 3), " ")
#define R_DTM2_E4FORM(A) put(nRec, 42, A :3.3)
!-----------------------------------------------------------
!===========================================================
! File : NAD
!===========================================================
! FIELD : tag tag
#define S_NAD_tag peel(pick(nPos, 1, 3), " ")
#define R_NAD_tag(A) put(nRec, 1, A :3.3)
!-----------------------------------------------------------
! FIELD : ENCDPA ID- Codice Qualif.Persona
#define S_NAD_ENCDPA peel(pick(nPos, 4, 3), " ")
#define R_NAD_ENCDPA(A) put(nRec, 4, A :3.3)
!-----------------------------------------------------------
! FIELD : ENCDID AN- Identificatore Persona
#define S_NAD_ENCDID peel(pick(nPos, 7, 35), " ")
#define R_NAD_ENCDID(A) put(nRec, 7, A :35.35)
!-----------------------------------------------------------
! FIELD : ENCLQU ID- Qualificatore Lista
#define S_NAD_ENCLQU peel(pick(nPos, 42, 3), " ")
#define R_NAD_ENCLQU(A) put(nRec, 42, A :3.3)
!-----------------------------------------------------------
! FIELD : ENCLRE ID- Qualif.Resp.Agenzia
#define S_NAD_ENCLRE peel(pick(nPos, 45, 3), " ")
#define R_NAD_ENCLRE(A) put(nRec, 45, A :3.3)
!-----------------------------------------------------------
! FIELD : ENNIN1 AN- Nome/Indirizzo 1
#define S_NAD_ENNIN1 peel(pick(nPos, 48, 35), " ")
#define R_NAD_ENNIN1(A) put(nRec, 48, A :35.35)
!-----------------------------------------------------------
! FIELD : ENNIN2 AN- Nome/Indirizzo 2
#define S_NAD_ENNIN2 peel(pick(nPos, 83, 35), " ")
#define R_NAD_ENNIN2(A) put(nRec, 83, A :35.35)
!-----------------------------------------------------------
! FIELD : ENNIN3 AN- Nome/Indirizzo 3
#define S_NAD_ENNIN3 peel(pick(nPos, 118, 35), " ")
#define R_NAD_ENNIN3(A) put(nRec, 118, A :35.35)
!-----------------------------------------------------------
! FIELD : ENNIN4 AN- Nome/Indirizzo 4
#define S_NAD_ENNIN4 peel(pick(nPos, 153, 35), " ")
#define R_NAD_ENNIN4(A) put(nRec, 153, A :35.35)
!-----------------------------------------------------------
! FIELD : ENNIN5 AN- Nome/Indirizzo 5
#define S_NAD_ENNIN5 peel(pick(nPos, 188, 35), " ")
#define R_NAD_ENNIN5(A) put(nRec, 188, A :35.35)
!-----------------------------------------------------------
! FIELD : ENNPE1 AN- Nome/Persona 1
#define S_NAD_ENNPE1 peel(pick(nPos, 223, 35), " ")
#define R_NAD_ENNPE1(A) put(nRec, 223, A :35.35)
!-----------------------------------------------------------
! FIELD : ENNPE2 AN- Nome/Persona 2
#define S_NAD_ENNPE2 peel(pick(nPos, 258, 35), " ")
#define R_NAD_ENNPE2(A) put(nRec, 258, A :35.35)
!-----------------------------------------------------------
! FIELD : ENNPE3 AN- Nome/Persona 3
#define S_NAD_ENNPE3 peel(pick(nPos, 293, 35), " ")
#define R_NAD_ENNPE3(A) put(nRec, 293, A :35.35)
!-----------------------------------------------------------
! FIELD : ENNPE4 AN- Nome/Persona 4
#define S_NAD_ENNPE4 peel(pick(nPos, 328, 35), " ")
#define R_NAD_ENNPE4(A) put(nRec, 328, A :35.35)
!-----------------------------------------------------------
! FIELD : ENNPE5 AN- Nome/Persona 5
#define S_NAD_ENNPE5 peel(pick(nPos, 363, 35), " ")
#define R_NAD_ENNPE5(A) put(nRec, 363, A :35.35)
!-----------------------------------------------------------
! FIELD : ENCDFM ID- Codice Formato Nome
#define S_NAD_ENCDFM peel(pick(nPos, 398, 3), " ")
#define R_NAD_ENCDFM(A) put(nRec, 398, A :3.3)
!-----------------------------------------------------------
! FIELD : ENVIA1 AN- Via e Numero 1
#define S_NAD_ENVIA1 peel(pick(nPos, 401, 35), " ")
#define R_NAD_ENVIA1(A) put(nRec, 401, A :35.35)
!-----------------------------------------------------------
! FIELD : ENVIA2 AN- Via e Numero 2
#define S_NAD_ENVIA2 peel(pick(nPos, 436, 30), " ")
#define R_NAD_ENVIA2(A) put(nRec, 436, A :30.30)
!-----------------------------------------------------------
! FIELD : ENVIA3 AN- Via e Numero 3
#define S_NAD_ENVIA3 peel(pick(nPos, 466, 40), " ")
#define R_NAD_ENVIA3(A) put(nRec, 466, A :40.40)
!-----------------------------------------------------------
! FIELD : ENCITT AN- Citta'
#define S_NAD_ENCITT peel(pick(nPos, 506, 35), " ")
#define R_NAD_ENCITT(A) put(nRec, 506, A :35.35)
!-----------------------------------------------------------
! FIELD : ENNAZI AN- Nazione
#define S_NAD_ENNAZI peel(pick(nPos, 541, 9), " ")
#define R_NAD_ENNAZI(A) put(nRec, 541, A :9.9)
!-----------------------------------------------------------
! FIELD : ENCDCA AN- Cap
#define S_NAD_ENCDCA peel(pick(nPos, 550, 9), " ")
#define R_NAD_ENCDCA(A) put(nRec, 550, A :9.9)
!-----------------------------------------------------------
! FIELD : ENCDNA AN- Codice Nazione
#define S_NAD_ENCDNA peel(pick(nPos, 559, 3), " ")
#define R_NAD_ENCDNA(A) put(nRec, 559, A :3.3)
!-----------------------------------------------------------
!===========================================================
! File : RFF2
!===========================================================
! FIELD : tag tag
#define S_RFF2_tag peel(pick(nPos, 1, 3), " ")
#define R_RFF2_tag(A) put(nRec, 1, A :3.3)
!-----------------------------------------------------------
! FIELD : ERQURI ID- Qualif.Riferimenti
#define S_RFF2_ERQURI peel(pick(nPos, 4, 3), " ")
#define R_RFF2_ERQURI(A) put(nRec, 4, A :3.3)
!-----------------------------------------------------------
! FIELD : ERNRRI AN- Numero Riferimenti
#define S_RFF2_ERNRRI peel(pick(nPos, 7, 35), " ")
#define R_RFF2_ERNRRI(A) put(nRec, 7, A :35.35)
!-----------------------------------------------------------
! FIELD : ERNRLI AN- Numero Linea
#define S_RFF2_ERNRLI peel(pick(nPos, 42, 6), " ")
#define R_RFF2_ERNRLI(A) put(nRec, 42, A :6.6)
!-----------------------------------------------------------
! FIELD : ERNRVR AN- Numero Ver.Rif.
#define S_RFF2_ERNRVR peel(pick(nPos, 48, 35), " ")
#define R_RFF2_ERNRVR(A) put(nRec, 48, A :35.35)
!-----------------------------------------------------------
!===========================================================
! File : CTA
!===========================================================
! FIELD : tag tag
#define S_CTA_tag peel(pick(nPos, 1, 3), " ")
#define R_CTA_tag(A) put(nRec, 1, A :3.3)
!-----------------------------------------------------------
! FIELD : E2CODI Codice funzione
#define S_CTA_E2CODI peel(pick(nPos, 4, 3), " ")
#define R_CTA_E2CODI(A) put(nRec, 4, A :3.3)
!-----------------------------------------------------------
! FIELD : E2ANIM Identificativo
#define S_CTA_E2ANIM peel(pick(nPos, 7, 35), " ")
#define R_CTA_E2ANIM(A) put(nRec, 7, A :35.35)
!-----------------------------------------------------------
!===========================================================
! File : COM
!===========================================================
! FIELD : tag tag
#define S_COM_tag peel(pick(nPos, 1, 3), " ")
#define R_COM_tag(A) put(nRec, 1, A :3.3)
!-----------------------------------------------------------
! FIELD : E1NUME Codice funzione
#define S_COM_E1NUME peel(pick(nPos, 4, 512), " ")
#define R_COM_E1NUME(A) put(nRec, 4, A :512.512)
!-----------------------------------------------------------
! FIELD : E1QUCA Identificativo
#define S_COM_E1QUCA peel(pick(nPos, 516, 3), " ")
#define R_COM_E1QUCA(A) put(nRec, 516, A :3.3)
!-----------------------------------------------------------
!===========================================================
! File : TOD
!===========================================================
! FIELD : tag tag
#define S_TOD_tag peel(pick(nPos, 1, 3), " ")
#define R_TOD_tag(A) put(nRec, 1, A :3.3)
!-----------------------------------------------------------
! FIELD : ETCDTC Codice Termini Consegna
#define S_TOD_ETCDTC peel(pick(nPos, 4, 3), " ")
#define R_TOD_ETCDTC(A) put(nRec, 4, A :3.3)
!-----------------------------------------------------------
! FIELD : ETMPCA Mezzo Pagamento Carico
#define S_TOD_ETMPCA peel(pick(nPos, 7, 3), " ")
#define R_TOD_ETMPCA(A) put(nRec, 7, A :3.3)
!-----------------------------------------------------------
! FIELD : ETTECO Termini di Consegna
#define S_TOD_ETTECO peel(pick(nPos, 10, 3), " ")
#define R_TOD_ETTECO(A) put(nRec, 10, A :3.3)
!-----------------------------------------------------------
! FIELD : ETCLQU Qualificatore Lista
#define S_TOD_ETCLQU peel(pick(nPos, 13, 3), " ")
#define R_TOD_ETCLQU(A) put(nRec, 13, A :3.3)
!-----------------------------------------------------------
! FIELD : ETCLRE Qualif.Resp.Agenzia
#define S_TOD_ETCLRE peel(pick(nPos, 16, 3), " ")
#define R_TOD_ETCLRE(A) put(nRec, 16, A :3.3)
!-----------------------------------------------------------
! FIELD : ETTEC1 Termini Consegna
#define S_TOD_ETTEC1 peel(pick(nPos, 19, 70), " ")
#define R_TOD_ETTEC1(A) put(nRec, 19, A :70.70)
!-----------------------------------------------------------
! FIELD : ETTEC2 Termini Consegna
#define S_TOD_ETTEC2 peel(pick(nPos, 89, 70), " ")
#define R_TOD_ETTEC2(A) put(nRec, 89, A :70.70)
!-----------------------------------------------------------
!===========================================================
! File : TDT
!===========================================================
! FIELD : tag tag
#define S_TDT_tag peel(pick(nPos, 1, 3), " ")
#define R_TDT_tag(A) put(nRec, 1, A :3.3)
!-----------------------------------------------------------
! FIELD : EWQAMT ID- Qual.Ambiente Trasporto
#define S_TDT_EWQAMT peel(pick(nPos, 4, 3), " ")
#define R_TDT_EWQAMT(A) put(nRec, 4, A :3.3)
!-----------------------------------------------------------
! FIELD : EWNRTR AN- Numero Rifer.Trasporto
#define S_TDT_EWNRTR peel(pick(nPos, 7, 17), " ")
#define R_TDT_EWNRTR(A) put(nRec, 7, A :17.17)
!-----------------------------------------------------------
! FIELD : EWCDMT ID- Cod.Mezzo Trasporto
#define S_TDT_EWCDMT peel(pick(nPos, 24, 3), " ")
#define R_TDT_EWCDMT(A) put(nRec, 24, A :3.3)
!-----------------------------------------------------------
! FIELD : EWMETR ID- Mezzo di Trasporto
#define S_TDT_EWMETR peel(pick(nPos, 27, 17), " ")
#define R_TDT_EWMETR(A) put(nRec, 27, A :17.17)
!-----------------------------------------------------------
! FIELD : EWITMT ID- ID Tipo Mezzo Trasp.
#define S_TDT_EWITMT peel(pick(nPos, 44, 8), " ")
#define R_TDT_EWITMT(A) put(nRec, 44, A :8.8)
!-----------------------------------------------------------
! FIELD : EWTIMT ID- Tipo Mezzo Trasp.
#define S_TDT_EWTIMT peel(pick(nPos, 52, 17), " ")
#define R_TDT_EWTIMT(A) put(nRec, 52, A :17.17)
!-----------------------------------------------------------
! FIELD : EWIDCO AN- Ident.Corriere
#define S_TDT_EWIDCO peel(pick(nPos, 69, 17), " ")
#define R_TDT_EWIDCO(A) put(nRec, 69, A :17.17)
!-----------------------------------------------------------
! FIELD : EWCLQU ID- Qualificatore Lista
#define S_TDT_EWCLQU peel(pick(nPos, 86, 3), " ")
#define R_TDT_EWCLQU(A) put(nRec, 86, A :3.3)
!-----------------------------------------------------------
! FIELD : EWCLRE ID- Qualif.Resp.Agenzia
#define S_TDT_EWCLRE peel(pick(nPos, 89, 3), " ")
#define R_TDT_EWCLRE(A) put(nRec, 89, A :3.3)
!-----------------------------------------------------------
! FIELD : EWNMCO AN- Nome Corriere
#define S_TDT_EWNMCO peel(pick(nPos, 92, 35), " ")
#define R_TDT_EWNMCO(A) put(nRec, 92, A :35.35)
!-----------------------------------------------------------
! FIELD : EWCDDT ID- Cod.Direzione Transito
#define S_TDT_EWCDDT peel(pick(nPos, 127, 3), " ")
#define R_TDT_EWCDDT(A) put(nRec, 127, A :3.3)
!-----------------------------------------------------------
! FIELD : EWCDTE ID- Cod.Motivo Trasp.Eccesso
#define S_TDT_EWCDTE peel(pick(nPos, 130, 3), " ")
#define R_TDT_EWCDTE(A) put(nRec, 130, A :3.3)
!-----------------------------------------------------------
! FIELD : EWTREC ID- Motivo Trasp.Eccesso
#define S_TDT_EWTREC peel(pick(nPos, 133, 3), " ")
#define R_TDT_EWTREC(A) put(nRec, 133, A :3.3)
!-----------------------------------------------------------
! FIELD : EWNRAV AN- Numero Autoriz.Vendita
#define S_TDT_EWNRAV peel(pick(nPos, 136, 17), " ")
#define R_TDT_EWNRAV(A) put(nRec, 136, A :17.17)
!-----------------------------------------------------------
! FIELD : EWIDTR AN- Identif.Trasporto
#define S_TDT_EWIDTR peel(pick(nPos, 153, 9), " ")
#define R_TDT_EWIDTR(A) put(nRec, 153, A :9.9)
!-----------------------------------------------------------
! FIELD : EWCLQ2 ID- Qualificatore Lista
#define S_TDT_EWCLQ2 peel(pick(nPos, 162, 3), " ")
#define R_TDT_EWCLQ2(A) put(nRec, 162, A :3.3)
!-----------------------------------------------------------
! FIELD : EWCLR2 ID- Qualif.Resp.Agenzia
#define S_TDT_EWCLR2 peel(pick(nPos, 165, 3), " ")
#define R_TDT_EWCLR2(A) put(nRec, 165, A :3.3)
!-----------------------------------------------------------
! FIELD : EWIDMT AN- ID.Mezzo del Trasporto
#define S_TDT_EWIDMT peel(pick(nPos, 168, 35), " ")
#define R_TDT_EWIDMT(A) put(nRec, 168, A :35.35)
!-----------------------------------------------------------
! FIELD : EWNAMT AN- Naz.Mezzo del Trasporto
#define S_TDT_EWNAMT peel(pick(nPos, 203, 3), " ")
#define R_TDT_EWNAMT(A) put(nRec, 203, A :3.3)
!-----------------------------------------------------------
! FIELD : EWPOMT AN- Pos.Mezzo del Trasporto
#define S_TDT_EWPOMT peel(pick(nPos, 206, 3), " ")
#define R_TDT_EWPOMT(A) put(nRec, 206, A :3.3)
!-----------------------------------------------------------
!===========================================================
! File : EQD
!===========================================================
! FIELD : tag tag
#define S_EQD_tag peel(pick(nPos, 1, 3), " ")
#define R_EQD_tag(A) put(nRec, 1, A :3.3)
!-----------------------------------------------------------
! FIELD : EECODI ID- Qualificatore
#define S_EQD_EECODI peel(pick(nPos, 4, 3), " ")
#define R_EQD_EECODI(A) put(nRec, 4, A :3.3)
!-----------------------------------------------------------
! FIELD : EEIDNR AN- Numero Identificativo
#define S_EQD_EEIDNR peel(pick(nPos, 7, 17), " ")
#define R_EQD_EEIDNR(A) put(nRec, 7, A :17.17)
!-----------------------------------------------------------
! FIELD : EECLQU ID- Codice Qualif.
#define S_EQD_EECLQU peel(pick(nPos, 24, 3), " ")
#define R_EQD_EECLQU(A) put(nRec, 24, A :3.3)
!-----------------------------------------------------------
! FIELD : EECLRA ID- Codice Respons. Agenzia
#define S_EQD_EECLRA peel(pick(nPos, 27, 3), " ")
#define R_EQD_EECLRA(A) put(nRec, 27, A :3.3)
!-----------------------------------------------------------
! FIELD : EECDNA ID- Codice Nazione
#define S_EQD_EECDNA peel(pick(nPos, 30, 3), " ")
#define R_EQD_EECDNA(A) put(nRec, 30, A :3.3)
!-----------------------------------------------------------
! FIELD : EECDDT ID- Tipo e Dimensione
#define S_EQD_EECDDT peel(pick(nPos, 33, 10), " ")
#define R_EQD_EECDDT(A) put(nRec, 33, A :10.10)
!-----------------------------------------------------------
! FIELD : EECLQ2 ID- Codice Qualif.
#define S_EQD_EECLQ2 peel(pick(nPos, 43, 3), " ")
#define R_EQD_EECLQ2(A) put(nRec, 43, A :3.3)
!-----------------------------------------------------------
! FIELD : EECLR2 ID- Codice Respons. Agenzia
#define S_EQD_EECLR2 peel(pick(nPos, 46, 3), " ")
#define R_EQD_EECLR2(A) put(nRec, 46, A :3.3)
!-----------------------------------------------------------
! FIELD : EEVADT AN- Tipo e Dimensione
#define S_EQD_EEVADT peel(pick(nPos, 49, 35), " ")
#define R_EQD_EEVADT(A) put(nRec, 49, A :35.35)
!-----------------------------------------------------------
! FIELD : EECDFO ID- Codice Fornitore
#define S_EQD_EECDFO peel(pick(nPos, 84, 3), " ")
#define R_EQD_EECDFO(A) put(nRec, 84, A :3.3)
!-----------------------------------------------------------
! FIELD : EECDST ID- Codice Stato
#define S_EQD_EECDST peel(pick(nPos, 87, 3), " ")
#define R_EQD_EECDST(A) put(nRec, 87, A :3.3)
!-----------------------------------------------------------
! FIELD : EEFLPV ID- Flag Pieno/Vuoto
#define S_EQD_EEFLPV peel(pick(nPos, 90, 3), " ")
#define R_EQD_EEFLPV(A) put(nRec, 90, A :3.3)
!-----------------------------------------------------------
!===========================================================
! File : EQN
!===========================================================
! FIELD : tag tag
#define S_EQN_tag peel(pick(nPos, 1, 3), " ")
#define R_EQN_tag(A) put(nRec, 1, A :3.3)
!-----------------------------------------------------------
! FIELD : E5NRUN R - Numero diUnita'
#define S_EQN_E5NRUN peel(pick(nPos, 4, 15), " ")
#define R_EQN_E5NRUN(A) put(nRec, 4, A :15.15)
!-----------------------------------------------------------
! FIELD : E5IDNR ID- Codice Numero Unita'
#define S_EQN_E5IDNR peel(pick(nPos, 19, 3), " ")
#define R_EQN_E5IDNR(A) put(nRec, 19, A :3.3)
!-----------------------------------------------------------
!===========================================================
! File : MEA
!===========================================================
! FIELD : tag tag
#define S_MEA_tag peel(pick(nPos, 1, 3), " ")
#define R_MEA_tag(A) put(nRec, 1, A :3.3)
!-----------------------------------------------------------
! FIELD : EMCODI ID- Sistema di Misura
#define S_MEA_EMCODI peel(pick(nPos, 4, 3), " ")
#define R_MEA_EMCODI(A) put(nRec, 4, A :3.3)
!-----------------------------------------------------------
! FIELD : EMCDDI ID- Codice Dimensioni
#define S_MEA_EMCDDI peel(pick(nPos, 7, 3), " ")
#define R_MEA_EMCDDI(A) put(nRec, 7, A :3.3)
!-----------------------------------------------------------
! FIELD : EMCDRI ID- Codice Rilevanza
#define S_MEA_EMCDRI peel(pick(nPos, 10, 3), " ")
#define R_MEA_EMCDRI(A) put(nRec, 10, A :3.3)
!-----------------------------------------------------------
! FIELD : EMCDAT ID- Codice Attributo
#define S_MEA_EMCDAT peel(pick(nPos, 13, 3), " ")
#define R_MEA_EMCDAT(A) put(nRec, 13, A :3.3)
!-----------------------------------------------------------
! FIELD : EMVAAT ID- Valore Attributo
#define S_MEA_EMVAAT peel(pick(nPos, 16, 70), " ")
#define R_MEA_EMVAAT(A) put(nRec, 16, A :70.70)
!-----------------------------------------------------------
! FIELD : EMQUUN AN- Qualif. Unita' Misura
#define S_MEA_EMQUUN peel(pick(nPos, 86, 3), " ")
#define R_MEA_EMQUUN(A) put(nRec, 86, A :3.3)
!-----------------------------------------------------------
! FIELD : EMVAMI R - Valore Misurazione
#define S_MEA_EMVAMI peel(pick(nPos, 89, 18), " ")
#define R_MEA_EMVAMI(A) put(nRec, 89, A :18.18)
!-----------------------------------------------------------
! FIELD : EMLIMI R - Limite Minimo
#define S_MEA_EMLIMI peel(pick(nPos, 107, 18), " ")
#define R_MEA_EMLIMI(A) put(nRec, 107, A :18.18)
!-----------------------------------------------------------
! FIELD : EMLIMA R - Limite Massimo
#define S_MEA_EMLIMA peel(pick(nPos, 125, 18), " ")
#define R_MEA_EMLIMA(A) put(nRec, 125, A :18.18)
!-----------------------------------------------------------
! FIELD : EMCISI N0- Cifre Significative
#define S_MEA_EMCISI peel(pick(nPos, 143, 2), " ")
#define R_MEA_EMCISI(A) put(nRec, 143, A :2.2)
!-----------------------------------------------------------
! FIELD : EMCDST ID- Codice Ind.di Stato
#define S_MEA_EMCDST peel(pick(nPos, 145, 3), " ")
#define R_MEA_EMCDST(A) put(nRec, 145, A :3.3)
!-----------------------------------------------------------
!===========================================================
! File : LIN
!===========================================================
! FIELD : tag tag
#define S_LIN_tag peel(pick(nPos, 1, 3), " ")
#define R_LIN_tag(A) put(nRec, 1, A :3.3)
!-----------------------------------------------------------
! FIELD : ELLINR N0- Numero Linea Articolo
#define S_LIN_ELLINR peel(pick(nPos, 4, 6), " ")
#define R_LIN_ELLINR(A) put(nRec, 4, A :6.6)
!-----------------------------------------------------------
! FIELD : ELAZIO ID- Azione Richiesta
#define S_LIN_ELAZIO peel(pick(nPos, 10, 3), " ")
#define R_LIN_ELAZIO(A) put(nRec, 10, A :3.3)
!-----------------------------------------------------------
! FIELD : ELNRAR AN- Numero Articolo
#define S_LIN_ELNRAR peel(pick(nPos, 13, 35), " ")
#define R_LIN_ELNRAR(A) put(nRec, 13, A :35.35)
!-----------------------------------------------------------
! FIELD : ELNRAT ID- Codice Tipo Articolo
#define S_LIN_ELNRAT peel(pick(nPos, 48, 3), " ")
#define R_LIN_ELNRAT(A) put(nRec, 48, A :3.3)
!-----------------------------------------------------------
! FIELD : ELCLQU ID- Qualificatore
#define S_LIN_ELCLQU peel(pick(nPos, 51, 3), " ")
#define R_LIN_ELCLQU(A) put(nRec, 51, A :3.3)
!-----------------------------------------------------------
! FIELD : ELCLRE ID- Codice Respons.Agenzia
#define S_LIN_ELCLRE peel(pick(nPos, 54, 3), " ")
#define R_LIN_ELCLRE(A) put(nRec, 54, A :3.3)
!-----------------------------------------------------------
! FIELD : ELCDSL ID- Codice Indicatore Linea
#define S_LIN_ELCDSL peel(pick(nPos, 57, 3), " ")
#define R_LIN_ELCDSL(A) put(nRec, 57, A :3.3)
!-----------------------------------------------------------
! FIELD : ELL2NR N0- Numero Linea Articolo
#define S_LIN_ELL2NR peel(pick(nPos, 60, 6), " ")
#define R_LIN_ELL2NR(A) put(nRec, 60, A :6.6)
!-----------------------------------------------------------
! FIELD : ELLICF N0- Livello Configurazione
#define S_LIN_ELLICF peel(pick(nPos, 66, 2), " ")
#define R_LIN_ELLICF(A) put(nRec, 66, A :2.2)
!-----------------------------------------------------------
! FIELD : ELCDCF ID- Codice Configurazione
#define S_LIN_ELCDCF peel(pick(nPos, 68, 3), " ")
#define R_LIN_ELCDCF(A) put(nRec, 68, A :3.3)
!-----------------------------------------------------------
!===========================================================
! File : PIA
!===========================================================
! FIELD : tag tag
#define S_PIA_tag peel(pick(nPos, 1, 3), " ")
#define R_PIA_tag(A) put(nRec, 1, A :3.3)
!-----------------------------------------------------------
! FIELD : EKFUPR ID- Funzione Prodotto
#define S_PIA_EKFUPR peel(pick(nPos, 4, 3), " ")
#define R_PIA_EKFUPR(A) put(nRec, 4, A :3.3)
!-----------------------------------------------------------
! FIELD : EKNUA1 AN- Numero Articolo
#define S_PIA_EKNUA1 peel(pick(nPos, 7, 35), " ")
#define R_PIA_EKNUA1(A) put(nRec, 7, A :35.35)
!-----------------------------------------------------------
! FIELD : EKTIA1 ID- Tipo Numero Articolo
#define S_PIA_EKTIA1 peel(pick(nPos, 42, 3), " ")
#define R_PIA_EKTIA1(A) put(nRec, 42, A :3.3)
!-----------------------------------------------------------
! FIELD : EKCLQ1 ID- Qualificatore Lista
#define S_PIA_EKCLQ1 peel(pick(nPos, 45, 3), " ")
#define R_PIA_EKCLQ1(A) put(nRec, 45, A :3.3)
!-----------------------------------------------------------
! FIELD : EKCLR1 ID- Qualif.Resp.Agenzia
#define S_PIA_EKCLR1 peel(pick(nPos, 48, 3), " ")
#define R_PIA_EKCLR1(A) put(nRec, 48, A :3.3)
!-----------------------------------------------------------
! FIELD : EKNUA2 AN- Numero Articolo
#define S_PIA_EKNUA2 peel(pick(nPos, 51, 35), " ")
#define R_PIA_EKNUA2(A) put(nRec, 51, A :35.35)
!-----------------------------------------------------------
! FIELD : EKTIA2 ID- Tipo Numero Articolo
#define S_PIA_EKTIA2 peel(pick(nPos, 86, 3), " ")
#define R_PIA_EKTIA2(A) put(nRec, 86, A :3.3)
!-----------------------------------------------------------
! FIELD : EKCLQ2 ID- Qualificatore Lista
#define S_PIA_EKCLQ2 peel(pick(nPos, 89, 3), " ")
#define R_PIA_EKCLQ2(A) put(nRec, 89, A :3.3)
!-----------------------------------------------------------
! FIELD : EKCLR2 ID- Qualif.Resp.Agenzia
#define S_PIA_EKCLR2 peel(pick(nPos, 92, 3), " ")
#define R_PIA_EKCLR2(A) put(nRec, 92, A :3.3)
!-----------------------------------------------------------
! FIELD : EKNUA3 AN- Numero Articolo
#define S_PIA_EKNUA3 peel(pick(nPos, 95, 35), " ")
#define R_PIA_EKNUA3(A) put(nRec, 95, A :35.35)
!-----------------------------------------------------------
! FIELD : EKTIA3 ID- Tipo Numero Articolo
#define S_PIA_EKTIA3 peel(pick(nPos, 130, 3), " ")
#define R_PIA_EKTIA3(A) put(nRec, 130, A :3.3)
!-----------------------------------------------------------
! FIELD : EKCLQ3 ID- Qualificatore Lista
#define S_PIA_EKCLQ3 peel(pick(nPos, 133, 3), " ")
#define R_PIA_EKCLQ3(A) put(nRec, 133, A :3.3)
!-----------------------------------------------------------
! FIELD : EKCLR3 ID- Qualif.Resp.Agenzia
#define S_PIA_EKCLR3 peel(pick(nPos, 136, 3), " ")
#define R_PIA_EKCLR3(A) put(nRec, 136, A :3.3)
!-----------------------------------------------------------
! FIELD : EKNUA4 AN- Numero Articolo
#define S_PIA_EKNUA4 peel(pick(nPos, 139, 35), " ")
#define R_PIA_EKNUA4(A) put(nRec, 139, A :35.35)
!-----------------------------------------------------------
! FIELD : EKTIA4 ID- Tipo Numero Articolo
#define S_PIA_EKTIA4 peel(pick(nPos, 174, 3), " ")
#define R_PIA_EKTIA4(A) put(nRec, 174, A :3.3)
!-----------------------------------------------------------
! FIELD : EKCLQ4 ID- Qualificatore Lista
#define S_PIA_EKCLQ4 peel(pick(nPos, 177, 3), " ")
#define R_PIA_EKCLQ4(A) put(nRec, 177, A :3.3)
!-----------------------------------------------------------
! FIELD : EKCLR4 ID- Qualif.Resp.Agenzia
#define S_PIA_EKCLR4 peel(pick(nPos, 180, 3), " ")
#define R_PIA_EKCLR4(A) put(nRec, 180, A :3.3)
!-----------------------------------------------------------
! FIELD : EKNUA5 AN- Numero Articolo
#define S_PIA_EKNUA5 peel(pick(nPos, 183, 35), " ")
#define R_PIA_EKNUA5(A) put(nRec, 183, A :35.35)
!-----------------------------------------------------------
! FIELD : EKTIA5 ID- Tipo Numero Articolo
#define S_PIA_EKTIA5 peel(pick(nPos, 218, 3), " ")
#define R_PIA_EKTIA5(A) put(nRec, 218, A :3.3)
!-----------------------------------------------------------
! FIELD : EKCLQ5 ID- Qualificatore Lista
#define S_PIA_EKCLQ5 peel(pick(nPos, 221, 3), " ")
#define R_PIA_EKCLQ5(A) put(nRec, 221, A :3.3)
!-----------------------------------------------------------
! FIELD : EKCLR5 ID- Qualif.Resp.Agenzia
#define S_PIA_EKCLR5 peel(pick(nPos, 224, 3), " ")
#define R_PIA_EKCLR5(A) put(nRec, 224, A :3.3)
!-----------------------------------------------------------
!===========================================================
! File : IMD
!===========================================================
! FIELD : tag tag
#define S_IMD_tag peel(pick(nPos, 1, 3), " ")
#define R_IMD_tag(A) put(nRec, 1, A :3.3)
!-----------------------------------------------------------
! FIELD : EICDTI ID- Codice Tipo
#define S_IMD_EICDTI peel(pick(nPos, 4, 3), " ")
#define R_IMD_EICDTI(A) put(nRec, 4, A :3.3)
!-----------------------------------------------------------
! FIELD : EICDCA ID- Codice Caratteristiche
#define S_IMD_EICDCA peel(pick(nPos, 7, 3), " ")
#define R_IMD_EICDCA(A) put(nRec, 7, A :3.3)
!-----------------------------------------------------------
! FIELD : EIDEID AN- Identif. Descrizione
#define S_IMD_EIDEID peel(pick(nPos, 10, 17), " ")
#define R_IMD_EIDEID(A) put(nRec, 10, A :17.17)
!-----------------------------------------------------------
! FIELD : EICLQU ID- Qualificatore
#define S_IMD_EICLQU peel(pick(nPos, 27, 3), " ")
#define R_IMD_EICLQU(A) put(nRec, 27, A :3.3)
!-----------------------------------------------------------
! FIELD : EICLRE ID- Codice Respons.Agenzia
#define S_IMD_EICLRE peel(pick(nPos, 30, 3), " ")
#define R_IMD_EICLRE(A) put(nRec, 30, A :3.3)
!-----------------------------------------------------------
! FIELD : EIDES1 AN- Descrizione Articolo
#define S_IMD_EIDES1 peel(pick(nPos, 33, 35), " ")
#define R_IMD_EIDES1(A) put(nRec, 33, A :35.35)
!-----------------------------------------------------------
! FIELD : EIDES2 AN- Descrizione Articolo
#define S_IMD_EIDES2 peel(pick(nPos, 68, 35), " ")
#define R_IMD_EIDES2(A) put(nRec, 68, A :35.35)
!-----------------------------------------------------------
! FIELD : EICDLI AN- Codice Lingua
#define S_IMD_EICDLI peel(pick(nPos, 103, 3), " ")
#define R_IMD_EICDLI(A) put(nRec, 103, A :3.3)
!-----------------------------------------------------------
! FIELD : EICDSU ID- Codice Indicatore Stato
#define S_IMD_EICDSU peel(pick(nPos, 106, 3), " ")
#define R_IMD_EICDSU(A) put(nRec, 106, A :3.3)
!-----------------------------------------------------------
!===========================================================
! File : QTY
!===========================================================
! FIELD : tag tag
#define S_QTY_tag peel(pick(nPos, 1, 3), " ")
#define R_QTY_tag(A) put(nRec, 1, A :3.3)
!-----------------------------------------------------------
! FIELD : EQQUQT ID- Qualificatore Quantita'
#define S_QTY_EQQUQT peel(pick(nPos, 4, 3), " ")
#define R_QTY_EQQUQT(A) put(nRec, 4, A :3.3)
!-----------------------------------------------------------
! FIELD : EQQUAN R - Quantita'
#define S_QTY_EQQUAN peel(pick(nPos, 7, 15), " ")
#define R_QTY_EQQUAN(A) put(nRec, 7, A :15.15)
!-----------------------------------------------------------
! FIELD : EQQUUM AN- Qual.Unita' Misura
#define S_QTY_EQQUUM peel(pick(nPos, 22, 3), " ")
#define R_QTY_EQQUUM(A) put(nRec, 22, A :3.3)
!-----------------------------------------------------------
!===========================================================
! File : FTX2
!===========================================================
! FIELD : tag tag
#define S_FTX2_tag peel(pick(nPos, 1, 3), " ")
#define R_FTX2_tag(A) put(nRec, 1, A :3.3)
!-----------------------------------------------------------
! FIELD : EFIDTX ID- Codice Soggetto
#define S_FTX2_EFIDTX peel(pick(nPos, 4, 3), " ")
#define R_FTX2_EFIDTX(A) put(nRec, 4, A :3.3)
!-----------------------------------------------------------
! FIELD : EFCDFU ID- Codice Funzione
#define S_FTX2_EFCDFU peel(pick(nPos, 7, 3), " ")
#define R_FTX2_EFCDFU(A) put(nRec, 7, A :3.3)
!-----------------------------------------------------------
! FIELD : EFCDTE AN- Codice Testo
#define S_FTX2_EFCDTE peel(pick(nPos, 10, 17), " ")
#define R_FTX2_EFCDTE(A) put(nRec, 10, A :17.17)
!-----------------------------------------------------------
! FIELD : EFCLQU ID- Codice Lista
#define S_FTX2_EFCLQU peel(pick(nPos, 27, 3), " ")
#define R_FTX2_EFCLQU(A) put(nRec, 27, A :3.3)
!-----------------------------------------------------------
! FIELD : EFCLRE ID- Codice Resp.Agenzia
#define S_FTX2_EFCLRE peel(pick(nPos, 30, 3), " ")
#define R_FTX2_EFCLRE(A) put(nRec, 30, A :3.3)
!-----------------------------------------------------------
! FIELD : EFTES1 AN- Testo Libero 1
#define S_FTX2_EFTES1 peel(pick(nPos, 33, 512), " ")
#define R_FTX2_EFTES1(A) put(nRec, 33, A :512.512)
!-----------------------------------------------------------
! FIELD : EFTES2 AN- Testo Libero 2
#define S_FTX2_EFTES2 peel(pick(nPos, 545, 512), " ")
#define R_FTX2_EFTES2(A) put(nRec, 545, A :512.512)
!-----------------------------------------------------------
! FIELD : EFTES3 AN- Testo Libero 3
#define S_FTX2_EFTES3 peel(pick(nPos, 1057, 512), " ")
#define R_FTX2_EFTES3(A) put(nRec, 1057, A :512.512)
!-----------------------------------------------------------
! FIELD : EFTES4 AN- Testo Libero 4
#define S_FTX2_EFTES4 peel(pick(nPos, 1569, 512), " ")
#define R_FTX2_EFTES4(A) put(nRec, 1569, A :512.512)
!-----------------------------------------------------------
! FIELD : EFTES5 AN- Testo Libero 5
#define S_FTX2_EFTES5 peel(pick(nPos, 2081, 512), " ")
#define R_FTX2_EFTES5(A) put(nRec, 2081, A :512.512)
!-----------------------------------------------------------
! FIELD : EFCDLI AN- Codice Lingua
#define S_FTX2_EFCDLI peel(pick(nPos, 2593, 3), " ")
#define R_FTX2_EFCDLI(A) put(nRec, 2593, A :3.3)
!-----------------------------------------------------------
! FIELD : E4447 AN-Code
#define S_FTX2_E4447 peel(pick(nPos, 2596, 3), " ")
#define R_FTX2_E4447(A) put(nRec, 2596, A :3.3)
!-----------------------------------------------------------
!===========================================================
! File : MOA1
!===========================================================
! FIELD : tag tag
#define S_MOA1_tag peel(pick(nPos, 1, 3), " ")
#define R_MOA1_tag(A) put(nRec, 1, A :3.3)
!-----------------------------------------------------------
! FIELD : E_CDTI ID- Segmento Dati
#define S_MOA1_E_CDTI peel(pick(nPos, 4, 3), " ")
#define R_MOA1_E_CDTI(A) put(nRec, 4, A :3.3)
!-----------------------------------------------------------
! FIELD : E_VALO ID- Segmento Dati
#define S_MOA1_E_VALO peel(pick(nPos, 7, 18), " ")
#define R_MOA1_E_VALO(A) put(nRec, 7, A :18.18)
!-----------------------------------------------------------
! FIELD : E_CDVA ID- Segmento Dati
#define S_MOA1_E_CDVA peel(pick(nPos, 25, 3), " ")
#define R_MOA1_E_CDVA(A) put(nRec, 25, A :3.3)
!-----------------------------------------------------------
! FIELD : E_QUVA ID- Segmento Dati
#define S_MOA1_E_QUVA peel(pick(nPos, 28, 3), " ")
#define R_MOA1_E_QUVA(A) put(nRec, 28, A :3.3)
!-----------------------------------------------------------
! FIELD : E_CDST ID- Segmento Dati
#define S_MOA1_E_CDST peel(pick(nPos, 31, 3), " ")
#define R_MOA1_E_CDST(A) put(nRec, 31, A :3.3)
!-----------------------------------------------------------
!===========================================================
! File : RFF3
!===========================================================
! FIELD : tag tag
#define S_RFF3_tag peel(pick(nPos, 1, 3), " ")
#define R_RFF3_tag(A) put(nRec, 1, A :3.3)
!-----------------------------------------------------------
! FIELD : ERQURI ID- Qualif.Riferimenti
#define S_RFF3_ERQURI peel(pick(nPos, 4, 3), " ")
#define R_RFF3_ERQURI(A) put(nRec, 4, A :3.3)
!-----------------------------------------------------------
! FIELD : ERNRRI AN- Numero Riferimenti
#define S_RFF3_ERNRRI peel(pick(nPos, 7, 35), " ")
#define R_RFF3_ERNRRI(A) put(nRec, 7, A :35.35)
!-----------------------------------------------------------
! FIELD : ERNRLI AN- Numero Linea
#define S_RFF3_ERNRLI peel(pick(nPos, 42, 6), " ")
#define R_RFF3_ERNRLI(A) put(nRec, 42, A :6.6)
!-----------------------------------------------------------
! FIELD : ERNRVR AN- Numero Ver.Rif.
#define S_RFF3_ERNRVR peel(pick(nPos, 48, 35), " ")
#define R_RFF3_ERNRVR(A) put(nRec, 48, A :35.35)
!-----------------------------------------------------------
!===========================================================
! File : NAD2
!===========================================================
! FIELD : tag tag
#define S_NAD2_tag peel(pick(nPos, 1, 3), " ")
#define R_NAD2_tag(A) put(nRec, 1, A :3.3)
!-----------------------------------------------------------
! FIELD : ENCDPA ID- Codice Qualif.Persona
#define S_NAD2_ENCDPA peel(pick(nPos, 4, 3), " ")
#define R_NAD2_ENCDPA(A) put(nRec, 4, A :3.3)
!-----------------------------------------------------------
! FIELD : ENCDID AN- Identificatore Persona
#define S_NAD2_ENCDID peel(pick(nPos, 7, 35), " ")
#define R_NAD2_ENCDID(A) put(nRec, 7, A :35.35)
!-----------------------------------------------------------
! FIELD : ENCLQU ID- Qualificatore Lista
#define S_NAD2_ENCLQU peel(pick(nPos, 42, 3), " ")
#define R_NAD2_ENCLQU(A) put(nRec, 42, A :3.3)
!-----------------------------------------------------------
! FIELD : ENCLRE ID- Qualif.Resp.Agenzia
#define S_NAD2_ENCLRE peel(pick(nPos, 45, 3), " ")
#define R_NAD2_ENCLRE(A) put(nRec, 45, A :3.3)
!-----------------------------------------------------------
! FIELD : ENNIN1 AN- Nome/Indirizzo 1
#define S_NAD2_ENNIN1 peel(pick(nPos, 48, 35), " ")
#define R_NAD2_ENNIN1(A) put(nRec, 48, A :35.35)
!-----------------------------------------------------------
! FIELD : ENNIN2 AN- Nome/Indirizzo 2
#define S_NAD2_ENNIN2 peel(pick(nPos, 83, 35), " ")
#define R_NAD2_ENNIN2(A) put(nRec, 83, A :35.35)
!-----------------------------------------------------------
! FIELD : ENNIN3 AN- Nome/Indirizzo 3
#define S_NAD2_ENNIN3 peel(pick(nPos, 118, 35), " ")
#define R_NAD2_ENNIN3(A) put(nRec, 118, A :35.35)
!-----------------------------------------------------------
! FIELD : ENNIN4 AN- Nome/Indirizzo 4
#define S_NAD2_ENNIN4 peel(pick(nPos, 153, 35), " ")
#define R_NAD2_ENNIN4(A) put(nRec, 153, A :35.35)
!-----------------------------------------------------------
! FIELD : ENNIN5 AN- Nome/Indirizzo 5
#define S_NAD2_ENNIN5 peel(pick(nPos, 188, 35), " ")
#define R_NAD2_ENNIN5(A) put(nRec, 188, A :35.35)
!-----------------------------------------------------------
! FIELD : ENNPE1 AN- Nome/Persona 1
#define S_NAD2_ENNPE1 peel(pick(nPos, 223, 35), " ")
#define R_NAD2_ENNPE1(A) put(nRec, 223, A :35.35)
!-----------------------------------------------------------
! FIELD : ENNPE2 AN- Nome/Persona 2
#define S_NAD2_ENNPE2 peel(pick(nPos, 258, 35), " ")
#define R_NAD2_ENNPE2(A) put(nRec, 258, A :35.35)
!-----------------------------------------------------------
! FIELD : ENNPE3 AN- Nome/Persona 3
#define S_NAD2_ENNPE3 peel(pick(nPos, 293, 35), " ")
#define R_NAD2_ENNPE3(A) put(nRec, 293, A :35.35)
!-----------------------------------------------------------
! FIELD : ENNPE4 AN- Nome/Persona 4
#define S_NAD2_ENNPE4 peel(pick(nPos, 328, 35), " ")
#define R_NAD2_ENNPE4(A) put(nRec, 328, A :35.35)
!-----------------------------------------------------------
! FIELD : ENNPE5 AN- Nome/Persona 5
#define S_NAD2_ENNPE5 peel(pick(nPos, 363, 35), " ")
#define R_NAD2_ENNPE5(A) put(nRec, 363, A :35.35)
!-----------------------------------------------------------
! FIELD : ENCDFM ID- Codice Formato Nome
#define S_NAD2_ENCDFM peel(pick(nPos, 398, 3), " ")
#define R_NAD2_ENCDFM(A) put(nRec, 398, A :3.3)
!-----------------------------------------------------------
! FIELD : ENVIA1 AN- Via e Numero 1
#define S_NAD2_ENVIA1 peel(pick(nPos, 401, 35), " ")
#define R_NAD2_ENVIA1(A) put(nRec, 401, A :35.35)
!-----------------------------------------------------------
! FIELD : ENVIA2 AN- Via e Numero 2
#define S_NAD2_ENVIA2 peel(pick(nPos, 436, 30), " ")
#define R_NAD2_ENVIA2(A) put(nRec, 436, A :30.30)
!-----------------------------------------------------------
! FIELD : ENVIA3 AN- Via e Numero 3
#define S_NAD2_ENVIA3 peel(pick(nPos, 466, 40), " ")
#define R_NAD2_ENVIA3(A) put(nRec, 466, A :40.40)
!-----------------------------------------------------------
! FIELD : ENCITT AN- Citta'
#define S_NAD2_ENCITT peel(pick(nPos, 506, 35), " ")
#define R_NAD2_ENCITT(A) put(nRec, 506, A :35.35)
!-----------------------------------------------------------
! FIELD : ENNAZI AN- Nazione
#define S_NAD2_ENNAZI peel(pick(nPos, 541, 9), " ")
#define R_NAD2_ENNAZI(A) put(nRec, 541, A :9.9)
!-----------------------------------------------------------
! FIELD : ENCDCA AN- Cap
#define S_NAD2_ENCDCA peel(pick(nPos, 550, 9), " ")
#define R_NAD2_ENCDCA(A) put(nRec, 550, A :9.9)
!-----------------------------------------------------------
! FIELD : ENCDNA AN- Codice Nazione
#define S_NAD2_ENCDNA peel(pick(nPos, 559, 3), " ")
#define R_NAD2_ENCDNA(A) put(nRec, 559, A :3.3)
!-----------------------------------------------------------
!===========================================================
! File : LOC
!===========================================================
! FIELD : tag tag
#define S_LOC_tag peel(pick(nPos, 1, 3), " ")
#define R_LOC_tag(A) put(nRec, 1, A :3.3)
!-----------------------------------------------------------
! FIELD : e3227 
#define S_LOC_e3227 peel(pick(nPos, 4, 3), " ")
#define R_LOC_e3227(A) put(nRec, 4, A :3.3)
!-----------------------------------------------------------
! FIELD : eC517_3225 
#define S_LOC_eC517_3225 peel(pick(nPos, 7, 25), " ")
#define R_LOC_eC517_3225(A) put(nRec, 7, A :25.25)
!-----------------------------------------------------------
! FIELD : eC517_1131 
#define S_LOC_eC517_1131 peel(pick(nPos, 32, 3), " ")
#define R_LOC_eC517_1131(A) put(nRec, 32, A :3.3)
!-----------------------------------------------------------
! FIELD : eC517_3055 
#define S_LOC_eC517_3055 peel(pick(nPos, 35, 3), " ")
#define R_LOC_eC517_3055(A) put(nRec, 35, A :3.3)
!-----------------------------------------------------------
! FIELD : eC517_3224 
#define S_LOC_eC517_3224 peel(pick(nPos, 38, 70), " ")
#define R_LOC_eC517_3224(A) put(nRec, 38, A :70.70)
!-----------------------------------------------------------
! FIELD : eC519_3223 
#define S_LOC_eC519_3223 peel(pick(nPos, 108, 25), " ")
#define R_LOC_eC519_3223(A) put(nRec, 108, A :25.25)
!-----------------------------------------------------------
! FIELD : eC519_1131 
#define S_LOC_eC519_1131 peel(pick(nPos, 133, 3), " ")
#define R_LOC_eC519_1131(A) put(nRec, 133, A :3.3)
!-----------------------------------------------------------
! FIELD : eC519_3055 
#define S_LOC_eC519_3055 peel(pick(nPos, 136, 3), " ")
#define R_LOC_eC519_3055(A) put(nRec, 136, A :3.3)
!-----------------------------------------------------------
! FIELD : eC519_3222 
#define S_LOC_eC519_3222 peel(pick(nPos, 139, 70), " ")
#define R_LOC_eC519_3222(A) put(nRec, 139, A :70.70)
!-----------------------------------------------------------
! FIELD : eC553_3233 
#define S_LOC_eC553_3233 peel(pick(nPos, 209, 25), " ")
#define R_LOC_eC553_3233(A) put(nRec, 209, A :25.25)
!-----------------------------------------------------------
! FIELD : eC553_1131 
#define S_LOC_eC553_1131 peel(pick(nPos, 234, 3), " ")
#define R_LOC_eC553_1131(A) put(nRec, 234, A :3.3)
!-----------------------------------------------------------
! FIELD : eC553_3055 
#define S_LOC_eC553_3055 peel(pick(nPos, 237, 3), " ")
#define R_LOC_eC553_3055(A) put(nRec, 237, A :3.3)
!-----------------------------------------------------------
! FIELD : eC553_3232 
#define S_LOC_eC553_3232 peel(pick(nPos, 240, 70), " ")
#define R_LOC_eC553_3232(A) put(nRec, 240, A :70.70)
!-----------------------------------------------------------
! FIELD : e5479 
#define S_LOC_e5479 peel(pick(nPos, 310, 3), " ")
#define R_LOC_e5479(A) put(nRec, 310, A :3.3)
!-----------------------------------------------------------
!===========================================================
! File : PCI
!===========================================================
! FIELD : tag tag
#define S_PCI_tag peel(pick(nPos, 1, 3), " ")
#define R_PCI_tag(A) put(nRec, 1, A :3.3)
!-----------------------------------------------------------
! FIELD : EYCDPR 
#define S_PCI_EYCDPR peel(pick(nPos, 4, 3), " ")
#define R_PCI_EYCDPR(A) put(nRec, 4, A :3.3)
!-----------------------------------------------------------
! FIELD : EYSPE1 
#define S_PCI_EYSPE1 peel(pick(nPos, 7, 35), " ")
#define R_PCI_EYSPE1(A) put(nRec, 7, A :35.35)
!-----------------------------------------------------------
! FIELD : EYSPE2 
#define S_PCI_EYSPE2 peel(pick(nPos, 42, 35), " ")
#define R_PCI_EYSPE2(A) put(nRec, 42, A :35.35)
!-----------------------------------------------------------
! FIELD : EYSPE3 
#define S_PCI_EYSPE3 peel(pick(nPos, 77, 35), " ")
#define R_PCI_EYSPE3(A) put(nRec, 77, A :35.35)
!-----------------------------------------------------------
! FIELD : EYSPE4 
#define S_PCI_EYSPE4 peel(pick(nPos, 112, 35), " ")
#define R_PCI_EYSPE4(A) put(nRec, 112, A :35.35)
!-----------------------------------------------------------
! FIELD : EYSPE5 
#define S_PCI_EYSPE5 peel(pick(nPos, 147, 35), " ")
#define R_PCI_EYSPE5(A) put(nRec, 147, A :35.35)
!-----------------------------------------------------------
! FIELD : EYSPE6 
#define S_PCI_EYSPE6 peel(pick(nPos, 182, 35), " ")
#define R_PCI_EYSPE6(A) put(nRec, 182, A :35.35)
!-----------------------------------------------------------
! FIELD : EYSPE7 
#define S_PCI_EYSPE7 peel(pick(nPos, 217, 35), " ")
#define R_PCI_EYSPE7(A) put(nRec, 217, A :35.35)
!-----------------------------------------------------------
! FIELD : EYSPE8 
#define S_PCI_EYSPE8 peel(pick(nPos, 252, 35), " ")
#define R_PCI_EYSPE8(A) put(nRec, 252, A :35.35)
!-----------------------------------------------------------
! FIELD : EYSPE9 
#define S_PCI_EYSPE9 peel(pick(nPos, 287, 35), " ")
#define R_PCI_EYSPE9(A) put(nRec, 287, A :35.35)
!-----------------------------------------------------------
! FIELD : EYSP10 
#define S_PCI_EYSP10 peel(pick(nPos, 322, 35), " ")
#define R_PCI_EYSP10(A) put(nRec, 322, A :35.35)
!-----------------------------------------------------------
! FIELD : EYCDST 
#define S_PCI_EYCDST peel(pick(nPos, 357, 3), " ")
#define R_PCI_EYCDST(A) put(nRec, 357, A :3.3)
!-----------------------------------------------------------
! FIELD : EYCDTI 
#define S_PCI_EYCDTI peel(pick(nPos, 360, 3), " ")
#define R_PCI_EYCDTI(A) put(nRec, 360, A :3.3)
!-----------------------------------------------------------
! FIELD : EYCLQU 
#define S_PCI_EYCLQU peel(pick(nPos, 363, 3), " ")
#define R_PCI_EYCLQU(A) put(nRec, 363, A :3.3)
!-----------------------------------------------------------
! FIELD : EYCLRE 
#define S_PCI_EYCLRE peel(pick(nPos, 366, 3), " ")
#define R_PCI_EYCLRE(A) put(nRec, 366, A :3.3)
!-----------------------------------------------------------
!===========================================================
! File : GIN
!===========================================================
! FIELD : tag tag
#define S_GIN_tag peel(pick(nPos, 1, 3), " ")
#define R_GIN_tag(A) put(nRec, 1, A :3.3)
!-----------------------------------------------------------
! FIELD : e7405 
#define S_GIN_e7405 peel(pick(nPos, 4, 3), " ")
#define R_GIN_e7405(A) put(nRec, 4, A :3.3)
!-----------------------------------------------------------
! FIELD : eC208_1_7402_1 
#define S_GIN_eC208_1_7402_1 peel(pick(nPos, 7, 35), " ")
#define R_GIN_eC208_1_7402_1(A) put(nRec, 7, A :35.35)
!-----------------------------------------------------------
! FIELD : eC208_1_7402_2 
#define S_GIN_eC208_1_7402_2 peel(pick(nPos, 42, 35), " ")
#define R_GIN_eC208_1_7402_2(A) put(nRec, 42, A :35.35)
!-----------------------------------------------------------
! FIELD : eC208_2_7402_1 
#define S_GIN_eC208_2_7402_1 peel(pick(nPos, 77, 35), " ")
#define R_GIN_eC208_2_7402_1(A) put(nRec, 77, A :35.35)
!-----------------------------------------------------------
! FIELD : eC208_2_7402_2 
#define S_GIN_eC208_2_7402_2 peel(pick(nPos, 112, 35), " ")
#define R_GIN_eC208_2_7402_2(A) put(nRec, 112, A :35.35)
!-----------------------------------------------------------
! FIELD : eC208_3_7402_1 
#define S_GIN_eC208_3_7402_1 peel(pick(nPos, 147, 35), " ")
#define R_GIN_eC208_3_7402_1(A) put(nRec, 147, A :35.35)
!-----------------------------------------------------------
! FIELD : eC208_3_7402_2 
#define S_GIN_eC208_3_7402_2 peel(pick(nPos, 182, 35), " ")
#define R_GIN_eC208_3_7402_2(A) put(nRec, 182, A :35.35)
!-----------------------------------------------------------
! FIELD : eC208_4_7402_1 
#define S_GIN_eC208_4_7402_1 peel(pick(nPos, 217, 35), " ")
#define R_GIN_eC208_4_7402_1(A) put(nRec, 217, A :35.35)
!-----------------------------------------------------------
! FIELD : eC208_4_7402_2 
#define S_GIN_eC208_4_7402_2 peel(pick(nPos, 252, 35), " ")
#define R_GIN_eC208_4_7402_2(A) put(nRec, 252, A :35.35)
!-----------------------------------------------------------
! FIELD : eC208_5_7402_1 
#define S_GIN_eC208_5_7402_1 peel(pick(nPos, 287, 35), " ")
#define R_GIN_eC208_5_7402_1(A) put(nRec, 287, A :35.35)
!-----------------------------------------------------------
! FIELD : eC208_5_7402_2 
#define S_GIN_eC208_5_7402_2 peel(pick(nPos, 322, 35), " ")
#define R_GIN_eC208_5_7402_2(A) put(nRec, 322, A :35.35)
!-----------------------------------------------------------
!===========================================================
! File : UNS
!===========================================================
! FIELD : tag tag
#define S_UNS_tag peel(pick(nPos, 1, 3), " ")
#define R_UNS_tag(A) put(nRec, 1, A :3.3)
!-----------------------------------------------------------
! FIELD : EUDATI ID- Segmento Dati
#define S_UNS_EUDATI peel(pick(nPos, 4, 1), " ")
#define R_UNS_EUDATI(A) put(nRec, 4, A :1.1)
!-----------------------------------------------------------
!===========================================================
! File : MOA2
!===========================================================
! FIELD : tag tag
#define S_MOA2_tag peel(pick(nPos, 1, 3), " ")
#define R_MOA2_tag(A) put(nRec, 1, A :3.3)
!-----------------------------------------------------------
! FIELD : E_CDTI ID- Segmento Dati
#define S_MOA2_E_CDTI peel(pick(nPos, 4, 3), " ")
#define R_MOA2_E_CDTI(A) put(nRec, 4, A :3.3)
!-----------------------------------------------------------
! FIELD : E_VALO ID- Segmento Dati
#define S_MOA2_E_VALO peel(pick(nPos, 7, 18), " ")
#define R_MOA2_E_VALO(A) put(nRec, 7, A :18.18)
!-----------------------------------------------------------
! FIELD : E_CDVA ID- Segmento Dati
#define S_MOA2_E_CDVA peel(pick(nPos, 25, 3), " ")
#define R_MOA2_E_CDVA(A) put(nRec, 25, A :3.3)
!-----------------------------------------------------------
! FIELD : E_QUVA ID- Segmento Dati
#define S_MOA2_E_QUVA peel(pick(nPos, 28, 3), " ")
#define R_MOA2_E_QUVA(A) put(nRec, 28, A :3.3)
!-----------------------------------------------------------
! FIELD : E_CDST ID- Segmento Dati
#define S_MOA2_E_CDST peel(pick(nPos, 31, 3), " ")
#define R_MOA2_E_CDST(A) put(nRec, 31, A :3.3)
!-----------------------------------------------------------
!===========================================================
! File : CNT
!===========================================================
! FIELD : tag tag
#define S_CNT_tag peel(pick(nPos, 1, 3), " ")
#define R_CNT_tag(A) put(nRec, 1, A :3.3)
!-----------------------------------------------------------
! FIELD : ECQUCT ID- Qualificatore
#define S_CNT_ECQUCT peel(pick(nPos, 4, 3), " ")
#define R_CNT_ECQUCT(A) put(nRec, 4, A :3.3)
!-----------------------------------------------------------
! FIELD : ECVACT R - Valore
#define S_CNT_ECVACT peel(pick(nPos, 7, 18), " ")
#define R_CNT_ECVACT(A) put(nRec, 7, A :18.18)
!-----------------------------------------------------------
! FIELD : ECUNMI AN- Unita' di Misura
#define S_CNT_ECUNMI peel(pick(nPos, 25, 3), " ")
#define R_CNT_ECUNMI(A) put(nRec, 25, A :3.3)
!-----------------------------------------------------------
!===========================================================
! File : UNT
!===========================================================
! FIELD : tag 
#define S_UNT_tag peel(pick(nPos, 1, 3), " ")
#define R_UNT_tag(A) put(nRec, 1, A :3.3)
!-----------------------------------------------------------
! FIELD : e0074 Number of segments in a message
#define S_UNT_e0074 peel(pick(nPos, 4, 6), " ")
#define R_UNT_e0074(A) put(nRec, 4, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : e0062 Message reference number
#define S_UNT_e0062 peel(pick(nPos, 10, 14), " ")
#define R_UNT_e0062(A) put(nRec, 10, A :14.14)
!-----------------------------------------------------------
!===========================================================
! File : UNZ
!===========================================================
! FIELD : tag 
#define S_UNZ_tag peel(pick(nPos, 1, 3), " ")
#define R_UNZ_tag(A) put(nRec, 1, A :3.3)
!-----------------------------------------------------------
! FIELD : e0036 Interchange control count
#define S_UNZ_e0036 peel(pick(nPos, 4, 6), " ")
#define R_UNZ_e0036(A) put(nRec, 4, build(number(A):R06.0))
!-----------------------------------------------------------
! FIELD : e0020 Interchange control reference
#define S_UNZ_e0020 peel(pick(nPos, 10, 14), " ")
#define R_UNZ_e0020(A) put(nRec, 10, A :14.14)
!-----------------------------------------------------------
