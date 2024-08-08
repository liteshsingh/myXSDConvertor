!===========================================================
! File : UNA
!===========================================================
! FIELD : tag 
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
! FIELD : UNA5 Reserved (used from syntax version 4)
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
! FIELD : tag 
#define S_UNB_tag peel(pick(nPos, 1, 3), " ")
#define R_UNB_tag(A) put(nRec, 1, A :3.3)
!-----------------------------------------------------------
! FIELD : e0001 Syntax identifier
#define S_UNB_e0001 peel(pick(nPos, 4, 4), " ")
#define R_UNB_e0001(A) put(nRec, 4, A :4.4)
!-----------------------------------------------------------
! FIELD : e0002 Syntax version number
#define S_UNB_e0002 peel(pick(nPos, 8, 1), " ")
#define R_UNB_e0002(A) put(nRec, 8, build(number(A):R01.0))
!-----------------------------------------------------------
! FIELD : e0004 Sender identification
#define S_UNB_e0004 peel(pick(nPos, 9, 35), " ")
#define R_UNB_e0004(A) put(nRec, 9, A :35.35)
!-----------------------------------------------------------
! FIELD : e0007 Partner identification code qualifier
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
! FIELD : e0007_2 Partner identification code qualifier
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
! FIELD : e0026 Application reference
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
! FIELD : tag 
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
! FIELD : e0052 Message type version number
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
! FIELD : e0057 Association assigned code
#define S_UNH_e0057 peel(pick(nPos, 32, 6), " ")
#define R_UNH_e0057(A) put(nRec, 32, A :6.6)
!-----------------------------------------------------------
! FIELD : e0068 Common access reference
#define S_UNH_e0068 peel(pick(nPos, 38, 35), " ")
#define R_UNH_e0068(A) put(nRec, 38, A :35.35)
!-----------------------------------------------------------
! FIELD : e0070 Sequence message transfer number
#define S_UNH_e0070 peel(pick(nPos, 73, 2), " ")
#define R_UNH_e0070(A) put(nRec, 73, A :2.2)
!-----------------------------------------------------------
! FIELD : e0073 First/last sequence message transfer indication
#define S_UNH_e0073 peel(pick(nPos, 75, 1), " ")
#define R_UNH_e0073(A) put(nRec, 75, A :1.1)
!-----------------------------------------------------------
!===========================================================
! File : BGM
!===========================================================
! FIELD : tag 
#define S_BGM_tag peel(pick(nPos, 1, 3), " ")
#define R_BGM_tag(A) put(nRec, 1, A :3.3)
!-----------------------------------------------------------
! FIELD : e1001 Document/message name, coded
#define S_BGM_e1001 peel(pick(nPos, 4, 3), " ")
#define R_BGM_e1001(A) put(nRec, 4, A :3.3)
!-----------------------------------------------------------
! FIELD : e1131 Code list qualifier
#define S_BGM_e1131 peel(pick(nPos, 7, 3), " ")
#define R_BGM_e1131(A) put(nRec, 7, A :3.3)
!-----------------------------------------------------------
! FIELD : e3055 Code list responsible agency, coded
#define S_BGM_e3055 peel(pick(nPos, 10, 3), " ")
#define R_BGM_e3055(A) put(nRec, 10, A :3.3)
!-----------------------------------------------------------
! FIELD : e1000 Document/message name
#define S_BGM_e1000 peel(pick(nPos, 13, 35), " ")
#define R_BGM_e1000(A) put(nRec, 13, A :35.35)
!-----------------------------------------------------------
! FIELD : e1004 Document/message number
#define S_BGM_e1004 peel(pick(nPos, 48, 35), " ")
#define R_BGM_e1004(A) put(nRec, 48, A :35.35)
!-----------------------------------------------------------
! FIELD : e1225 Message function, coded
#define S_BGM_e1225 peel(pick(nPos, 83, 3), " ")
#define R_BGM_e1225(A) put(nRec, 83, A :3.3)
!-----------------------------------------------------------
! FIELD : e4343 Response type, coded
#define S_BGM_e4343 peel(pick(nPos, 86, 3), " ")
#define R_BGM_e4343(A) put(nRec, 86, A :3.3)
!-----------------------------------------------------------
!===========================================================
! File : DTM
!===========================================================
! FIELD : tag 
#define S_DTM_tag peel(pick(nPos, 1, 3), " ")
#define R_DTM_tag(A) put(nRec, 1, A :3.3)
!-----------------------------------------------------------
! FIELD : e2005 Date/time/period qualifier
#define S_DTM_e2005 peel(pick(nPos, 4, 3), " ")
#define R_DTM_e2005(A) put(nRec, 4, A :3.3)
!-----------------------------------------------------------
! FIELD : e2380 Date/time/period
#define S_DTM_e2380 peel(pick(nPos, 7, 35), " ")
#define R_DTM_e2380(A) put(nRec, 7, A :35.35)
!-----------------------------------------------------------
! FIELD : e2379 Date/time/period format qualifier
#define S_DTM_e2379 peel(pick(nPos, 42, 3), " ")
#define R_DTM_e2379(A) put(nRec, 42, A :3.3)
!-----------------------------------------------------------
!===========================================================
! File : RFF
!===========================================================
! FIELD : tag 
#define S_RFF_tag peel(pick(nPos, 1, 3), " ")
#define R_RFF_tag(A) put(nRec, 1, A :3.3)
!-----------------------------------------------------------
! FIELD : e1153 Reference qualifier
#define S_RFF_e1153 peel(pick(nPos, 4, 3), " ")
#define R_RFF_e1153(A) put(nRec, 4, A :3.3)
!-----------------------------------------------------------
! FIELD : e1154 Reference number
#define S_RFF_e1154 peel(pick(nPos, 7, 35), " ")
#define R_RFF_e1154(A) put(nRec, 7, A :35.35)
!-----------------------------------------------------------
! FIELD : e1156 Line number
#define S_RFF_e1156 peel(pick(nPos, 42, 6), " ")
#define R_RFF_e1156(A) put(nRec, 42, A :6.6)
!-----------------------------------------------------------
! FIELD : e4000 Reference version number
#define S_RFF_e4000 peel(pick(nPos, 48, 35), " ")
#define R_RFF_e4000(A) put(nRec, 48, A :35.35)
!-----------------------------------------------------------
!===========================================================
! File : NAD
!===========================================================
! FIELD : tag 
#define S_NAD_tag peel(pick(nPos, 1, 3), " ")
#define R_NAD_tag(A) put(nRec, 1, A :3.3)
!-----------------------------------------------------------
! FIELD : e3035 Party qualifier
#define S_NAD_e3035 peel(pick(nPos, 4, 3), " ")
#define R_NAD_e3035(A) put(nRec, 4, A :3.3)
!-----------------------------------------------------------
! FIELD : e3039 Party id. identification
#define S_NAD_e3039 peel(pick(nPos, 7, 35), " ")
#define R_NAD_e3039(A) put(nRec, 7, A :35.35)
!-----------------------------------------------------------
! FIELD : e1131 Code list qualifier
#define S_NAD_e1131 peel(pick(nPos, 42, 3), " ")
#define R_NAD_e1131(A) put(nRec, 42, A :3.3)
!-----------------------------------------------------------
! FIELD : e3055_2 Code list responsible agency, coded
#define S_NAD_e3055_2 peel(pick(nPos, 45, 3), " ")
#define R_NAD_e3055_2(A) put(nRec, 45, A :3.3)
!-----------------------------------------------------------
! FIELD : e3124 Name and address line
#define S_NAD_e3124 peel(pick(nPos, 48, 35), " ")
#define R_NAD_e3124(A) put(nRec, 48, A :35.35)
!-----------------------------------------------------------
! FIELD : e3124_2 Name and address line
#define S_NAD_e3124_2 peel(pick(nPos, 83, 35), " ")
#define R_NAD_e3124_2(A) put(nRec, 83, A :35.35)
!-----------------------------------------------------------
! FIELD : e3124_3 Name and address line
#define S_NAD_e3124_3 peel(pick(nPos, 118, 35), " ")
#define R_NAD_e3124_3(A) put(nRec, 118, A :35.35)
!-----------------------------------------------------------
! FIELD : e3124_4 Name and address line
#define S_NAD_e3124_4 peel(pick(nPos, 153, 35), " ")
#define R_NAD_e3124_4(A) put(nRec, 153, A :35.35)
!-----------------------------------------------------------
! FIELD : e3124_5 Name and address line
#define S_NAD_e3124_5 peel(pick(nPos, 188, 35), " ")
#define R_NAD_e3124_5(A) put(nRec, 188, A :35.35)
!-----------------------------------------------------------
! FIELD : e3036 Party name
#define S_NAD_e3036 peel(pick(nPos, 223, 35), " ")
#define R_NAD_e3036(A) put(nRec, 223, A :35.35)
!-----------------------------------------------------------
! FIELD : e3036_2 Party name
#define S_NAD_e3036_2 peel(pick(nPos, 258, 35), " ")
#define R_NAD_e3036_2(A) put(nRec, 258, A :35.35)
!-----------------------------------------------------------
! FIELD : e3036_3 Party name
#define S_NAD_e3036_3 peel(pick(nPos, 293, 35), " ")
#define R_NAD_e3036_3(A) put(nRec, 293, A :35.35)
!-----------------------------------------------------------
! FIELD : e3036_4 Party name
#define S_NAD_e3036_4 peel(pick(nPos, 328, 35), " ")
#define R_NAD_e3036_4(A) put(nRec, 328, A :35.35)
!-----------------------------------------------------------
! FIELD : e3036_5 Party name
#define S_NAD_e3036_5 peel(pick(nPos, 363, 35), " ")
#define R_NAD_e3036_5(A) put(nRec, 363, A :35.35)
!-----------------------------------------------------------
! FIELD : e3045 Party name format, coded
#define S_NAD_e3045 peel(pick(nPos, 398, 3), " ")
#define R_NAD_e3045(A) put(nRec, 398, A :3.3)
!-----------------------------------------------------------
! FIELD : e3042 Street and number/p.o. box
#define S_NAD_e3042 peel(pick(nPos, 401, 35), " ")
#define R_NAD_e3042(A) put(nRec, 401, A :35.35)
!-----------------------------------------------------------
! FIELD : e3042_2 Street and number/p.o. box
#define S_NAD_e3042_2 peel(pick(nPos, 436, 35), " ")
#define R_NAD_e3042_2(A) put(nRec, 436, A :35.35)
!-----------------------------------------------------------
! FIELD : e3042_3 Street and number/p.o. box
#define S_NAD_e3042_3 peel(pick(nPos, 471, 35), " ")
#define R_NAD_e3042_3(A) put(nRec, 471, A :35.35)
!-----------------------------------------------------------
! FIELD : e3042_4 Street and number/p.o. box
#define S_NAD_e3042_4 peel(pick(nPos, 506, 35), " ")
#define R_NAD_e3042_4(A) put(nRec, 506, A :35.35)
!-----------------------------------------------------------
! FIELD : e3164 City name
#define S_NAD_e3164 peel(pick(nPos, 541, 35), " ")
#define R_NAD_e3164(A) put(nRec, 541, A :35.35)
!-----------------------------------------------------------
! FIELD : e3229 Country sub-entity identification
#define S_NAD_e3229 peel(pick(nPos, 576, 9), " ")
#define R_NAD_e3229(A) put(nRec, 576, A :9.9)
!-----------------------------------------------------------
! FIELD : e3251 Postcode identification
#define S_NAD_e3251 peel(pick(nPos, 585, 9), " ")
#define R_NAD_e3251(A) put(nRec, 585, A :9.9)
!-----------------------------------------------------------
! FIELD : e3207 Country, coded
#define S_NAD_e3207 peel(pick(nPos, 594, 3), " ")
#define R_NAD_e3207(A) put(nRec, 594, A :3.3)
!-----------------------------------------------------------
!===========================================================
! File : EQD
!===========================================================
! FIELD : tag 
#define S_EQD_tag peel(pick(nPos, 1, 3), " ")
#define R_EQD_tag(A) put(nRec, 1, A :3.3)
!-----------------------------------------------------------
! FIELD : e8053 Equipment qualifier
#define S_EQD_e8053 peel(pick(nPos, 4, 3), " ")
#define R_EQD_e8053(A) put(nRec, 4, A :3.3)
!-----------------------------------------------------------
!===========================================================
! File : MEA
!===========================================================
! FIELD : tag 
#define S_MEA_tag peel(pick(nPos, 1, 3), " ")
#define R_MEA_tag(A) put(nRec, 1, A :3.3)
!-----------------------------------------------------------
! FIELD : e6311 Measurement application qualifier
#define S_MEA_e6311 peel(pick(nPos, 4, 3), " ")
#define R_MEA_e6311(A) put(nRec, 4, A :3.3)
!-----------------------------------------------------------
! FIELD : e6313 Measurement dimension, coded
#define S_MEA_e6313 peel(pick(nPos, 7, 3), " ")
#define R_MEA_e6313(A) put(nRec, 7, A :3.3)
!-----------------------------------------------------------
! FIELD : e6321 Measurement significance, coded
#define S_MEA_e6321 peel(pick(nPos, 10, 3), " ")
#define R_MEA_e6321(A) put(nRec, 10, A :3.3)
!-----------------------------------------------------------
! FIELD : e6155 Measurement attribute, coded
#define S_MEA_e6155 peel(pick(nPos, 13, 3), " ")
#define R_MEA_e6155(A) put(nRec, 13, A :3.3)
!-----------------------------------------------------------
! FIELD : e6154 Measurement attribute
#define S_MEA_e6154 peel(pick(nPos, 16, 70), " ")
#define R_MEA_e6154(A) put(nRec, 16, A :70.70)
!-----------------------------------------------------------
! FIELD : e6411 Measure unit qualifier
#define S_MEA_e6411 peel(pick(nPos, 86, 3), " ")
#define R_MEA_e6411(A) put(nRec, 86, A :3.3)
!-----------------------------------------------------------
! FIELD : e6314 Measurement value
#define S_MEA_e6314 peel(pick(nPos, 89, 18), " ")
#define R_MEA_e6314(A) put(nRec, 89, A :18.18)
!-----------------------------------------------------------
! FIELD : e6162 Range minimum
#define S_MEA_e6162 peel(pick(nPos, 107, 18), " ")
#define R_MEA_e6162(A) put(nRec, 107, A :18.18)
!-----------------------------------------------------------
! FIELD : e6152 Range maximum
#define S_MEA_e6152 peel(pick(nPos, 125, 18), " ")
#define R_MEA_e6152(A) put(nRec, 125, A :18.18)
!-----------------------------------------------------------
! FIELD : e6432 Significant digits
#define S_MEA_e6432 peel(pick(nPos, 143, 2), " ")
#define R_MEA_e6432(A) put(nRec, 143, A :2.2)
!-----------------------------------------------------------
! FIELD : e7383 Surface/layer indicator, coded
#define S_MEA_e7383 peel(pick(nPos, 145, 3), " ")
#define R_MEA_e7383(A) put(nRec, 145, A :3.3)
!-----------------------------------------------------------
!===========================================================
! File : CPS
!===========================================================
! FIELD : tag 
#define S_CPS_tag peel(pick(nPos, 1, 3), " ")
#define R_CPS_tag(A) put(nRec, 1, A :3.3)
!-----------------------------------------------------------
! FIELD : e7164 Hierarchical id number
#define S_CPS_e7164 peel(pick(nPos, 4, 12), " ")
#define R_CPS_e7164(A) put(nRec, 4, A :12.12)
!-----------------------------------------------------------
! FIELD : e7166 Hierarchical parent id
#define S_CPS_e7166 peel(pick(nPos, 16, 12), " ")
#define R_CPS_e7166(A) put(nRec, 16, A :12.12)
!-----------------------------------------------------------
! FIELD : e7075 Packaging level, coded
#define S_CPS_e7075 peel(pick(nPos, 28, 3), " ")
#define R_CPS_e7075(A) put(nRec, 28, A :3.3)
!-----------------------------------------------------------
!===========================================================
! File : PAC
!===========================================================
! FIELD : tag 
#define S_PAC_tag peel(pick(nPos, 1, 3), " ")
#define R_PAC_tag(A) put(nRec, 1, A :3.3)
!-----------------------------------------------------------
! FIELD : e7224 Number of packages
#define S_PAC_e7224 peel(pick(nPos, 4, 8), " ")
#define R_PAC_e7224(A) put(nRec, 4, A :8.8)
!-----------------------------------------------------------
! FIELD : e7075 Packaging level, coded
#define S_PAC_e7075 peel(pick(nPos, 12, 3), " ")
#define R_PAC_e7075(A) put(nRec, 12, A :3.3)
!-----------------------------------------------------------
! FIELD : e7233 Packaging related information, coded
#define S_PAC_e7233 peel(pick(nPos, 15, 3), " ")
#define R_PAC_e7233(A) put(nRec, 15, A :3.3)
!-----------------------------------------------------------
! FIELD : e7073 Packaging terms and conditions, coded
#define S_PAC_e7073 peel(pick(nPos, 18, 3), " ")
#define R_PAC_e7073(A) put(nRec, 18, A :3.3)
!-----------------------------------------------------------
! FIELD : e7065 Type of packages identification
#define S_PAC_e7065 peel(pick(nPos, 21, 17), " ")
#define R_PAC_e7065(A) put(nRec, 21, A :17.17)
!-----------------------------------------------------------
! FIELD : e1131 Code list qualifier
#define S_PAC_e1131 peel(pick(nPos, 38, 3), " ")
#define R_PAC_e1131(A) put(nRec, 38, A :3.3)
!-----------------------------------------------------------
! FIELD : e3055 Code list responsible agency, coded
#define S_PAC_e3055 peel(pick(nPos, 41, 3), " ")
#define R_PAC_e3055(A) put(nRec, 41, A :3.3)
!-----------------------------------------------------------
! FIELD : e7064 Type of packages
#define S_PAC_e7064 peel(pick(nPos, 44, 35), " ")
#define R_PAC_e7064(A) put(nRec, 44, A :35.35)
!-----------------------------------------------------------
! FIELD : e7077 Item description type, coded
#define S_PAC_e7077 peel(pick(nPos, 79, 3), " ")
#define R_PAC_e7077(A) put(nRec, 79, A :3.3)
!-----------------------------------------------------------
! FIELD : e7064_2 Type of packages
#define S_PAC_e7064_2 peel(pick(nPos, 82, 35), " ")
#define R_PAC_e7064_2(A) put(nRec, 82, A :35.35)
!-----------------------------------------------------------
! FIELD : e7143 Item number type, coded
#define S_PAC_e7143 peel(pick(nPos, 117, 3), " ")
#define R_PAC_e7143(A) put(nRec, 117, A :3.3)
!-----------------------------------------------------------
! FIELD : e7064_3 Type of packages
#define S_PAC_e7064_3 peel(pick(nPos, 120, 35), " ")
#define R_PAC_e7064_3(A) put(nRec, 120, A :35.35)
!-----------------------------------------------------------
! FIELD : e7143_2 Item number type, coded
#define S_PAC_e7143_2 peel(pick(nPos, 155, 3), " ")
#define R_PAC_e7143_2(A) put(nRec, 155, A :3.3)
!-----------------------------------------------------------
! FIELD : e8395 Returnable package freight payment responsibility, coded
#define S_PAC_e8395 peel(pick(nPos, 158, 3), " ")
#define R_PAC_e8395(A) put(nRec, 158, A :3.3)
!-----------------------------------------------------------
! FIELD : e8393 Returnable package load contents, coded
#define S_PAC_e8393 peel(pick(nPos, 161, 3), " ")
#define R_PAC_e8393(A) put(nRec, 161, A :3.3)
!-----------------------------------------------------------
!===========================================================
! File : PCI2
!===========================================================
! FIELD : tag 
#define S_PCI2_tag peel(pick(nPos, 1, 3), " ")
#define R_PCI2_tag(A) put(nRec, 1, A :3.3)
!-----------------------------------------------------------
! FIELD : e4233 Marking instructions, coded
#define S_PCI2_e4233 peel(pick(nPos, 4, 3), " ")
#define R_PCI2_e4233(A) put(nRec, 4, A :3.3)
!-----------------------------------------------------------
!===========================================================
! File : GIN2
!===========================================================
! FIELD : tag 
#define S_GIN2_tag peel(pick(nPos, 1, 3), " ")
#define R_GIN2_tag(A) put(nRec, 1, A :3.3)
!-----------------------------------------------------------
! FIELD : e7405 Identity number qualifier
#define S_GIN2_e7405 peel(pick(nPos, 4, 3), " ")
#define R_GIN2_e7405(A) put(nRec, 4, A :3.3)
!-----------------------------------------------------------
! FIELD : e7402_1 Identity number
#define S_GIN2_e7402_1 peel(pick(nPos, 7, 35), " ")
#define R_GIN2_e7402_1(A) put(nRec, 7, A :35.35)
!-----------------------------------------------------------
! FIELD : e7402_2 Identity number
#define S_GIN2_e7402_2 peel(pick(nPos, 42, 35), " ")
#define R_GIN2_e7402_2(A) put(nRec, 42, A :35.35)
!-----------------------------------------------------------
!===========================================================
! File : LIN
!===========================================================
! FIELD : tag 
#define S_LIN_tag peel(pick(nPos, 1, 3), " ")
#define R_LIN_tag(A) put(nRec, 1, A :3.3)
!-----------------------------------------------------------
! FIELD : e1082 Line item number
#define S_LIN_e1082 peel(pick(nPos, 4, 6), " ")
#define R_LIN_e1082(A) put(nRec, 4, A :6.6)
!-----------------------------------------------------------
! FIELD : e1229 Action request/notification, coded
#define S_LIN_e1229 peel(pick(nPos, 10, 3), " ")
#define R_LIN_e1229(A) put(nRec, 10, A :3.3)
!-----------------------------------------------------------
! FIELD : e7140 Item number
#define S_LIN_e7140 peel(pick(nPos, 13, 35), " ")
#define R_LIN_e7140(A) put(nRec, 13, A :35.35)
!-----------------------------------------------------------
! FIELD : e7143 Item number type, coded
#define S_LIN_e7143 peel(pick(nPos, 48, 3), " ")
#define R_LIN_e7143(A) put(nRec, 48, A :3.3)
!-----------------------------------------------------------
! FIELD : e1131 Code list qualifier
#define S_LIN_e1131 peel(pick(nPos, 51, 3), " ")
#define R_LIN_e1131(A) put(nRec, 51, A :3.3)
!-----------------------------------------------------------
! FIELD : e3055 Code list responsible agency, coded
#define S_LIN_e3055 peel(pick(nPos, 54, 3), " ")
#define R_LIN_e3055(A) put(nRec, 54, A :3.3)
!-----------------------------------------------------------
! FIELD : e5495 Sub-line indicator, coded
#define S_LIN_e5495 peel(pick(nPos, 57, 3), " ")
#define R_LIN_e5495(A) put(nRec, 57, A :3.3)
!-----------------------------------------------------------
! FIELD : e1082_2 Line item number
#define S_LIN_e1082_2 peel(pick(nPos, 60, 6), " ")
#define R_LIN_e1082_2(A) put(nRec, 60, A :6.6)
!-----------------------------------------------------------
! FIELD : e1222 Configuration level
#define S_LIN_e1222 peel(pick(nPos, 66, 2), " ")
#define R_LIN_e1222(A) put(nRec, 66, A :2.2)
!-----------------------------------------------------------
! FIELD : e7083 Configuration, coded
#define S_LIN_e7083 peel(pick(nPos, 68, 3), " ")
#define R_LIN_e7083(A) put(nRec, 68, A :3.3)
!-----------------------------------------------------------
!===========================================================
! File : IMD
!===========================================================
! FIELD : tag 
#define S_IMD_tag peel(pick(nPos, 1, 3), " ")
#define R_IMD_tag(A) put(nRec, 1, A :3.3)
!-----------------------------------------------------------
! FIELD : e7077 description type, coded
#define S_IMD_e7077 peel(pick(nPos, 4, 3), " ")
#define R_IMD_e7077(A) put(nRec, 4, A :3.3)
!-----------------------------------------------------------
! FIELD : e7081 characteristic, coded
#define S_IMD_e7081 peel(pick(nPos, 7, 3), " ")
#define R_IMD_e7081(A) put(nRec, 7, A :3.3)
!-----------------------------------------------------------
! FIELD : e7008 description
#define S_IMD_e7008 peel(pick(nPos, 10, 35), " ")
#define R_IMD_e7008(A) put(nRec, 10, A :35.35)
!-----------------------------------------------------------
! FIELD : e7008_2 description
#define S_IMD_e7008_2 peel(pick(nPos, 45, 35), " ")
#define R_IMD_e7008_2(A) put(nRec, 45, A :35.35)
!-----------------------------------------------------------
!===========================================================
! File : QTY2
!===========================================================
! FIELD : tag 
#define S_QTY2_tag peel(pick(nPos, 1, 3), " ")
#define R_QTY2_tag(A) put(nRec, 1, A :3.3)
!-----------------------------------------------------------
! FIELD : e6063 Quantity qualifier
#define S_QTY2_e6063 peel(pick(nPos, 4, 3), " ")
#define R_QTY2_e6063(A) put(nRec, 4, A :3.3)
!-----------------------------------------------------------
! FIELD : e6060 Quantity
#define S_QTY2_e6060 peel(pick(nPos, 7, 15), " ")
#define R_QTY2_e6060(A) put(nRec, 7, A :15.15)
!-----------------------------------------------------------
! FIELD : e6411 Measure unit qualifier
#define S_QTY2_e6411 peel(pick(nPos, 22, 3), " ")
#define R_QTY2_e6411(A) put(nRec, 22, A :3.3)
!-----------------------------------------------------------
!===========================================================
! File : RFF2
!===========================================================
! FIELD : tag 
#define S_RFF2_tag peel(pick(nPos, 1, 3), " ")
#define R_RFF2_tag(A) put(nRec, 1, A :3.3)
!-----------------------------------------------------------
! FIELD : e1153 Reference qualifier
#define S_RFF2_e1153 peel(pick(nPos, 4, 3), " ")
#define R_RFF2_e1153(A) put(nRec, 4, A :3.3)
!-----------------------------------------------------------
! FIELD : e1154 Reference number
#define S_RFF2_e1154 peel(pick(nPos, 7, 35), " ")
#define R_RFF2_e1154(A) put(nRec, 7, A :35.35)
!-----------------------------------------------------------
! FIELD : e1156 Line number
#define S_RFF2_e1156 peel(pick(nPos, 42, 6), " ")
#define R_RFF2_e1156(A) put(nRec, 42, A :6.6)
!-----------------------------------------------------------
! FIELD : e4000 Reference version number
#define S_RFF2_e4000 peel(pick(nPos, 48, 35), " ")
#define R_RFF2_e4000(A) put(nRec, 48, A :35.35)
!-----------------------------------------------------------
!===========================================================
! File : LOC
!===========================================================
! FIELD : tag 
#define S_LOC_tag peel(pick(nPos, 1, 3), " ")
#define R_LOC_tag(A) put(nRec, 1, A :3.3)
!-----------------------------------------------------------
! FIELD : e3227 Place/location qualifier
#define S_LOC_e3227 peel(pick(nPos, 4, 3), " ")
#define R_LOC_e3227(A) put(nRec, 4, A :3.3)
!-----------------------------------------------------------
! FIELD : e3225 Place/location identification
#define S_LOC_e3225 peel(pick(nPos, 7, 25), " ")
#define R_LOC_e3225(A) put(nRec, 7, A :25.25)
!-----------------------------------------------------------
! FIELD : e1131 Code list qualifier
#define S_LOC_e1131 peel(pick(nPos, 32, 3), " ")
#define R_LOC_e1131(A) put(nRec, 32, A :3.3)
!-----------------------------------------------------------
! FIELD : e3055 Code list responsible agency, coded
#define S_LOC_e3055 peel(pick(nPos, 35, 3), " ")
#define R_LOC_e3055(A) put(nRec, 35, A :3.3)
!-----------------------------------------------------------
! FIELD : e3224 Place/location
#define S_LOC_e3224 peel(pick(nPos, 38, 70), " ")
#define R_LOC_e3224(A) put(nRec, 38, A :70.70)
!-----------------------------------------------------------
! FIELD : e3223 Related place/location one identification
#define S_LOC_e3223 peel(pick(nPos, 108, 25), " ")
#define R_LOC_e3223(A) put(nRec, 108, A :25.25)
!-----------------------------------------------------------
! FIELD : e1131_2 Code list qualifier
#define S_LOC_e1131_2 peel(pick(nPos, 133, 3), " ")
#define R_LOC_e1131_2(A) put(nRec, 133, A :3.3)
!-----------------------------------------------------------
! FIELD : e3055_2 Code list responsible agency, coded
#define S_LOC_e3055_2 peel(pick(nPos, 136, 3), " ")
#define R_LOC_e3055_2(A) put(nRec, 136, A :3.3)
!-----------------------------------------------------------
! FIELD : e3222 Related place/location one
#define S_LOC_e3222 peel(pick(nPos, 139, 70), " ")
#define R_LOC_e3222(A) put(nRec, 139, A :70.70)
!-----------------------------------------------------------
! FIELD : e3233 Related place/location two identification
#define S_LOC_e3233 peel(pick(nPos, 209, 25), " ")
#define R_LOC_e3233(A) put(nRec, 209, A :25.25)
!-----------------------------------------------------------
! FIELD : e1131_3 Code list qualifier
#define S_LOC_e1131_3 peel(pick(nPos, 234, 3), " ")
#define R_LOC_e1131_3(A) put(nRec, 234, A :3.3)
!-----------------------------------------------------------
! FIELD : e3055_3 Code list responsible agency, coded
#define S_LOC_e3055_3 peel(pick(nPos, 237, 3), " ")
#define R_LOC_e3055_3(A) put(nRec, 237, A :3.3)
!-----------------------------------------------------------
! FIELD : e3232 Related place/location two
#define S_LOC_e3232 peel(pick(nPos, 240, 70), " ")
#define R_LOC_e3232(A) put(nRec, 240, A :70.70)
!-----------------------------------------------------------
! FIELD : e5479 Relation, coded
#define S_LOC_e5479 peel(pick(nPos, 310, 3), " ")
#define R_LOC_e5479(A) put(nRec, 310, A :3.3)
!-----------------------------------------------------------
!===========================================================
! File : PCI
!===========================================================
! FIELD : tag 
#define S_PCI_tag peel(pick(nPos, 1, 3), " ")
#define R_PCI_tag(A) put(nRec, 1, A :3.3)
!-----------------------------------------------------------
! FIELD : e4233 Marking instructions, coded
#define S_PCI_e4233 peel(pick(nPos, 4, 3), " ")
#define R_PCI_e4233(A) put(nRec, 4, A :3.3)
!-----------------------------------------------------------
! FIELD : e7102_1 Shipping marks
#define S_PCI_e7102_1 peel(pick(nPos, 7, 35), " ")
#define R_PCI_e7102_1(A) put(nRec, 7, A :35.35)
!-----------------------------------------------------------
! FIELD : e7102_2 Shipping marks
#define S_PCI_e7102_2 peel(pick(nPos, 42, 35), " ")
#define R_PCI_e7102_2(A) put(nRec, 42, A :35.35)
!-----------------------------------------------------------
! FIELD : e7102_3 Shipping marks
#define S_PCI_e7102_3 peel(pick(nPos, 77, 35), " ")
#define R_PCI_e7102_3(A) put(nRec, 77, A :35.35)
!-----------------------------------------------------------
! FIELD : e7102_4 Shipping marks
#define S_PCI_e7102_4 peel(pick(nPos, 112, 35), " ")
#define R_PCI_e7102_4(A) put(nRec, 112, A :35.35)
!-----------------------------------------------------------
! FIELD : e7102_5 Shipping marks
#define S_PCI_e7102_5 peel(pick(nPos, 147, 35), " ")
#define R_PCI_e7102_5(A) put(nRec, 147, A :35.35)
!-----------------------------------------------------------
! FIELD : e7102_6 Shipping marks
#define S_PCI_e7102_6 peel(pick(nPos, 182, 35), " ")
#define R_PCI_e7102_6(A) put(nRec, 182, A :35.35)
!-----------------------------------------------------------
! FIELD : e7102_7 Shipping marks
#define S_PCI_e7102_7 peel(pick(nPos, 217, 35), " ")
#define R_PCI_e7102_7(A) put(nRec, 217, A :35.35)
!-----------------------------------------------------------
! FIELD : e7102_8 Shipping marks
#define S_PCI_e7102_8 peel(pick(nPos, 252, 35), " ")
#define R_PCI_e7102_8(A) put(nRec, 252, A :35.35)
!-----------------------------------------------------------
! FIELD : e7102_9 Shipping marks
#define S_PCI_e7102_9 peel(pick(nPos, 287, 35), " ")
#define R_PCI_e7102_9(A) put(nRec, 287, A :35.35)
!-----------------------------------------------------------
! FIELD : e7102_10 Shipping marks
#define S_PCI_e7102_10 peel(pick(nPos, 322, 35), " ")
#define R_PCI_e7102_10(A) put(nRec, 322, A :35.35)
!-----------------------------------------------------------
! FIELD : e8275 Container/package status, coded
#define S_PCI_e8275 peel(pick(nPos, 357, 3), " ")
#define R_PCI_e8275(A) put(nRec, 357, A :3.3)
!-----------------------------------------------------------
! FIELD : e7511 Type of marking, coded
#define S_PCI_e7511 peel(pick(nPos, 360, 3), " ")
#define R_PCI_e7511(A) put(nRec, 360, A :3.3)
!-----------------------------------------------------------
! FIELD : e1131 Code list qualifier
#define S_PCI_e1131 peel(pick(nPos, 363, 3), " ")
#define R_PCI_e1131(A) put(nRec, 363, A :3.3)
!-----------------------------------------------------------
! FIELD : e3055 Code list responsible agency, coded
#define S_PCI_e3055 peel(pick(nPos, 366, 3), " ")
#define R_PCI_e3055(A) put(nRec, 366, A :3.3)
!-----------------------------------------------------------
!===========================================================
! File : DTM2
!===========================================================
! FIELD : tag 
#define S_DTM2_tag peel(pick(nPos, 1, 3), " ")
#define R_DTM2_tag(A) put(nRec, 1, A :3.3)
!-----------------------------------------------------------
! FIELD : e2005 Date/time/period qualifier
#define S_DTM2_e2005 peel(pick(nPos, 4, 3), " ")
#define R_DTM2_e2005(A) put(nRec, 4, A :3.3)
!-----------------------------------------------------------
! FIELD : e2380 Date/time/period
#define S_DTM2_e2380 peel(pick(nPos, 7, 35), " ")
#define R_DTM2_e2380(A) put(nRec, 7, A :35.35)
!-----------------------------------------------------------
! FIELD : e2379 Date/time/period format qualifier
#define S_DTM2_e2379 peel(pick(nPos, 42, 3), " ")
#define R_DTM2_e2379(A) put(nRec, 42, A :3.3)
!-----------------------------------------------------------
!===========================================================
! File : QTY
!===========================================================
! FIELD : tag 
#define S_QTY_tag peel(pick(nPos, 1, 3), " ")
#define R_QTY_tag(A) put(nRec, 1, A :3.3)
!-----------------------------------------------------------
! FIELD : e6063 Quantity qualifier
#define S_QTY_e6063 peel(pick(nPos, 4, 3), " ")
#define R_QTY_e6063(A) put(nRec, 4, A :3.3)
!-----------------------------------------------------------
! FIELD : e6060 Quantity
#define S_QTY_e6060 peel(pick(nPos, 7, 15), " ")
#define R_QTY_e6060(A) put(nRec, 7, A :15.15)
!-----------------------------------------------------------
! FIELD : e6411 Measure unit qualifier
#define S_QTY_e6411 peel(pick(nPos, 22, 3), " ")
#define R_QTY_e6411(A) put(nRec, 22, A :3.3)
!-----------------------------------------------------------
!===========================================================
! File : GIN
!===========================================================
! FIELD : tag 
#define S_GIN_tag peel(pick(nPos, 1, 3), " ")
#define R_GIN_tag(A) put(nRec, 1, A :3.3)
!-----------------------------------------------------------
! FIELD : e7405 Identity number qualifier
#define S_GIN_e7405 peel(pick(nPos, 4, 3), " ")
#define R_GIN_e7405(A) put(nRec, 4, A :3.3)
!-----------------------------------------------------------
! FIELD : e7402_1 Identity number
#define S_GIN_e7402_1 peel(pick(nPos, 7, 35), " ")
#define R_GIN_e7402_1(A) put(nRec, 7, A :35.35)
!-----------------------------------------------------------
! FIELD : e7402_2 Identity number
#define S_GIN_e7402_2 peel(pick(nPos, 42, 35), " ")
#define R_GIN_e7402_2(A) put(nRec, 42, A :35.35)
!-----------------------------------------------------------
! FIELD : e7402_3 Identity number
#define S_GIN_e7402_3 peel(pick(nPos, 77, 35), " ")
#define R_GIN_e7402_3(A) put(nRec, 77, A :35.35)
!-----------------------------------------------------------
! FIELD : e7402_4 Identity number
#define S_GIN_e7402_4 peel(pick(nPos, 112, 35), " ")
#define R_GIN_e7402_4(A) put(nRec, 112, A :35.35)
!-----------------------------------------------------------
! FIELD : e7402_5 Identity number
#define S_GIN_e7402_5 peel(pick(nPos, 147, 35), " ")
#define R_GIN_e7402_5(A) put(nRec, 147, A :35.35)
!-----------------------------------------------------------
! FIELD : e7402_6 Identity number
#define S_GIN_e7402_6 peel(pick(nPos, 182, 35), " ")
#define R_GIN_e7402_6(A) put(nRec, 182, A :35.35)
!-----------------------------------------------------------
! FIELD : e7402_7 Identity number
#define S_GIN_e7402_7 peel(pick(nPos, 217, 35), " ")
#define R_GIN_e7402_7(A) put(nRec, 217, A :35.35)
!-----------------------------------------------------------
! FIELD : e7402_8 Identity number
#define S_GIN_e7402_8 peel(pick(nPos, 252, 35), " ")
#define R_GIN_e7402_8(A) put(nRec, 252, A :35.35)
!-----------------------------------------------------------
! FIELD : e7402_9 Identity number
#define S_GIN_e7402_9 peel(pick(nPos, 287, 35), " ")
#define R_GIN_e7402_9(A) put(nRec, 287, A :35.35)
!-----------------------------------------------------------
! FIELD : e7402_10 Identity number
#define S_GIN_e7402_10 peel(pick(nPos, 322, 35), " ")
#define R_GIN_e7402_10(A) put(nRec, 322, A :35.35)
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
#define R_UNT_e0074(A) put(nRec, 4, A :6.6)
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
#define R_UNZ_e0036(A) put(nRec, 4, A :6.6)
!-----------------------------------------------------------
! FIELD : e0020 Interchange control reference
#define S_UNZ_e0020 peel(pick(nPos, 10, 14), " ")
#define R_UNZ_e0020(A) put(nRec, 10, A :14.14)
!-----------------------------------------------------------
