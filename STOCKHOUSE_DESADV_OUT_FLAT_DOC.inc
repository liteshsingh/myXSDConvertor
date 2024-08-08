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
! File : TDT
!===========================================================
! FIELD : tag 
#define S_TDT_tag peel(pick(nPos, 1, 3), " ")
#define R_TDT_tag(A) put(nRec, 1, A :3.3)
!-----------------------------------------------------------
! FIELD : e8051 Transport stage qualifier
#define S_TDT_e8051 peel(pick(nPos, 4, 3), " ")
#define R_TDT_e8051(A) put(nRec, 4, A :3.3)
!-----------------------------------------------------------
! FIELD : e8028 Conveyance reference number
#define S_TDT_e8028 peel(pick(nPos, 7, 17), " ")
#define R_TDT_e8028(A) put(nRec, 7, A :17.17)
!-----------------------------------------------------------
! FIELD : e8067 Mode of transport, coded
#define S_TDT_e8067 peel(pick(nPos, 24, 3), " ")
#define R_TDT_e8067(A) put(nRec, 24, A :3.3)
!-----------------------------------------------------------
! FIELD : e8066 Mode of transport
#define S_TDT_e8066 peel(pick(nPos, 27, 17), " ")
#define R_TDT_e8066(A) put(nRec, 27, A :17.17)
!-----------------------------------------------------------
! FIELD : e8179 Type of means of transport identification
#define S_TDT_e8179 peel(pick(nPos, 44, 8), " ")
#define R_TDT_e8179(A) put(nRec, 44, A :8.8)
!-----------------------------------------------------------
! FIELD : e8178 Type of means of transport
#define S_TDT_e8178 peel(pick(nPos, 52, 17), " ")
#define R_TDT_e8178(A) put(nRec, 52, A :17.17)
!-----------------------------------------------------------
! FIELD : e3127 Carrier identification
#define S_TDT_e3127 peel(pick(nPos, 69, 17), " ")
#define R_TDT_e3127(A) put(nRec, 69, A :17.17)
!-----------------------------------------------------------
! FIELD : e1131 Code list qualifier
#define S_TDT_e1131 peel(pick(nPos, 86, 3), " ")
#define R_TDT_e1131(A) put(nRec, 86, A :3.3)
!-----------------------------------------------------------
! FIELD : e3055 Code list responsible agency, coded
#define S_TDT_e3055 peel(pick(nPos, 89, 3), " ")
#define R_TDT_e3055(A) put(nRec, 89, A :3.3)
!-----------------------------------------------------------
! FIELD : e3128 Carrier name
#define S_TDT_e3128 peel(pick(nPos, 92, 35), " ")
#define R_TDT_e3128(A) put(nRec, 92, A :35.35)
!-----------------------------------------------------------
! FIELD : e8101 Transit direction, coded
#define S_TDT_e8101 peel(pick(nPos, 127, 3), " ")
#define R_TDT_e8101(A) put(nRec, 127, A :3.3)
!-----------------------------------------------------------
! FIELD : e8457 Excess transportation reason, coded
#define S_TDT_e8457 peel(pick(nPos, 130, 3), " ")
#define R_TDT_e8457(A) put(nRec, 130, A :3.3)
!-----------------------------------------------------------
! FIELD : e8459 Excess transportation responsibility, coded
#define S_TDT_e8459 peel(pick(nPos, 133, 3), " ")
#define R_TDT_e8459(A) put(nRec, 133, A :3.3)
!-----------------------------------------------------------
! FIELD : e7130 Customer authorization number
#define S_TDT_e7130 peel(pick(nPos, 136, 17), " ")
#define R_TDT_e7130(A) put(nRec, 136, A :17.17)
!-----------------------------------------------------------
! FIELD : e8213 Id. of means of transport identification
#define S_TDT_e8213 peel(pick(nPos, 153, 9), " ")
#define R_TDT_e8213(A) put(nRec, 153, A :9.9)
!-----------------------------------------------------------
! FIELD : e1131_2 Code list qualifier
#define S_TDT_e1131_2 peel(pick(nPos, 162, 3), " ")
#define R_TDT_e1131_2(A) put(nRec, 162, A :3.3)
!-----------------------------------------------------------
! FIELD : e3055_2 Code list responsible agency, coded
#define S_TDT_e3055_2 peel(pick(nPos, 165, 3), " ")
#define R_TDT_e3055_2(A) put(nRec, 165, A :3.3)
!-----------------------------------------------------------
! FIELD : e8212 Id. of the means of transport
#define S_TDT_e8212 peel(pick(nPos, 168, 35), " ")
#define R_TDT_e8212(A) put(nRec, 168, A :35.35)
!-----------------------------------------------------------
! FIELD : e8453 Nationality of means of transport, coded
#define S_TDT_e8453 peel(pick(nPos, 203, 3), " ")
#define R_TDT_e8453(A) put(nRec, 203, A :3.3)
!-----------------------------------------------------------
! FIELD : e8281 Transport ownership, coded
#define S_TDT_e8281 peel(pick(nPos, 206, 3), " ")
#define R_TDT_e8281(A) put(nRec, 206, A :3.3)
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
! File : FTX
!===========================================================
! FIELD : tag 
#define S_FTX_tag peel(pick(nPos, 1, 3), " ")
#define R_FTX_tag(A) put(nRec, 1, A :3.3)
!-----------------------------------------------------------
! FIELD : EFIDTX Reference qualifier
#define S_FTX_EFIDTX peel(pick(nPos, 4, 3), " ")
#define R_FTX_EFIDTX(A) put(nRec, 4, A :3.3)
!-----------------------------------------------------------
! FIELD : EFCDFU Reference number
#define S_FTX_EFCDFU peel(pick(nPos, 7, 3), " ")
#define R_FTX_EFCDFU(A) put(nRec, 7, A :3.3)
!-----------------------------------------------------------
! FIELD : EFCDTE Line number
#define S_FTX_EFCDTE peel(pick(nPos, 10, 17), " ")
#define R_FTX_EFCDTE(A) put(nRec, 10, A :17.17)
!-----------------------------------------------------------
! FIELD : EFCLQU Reference version number
#define S_FTX_EFCLQU peel(pick(nPos, 27, 3), " ")
#define R_FTX_EFCLQU(A) put(nRec, 27, A :3.3)
!-----------------------------------------------------------
! FIELD : EFCLRE Reference version number
#define S_FTX_EFCLRE peel(pick(nPos, 30, 3), " ")
#define R_FTX_EFCLRE(A) put(nRec, 30, A :3.3)
!-----------------------------------------------------------
! FIELD : EFTES1 Reference version number
#define S_FTX_EFTES1 peel(pick(nPos, 33, 512), " ")
#define R_FTX_EFTES1(A) put(nRec, 33, A :512.512)
!-----------------------------------------------------------
! FIELD : EFTES2 Reference version number
#define S_FTX_EFTES2 peel(pick(nPos, 545, 512), " ")
#define R_FTX_EFTES2(A) put(nRec, 545, A :512.512)
!-----------------------------------------------------------
! FIELD : EFTES3 Reference version number
#define S_FTX_EFTES3 peel(pick(nPos, 1057, 512), " ")
#define R_FTX_EFTES3(A) put(nRec, 1057, A :512.512)
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
