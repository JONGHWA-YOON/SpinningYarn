#pragma once

enum class eObjectDefine		// 오브젝트 추가될때마다 여기에 추가
{
	/// Common
	NextSceneButton,
	NextSceneButtonDisable,
	Dantto,

	///Main Scene
	MainScreen,
	HOWTOPLAY,
	HTPRIGHT,
	HTPLEFT,
	HTPEND,
	GAMERULE1,
	GAMERULE2,
	GAMERULE3,

	/// Knitting Scene (YJH)
	KnttingMainScreen,
	AnswerBoard,
	AnswerBoardUP,
	AnswerBoardDOWN,
	AnswerBoardLEFT,
	AnswerBoardRIGHT,
	AnswerO,
	AnswerX,
	DatumPoint,
	StartButton,
	Needle,
	DrawBoard,
	KnittingWork_1,
	KnittingWork_2,
	KnittingWork_3,
	KnittingWork_4,
	KnittingWork_5,
	Cat_Stand,
	Cat_Wait,
	KeyNum,
	One,
	Two,
	Three,

	/// Spinning Scone (KDW)
	SpinningMainScreen,
	SpinningCenterObject,
	SpinningWheel,
	SpinningGuideLine,
	SpinningGaugeBar,
	SpinningGaugeBarRange,
	SpinningGaugeBall,
	SpinningOrderMemo,
	SpinningOrderMemoCustomer1,
	SpinningOrderMemoCustomer2,
	SpinningOrderMemoCustomer3,
	SpinningOrderMemoCustomer4,
	SpinningOrderMemoCustomer5,
	SpinningBallAnim1,
	SpinningBallAnim2,
	SpinningBallAnim3,
	SpinningBall,

	///Scene_Average (KHJ)
	AverageMainScreen,
	EMPTYBOX1,
	EMPTYBOX2,
	AVERAGEBOX,
	AVERAGEBOX_NOCOUNT,
	STATBOX,
	STATBOX2,
	TOSPINNING,
	SKILL_NOTE,

	// 울종류
	SPIDERWEB,
	LAMBSWOOL,
	COTTON,
	HEMP,
	ANGORA,
	CASHMERE,

	//스탯박스 출력용 빈 박스
	SPIDERWEB_EMPTY,
	LAMBSWOOL_EMPTY,
	COTTON_EMPTY,
	HEMP_EMPTY,
	ANGORA_EMPTY,
	CASHMERE_EMPTY,

	///리건호
	MAIN_EXIT,
	TESTOBJECT,
	CAT_HIT,
	CAT_OUT,
	INVENTORY,
	BACK_RED,
	BACK_BLUE,
	BACK_GREEN,
	BACK_YELLOW,
	BACK_BLACK,
	CAT_WALKK,


	FOR_TEST,		///하고 꼭 지워 꼭 지워

	//상점 관련
	SHOP,
	SHOP_ICON,
	SHOP_BACKGROUND_INTERFACE,
	SHOP_BACK_BOX,
	SHOP_ITEM_ICON,
	SHOP_UNLOCK,
	SHOP_CLOSE,
	SHOP_CHAIN,

	SHOP_LAMBSWOOL_INFO,
	SHOP_HEMP_INFO,
	SHOP_ANGORA_INFO,
	SHOP_CASHMERE_INFO,

	//메뉴 관련
	MENU,
	MENU_ICON,
	MENU_RETURN_TO_START,
	MENU_GAMERULES,
	MENU_BACKGROUND_INTERFACE,
	MENU_CLOSE,

	CREDIT,
	COLOSSUS,
	CAT_CUT1,
	CAT_CUT2,
	KATANA,
	RESULT_PRODUCT,
	ITEM_BOX,
	PAGING_BUTTON,

	EMPTYEMPTY,

	/// 미니게임 관련
	SucessAnim,
	FailAnim,
	Sucess,
	Fail,

	/// Talk
	// Stage1
	FIRSTSTAGE1,
	FIRSTSTAGE2,
	FIRSTSTAGE3,
	FIRSTSTAGE4,
	FIRSTSTAGE5,
	FIRSTSTAGE6,
	FIRSTSTAGE7,
	FIRSTSTAGE8,
	FIRSTSTAGE9,
	FIRSTSTAGE10,
	FIRSTSTAGE11,
	FIRSTSTAGE12,
	FIRSTSTAGE13,
	FIRSTSTAGE14,
	FIRSTSTAGE15,

	// stage2
	SECONDSTAGE1,
	SECONDSTAGE2,
	SECONDSTAGE3,
	SECONDSTAGE4,
	SECONDSTAGE5,
	SECONDSTAGE6,
	SECONDSTAGE7,
	SECONDSTAGE8,
	SECONDSTAGE9,
	SECONDSTAGE10,
	SECONDSTAGE11,
	SECONDSTAGE12,
	SECONDSTAGE13,
	SECONDSTAGE14,

	// stage3
	THIRDSTAGE1,
	THIRDSTAGE2,
	THIRDSTAGE3,
	THIRDSTAGE4,
	THIRDSTAGE5,
	THIRDSTAGE6,
	THIRDSTAGE7,
	THIRDSTAGE8,
	THIRDSTAGE9,
	THIRDSTAGE10,
	THIRDSTAGE11,
	THIRDSTAGE12,
	THIRDSTAGE13,
	THIRDSTAGE14,
	THIRDSTAGE15,
	THIRDSTAGE16,

	// stage4
	FOURTHSTAGE1,
	FOURTHSTAGE2,
	FOURTHSTAGE3,
	FOURTHSTAGE4,
	FOURTHSTAGE5,
	FOURTHSTAGE6,
	FOURTHSTAGE7,
	FOURTHSTAGE8,
	FOURTHSTAGE9,
	FOURTHSTAGE10,
	FOURTHSTAGE11,
	FOURTHSTAGE12,
	FOURTHSTAGE13,
	FOURTHSTAGE14,
	FOURTHSTAGE15,
	FOURTHSTAGE16,
	FOURTHSTAGE17,
	FOURTHSTAGE18,
	FOURTHSTAGE19,

	// stage5
	FIFTHSTAGE1,
	FIFTHSTAGE2,
	FIFTHSTAGE3,
	FIFTHSTAGE4,
	FIFTHSTAGE5,
	FIFTHSTAGE6,
	FIFTHSTAGE7,
	FIFTHSTAGE8,
	FIFTHSTAGE9,
	FIFTHSTAGE10,
	FIFTHSTAGE11,
	FIFTHSTAGE12,
	FIFTHSTAGE13,
	FIFTHSTAGE14,
	FIFTHSTAGE15,
	FIFTHSTAGE16,
	FIFTHSTAGE17,
	FIFTHSTAGE18,
	FIFTHSTAGE19,

	TALKINGBACKGROUND,
	// 스테이지별 의뢰인들
	// stage1
	FIRSTCHARACTER1,
	FIRSTCHARACTER2,
	// stage2
	SECONDCHARACTER1,
	SECONDCHARACTER2,
	// stage3
	THIRDCHARACTER1,
	THIRDCHARACTER2,
	// stage4
	FOURTHCHARACTER1,
	FOURTHCHARACTER2,
	// stage5
	FIFTHCHARACTER1,
	FIFTHCHARACTER2,


	/// intro
	INTROCUTSCENE1,
	INTROCUTSCENE2,
	INTROCUTSCENE3,
	INTROCUTSCENE4,

	/// intro script
	INTROSCRIPT1,
	INTROSCRIPT2,
	INTROSCRIPT3,
	INTROSCRIPT4,
	INTROSCRIPT5,
	INTROSCRIPT6,
	INTROSCRIPT7,

	/// Chapters Sprite
	Chapter1Title1,
	Chapter1Title2,
	Chapter1Title3,
	Chapter1Title4,

	Chapter2Title1,
	Chapter2Title2,
	Chapter2Title3,
	Chapter2Title4,

	Chapter3Title1,
	Chapter3Title2,
	Chapter3Title3,
	Chapter3Title4,

	Chapter4Title1,
	Chapter4Title2,
	Chapter4Title3,
	Chapter4Title4,

	Chapter5Title1,
	Chapter5Title2,
	Chapter5Title3,
	Chapter5Title4,


	/// Ending Scene
	EndingScene1,
	EndingScene2,
	EndingScene3,
	EndingScene4,
	EndingScene5,
	EndingScene6,
	EndingScene7,

	/// EndingCredit
	EndingSprite1,
	EndingSprite2,
	EndingSprite3,
	EndingSprite4,

	THANKYOU,
	END,

	/// Tutorial
	Tutor_1,
	Tutor_2,
	Tutor_3,
	Tutor_4,
	Tutor_5,
	Tutor_6,
	Tutor_7_1,
	Tutor_7_2,
	Tutor_8,
	Tutor_9
};
