#include <sun/nio/cs/ext/IBM1129$Holder.h>

#include <sun/nio/cs/SingleByte.h>
#include <sun/nio/cs/ext/IBM1129.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SingleByte = ::sun::nio::cs::SingleByte;
using $IBM1129 = ::sun::nio::cs::ext::IBM1129;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$FieldInfo _IBM1129$Holder_FieldInfo_[] = {
	{"b2cTable", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM1129$Holder, b2cTable)},
	{"b2c", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM1129$Holder, b2c)},
	{"c2b", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM1129$Holder, c2b)},
	{"c2bIndex", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM1129$Holder, c2bIndex)},
	{}
};

$MethodInfo _IBM1129$Holder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(IBM1129$Holder::*)()>(&IBM1129$Holder::init$))},
	{}
};

$InnerClassInfo _IBM1129$Holder_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.IBM1129$Holder", "sun.nio.cs.ext.IBM1129", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _IBM1129$Holder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.cs.ext.IBM1129$Holder",
	"java.lang.Object",
	nullptr,
	_IBM1129$Holder_FieldInfo_,
	_IBM1129$Holder_MethodInfo_,
	nullptr,
	nullptr,
	_IBM1129$Holder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.IBM1129"
};

$Object* allocate$IBM1129$Holder($Class* clazz) {
	return $of($alloc(IBM1129$Holder));
}

$String* IBM1129$Holder::b2cTable = nullptr;
$chars* IBM1129$Holder::b2c = nullptr;
$chars* IBM1129$Holder::c2b = nullptr;
$chars* IBM1129$Holder::c2bIndex = nullptr;

void IBM1129$Holder::init$() {
}

void clinit$IBM1129$Holder($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(IBM1129$Holder::b2cTable, $cstr({0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8A, 0x8B, 0x8C, 0x8D, 0x8E, 0x8F, 0x90, 0x91, 0x92, 0x93, 0x94, 0x95, 0x96, 0x97, 0x98, 0x99, 0x9A, 0x9B, 0x9C, 0x9D, 0x9E, 0x9F, 0xA0, 0xA1, 0xA2, 0xA3, 0xA4, 0xA5, 0xA6, 0xA7, 0x153, 0xA9, 0xAA, 0xAB, 0xAC, 0xAD, 0xAE, 0xAF, 0xB0, 0xB1, 0xB2, 0xB3, 0x178, 0xB5, 0xB6, 0xB7, 0x152, 0xB9, 0xBA, 0xBB, 0xBC, 0xBD, 0xBE, 0xBF, 0xC0, 0xC1, 0xC2, 0x102, 0xC4, 0xC5, 0xC6, 0xC7, 0xC8, 0xC9, 0xCA, 0xCB, 0x300, 0xCD, 0xCE, 0xCF, 0x110, 0xD1, 0x309, 0xD3, 0xD4, 0x1A0, 0xD6, 0xD7, 0xD8, 0xD9, 0xDA, 0xDB, 0xDC, 0x1AF, 0x303, 0xDF, 0xE0, 0xE1, 0xE2, 0x103, 0xE4, 0xE5, 0xE6, 0xE7, 0xE8, 0xE9, 0xEA, 0xEB, 0x301, 0xED, 0xEE, 0xEF, 0x111, 0xF1, 0x323, 0xF3, 0xF4, 0x1A1, 0xF6, 0xF7, 0xF8, 0xF9, 0xFA, 0xFB, 0xFC, 0x1B0, 0x20AB, 0xFF, '\0', 0x1, 0x2, 0x3, 0x4, 0x5, 0x6, 0x7, '\b', '\t', '\n', 0xB, '\f', '\r', 0xE, 0xF, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1A, 0x1B, 0x1C, 0x1D, 0x1E, 0x1F, ' ', '!', '\"', '#', '$', '%', '&', '\'', '(', ')', '*', '+', ',', '-', '.', '/', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', ':', ';', '<', '=', '>', '?', '@', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '[', '\\', ']', '^', '_', '`', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '{', '|', '}', '~', 0x7F}));
	$assignStatic(IBM1129$Holder::b2c, $nc(IBM1129$Holder::b2cTable)->toCharArray());
	$assignStatic(IBM1129$Holder::c2b, $new($chars, 1280));
	$assignStatic(IBM1129$Holder::c2bIndex, $new($chars, 256));
	{
		$var($chars, b2cMap, IBM1129$Holder::b2c);
		$var($chars, c2bNR, nullptr);
		$assign(c2bNR, $new($chars, 188));
		c2bNR->set(0, (char16_t)33);
		c2bNR->set(1, (char16_t)0x0000FF01);
		c2bNR->set(2, (char16_t)34);
		c2bNR->set(3, (char16_t)0x0000FF02);
		c2bNR->set(4, (char16_t)35);
		c2bNR->set(5, (char16_t)0x0000FF03);
		c2bNR->set(6, (char16_t)36);
		c2bNR->set(7, (char16_t)0x0000FF04);
		c2bNR->set(8, (char16_t)37);
		c2bNR->set(9, (char16_t)0x0000FF05);
		c2bNR->set(10, (char16_t)38);
		c2bNR->set(11, (char16_t)0x0000FF06);
		c2bNR->set(12, (char16_t)39);
		c2bNR->set(13, (char16_t)0x0000FF07);
		c2bNR->set(14, (char16_t)40);
		c2bNR->set(15, (char16_t)0x0000FF08);
		c2bNR->set(16, (char16_t)41);
		c2bNR->set(17, (char16_t)0x0000FF09);
		c2bNR->set(18, (char16_t)42);
		c2bNR->set(19, (char16_t)0x0000FF0A);
		c2bNR->set(20, (char16_t)43);
		c2bNR->set(21, (char16_t)0x0000FF0B);
		c2bNR->set(22, (char16_t)44);
		c2bNR->set(23, (char16_t)0x0000FF0C);
		c2bNR->set(24, (char16_t)45);
		c2bNR->set(25, (char16_t)0x0000FF0D);
		c2bNR->set(26, (char16_t)46);
		c2bNR->set(27, (char16_t)0x0000FF0E);
		c2bNR->set(28, (char16_t)47);
		c2bNR->set(29, (char16_t)0x0000FF0F);
		c2bNR->set(30, (char16_t)48);
		c2bNR->set(31, (char16_t)0x0000FF10);
		c2bNR->set(32, (char16_t)49);
		c2bNR->set(33, (char16_t)0x0000FF11);
		c2bNR->set(34, (char16_t)50);
		c2bNR->set(35, (char16_t)0x0000FF12);
		c2bNR->set(36, (char16_t)51);
		c2bNR->set(37, (char16_t)0x0000FF13);
		c2bNR->set(38, (char16_t)52);
		c2bNR->set(39, (char16_t)0x0000FF14);
		c2bNR->set(40, (char16_t)53);
		c2bNR->set(41, (char16_t)0x0000FF15);
		c2bNR->set(42, (char16_t)54);
		c2bNR->set(43, (char16_t)0x0000FF16);
		c2bNR->set(44, (char16_t)55);
		c2bNR->set(45, (char16_t)0x0000FF17);
		c2bNR->set(46, (char16_t)56);
		c2bNR->set(47, (char16_t)0x0000FF18);
		c2bNR->set(48, (char16_t)57);
		c2bNR->set(49, (char16_t)0x0000FF19);
		c2bNR->set(50, (char16_t)58);
		c2bNR->set(51, (char16_t)0x0000FF1A);
		c2bNR->set(52, (char16_t)59);
		c2bNR->set(53, (char16_t)0x0000FF1B);
		c2bNR->set(54, (char16_t)60);
		c2bNR->set(55, (char16_t)0x0000FF1C);
		c2bNR->set(56, (char16_t)61);
		c2bNR->set(57, (char16_t)0x0000FF1D);
		c2bNR->set(58, (char16_t)62);
		c2bNR->set(59, (char16_t)0x0000FF1E);
		c2bNR->set(60, (char16_t)63);
		c2bNR->set(61, (char16_t)0x0000FF1F);
		c2bNR->set(62, (char16_t)64);
		c2bNR->set(63, (char16_t)0x0000FF20);
		c2bNR->set(64, (char16_t)65);
		c2bNR->set(65, (char16_t)0x0000FF21);
		c2bNR->set(66, (char16_t)66);
		c2bNR->set(67, (char16_t)0x0000FF22);
		c2bNR->set(68, (char16_t)67);
		c2bNR->set(69, (char16_t)0x0000FF23);
		c2bNR->set(70, (char16_t)68);
		c2bNR->set(71, (char16_t)0x0000FF24);
		c2bNR->set(72, (char16_t)69);
		c2bNR->set(73, (char16_t)0x0000FF25);
		c2bNR->set(74, (char16_t)70);
		c2bNR->set(75, (char16_t)0x0000FF26);
		c2bNR->set(76, (char16_t)71);
		c2bNR->set(77, (char16_t)0x0000FF27);
		c2bNR->set(78, (char16_t)72);
		c2bNR->set(79, (char16_t)0x0000FF28);
		c2bNR->set(80, (char16_t)73);
		c2bNR->set(81, (char16_t)0x0000FF29);
		c2bNR->set(82, (char16_t)74);
		c2bNR->set(83, (char16_t)0x0000FF2A);
		c2bNR->set(84, (char16_t)75);
		c2bNR->set(85, (char16_t)0x0000FF2B);
		c2bNR->set(86, (char16_t)76);
		c2bNR->set(87, (char16_t)0x0000FF2C);
		c2bNR->set(88, (char16_t)77);
		c2bNR->set(89, (char16_t)0x0000FF2D);
		c2bNR->set(90, (char16_t)78);
		c2bNR->set(91, (char16_t)0x0000FF2E);
		c2bNR->set(92, (char16_t)79);
		c2bNR->set(93, (char16_t)0x0000FF2F);
		c2bNR->set(94, (char16_t)80);
		c2bNR->set(95, (char16_t)0x0000FF30);
		c2bNR->set(96, (char16_t)81);
		c2bNR->set(97, (char16_t)0x0000FF31);
		c2bNR->set(98, (char16_t)82);
		c2bNR->set(99, (char16_t)0x0000FF32);
		c2bNR->set(100, (char16_t)83);
		c2bNR->set(101, (char16_t)0x0000FF33);
		c2bNR->set(102, (char16_t)84);
		c2bNR->set(103, (char16_t)0x0000FF34);
		c2bNR->set(104, (char16_t)85);
		c2bNR->set(105, (char16_t)0x0000FF35);
		c2bNR->set(106, (char16_t)86);
		c2bNR->set(107, (char16_t)0x0000FF36);
		c2bNR->set(108, (char16_t)87);
		c2bNR->set(109, (char16_t)0x0000FF37);
		c2bNR->set(110, (char16_t)88);
		c2bNR->set(111, (char16_t)0x0000FF38);
		c2bNR->set(112, (char16_t)89);
		c2bNR->set(113, (char16_t)0x0000FF39);
		c2bNR->set(114, (char16_t)90);
		c2bNR->set(115, (char16_t)0x0000FF3A);
		c2bNR->set(116, (char16_t)91);
		c2bNR->set(117, (char16_t)0x0000FF3B);
		c2bNR->set(118, (char16_t)92);
		c2bNR->set(119, (char16_t)0x0000FF3C);
		c2bNR->set(120, (char16_t)93);
		c2bNR->set(121, (char16_t)0x0000FF3D);
		c2bNR->set(122, (char16_t)94);
		c2bNR->set(123, (char16_t)0x0000FF3E);
		c2bNR->set(124, (char16_t)95);
		c2bNR->set(125, (char16_t)0x0000FF3F);
		c2bNR->set(126, (char16_t)96);
		c2bNR->set(127, (char16_t)0x0000FF40);
		c2bNR->set(128, (char16_t)97);
		c2bNR->set(129, (char16_t)0x0000FF41);
		c2bNR->set(130, (char16_t)98);
		c2bNR->set(131, (char16_t)0x0000FF42);
		c2bNR->set(132, (char16_t)99);
		c2bNR->set(133, (char16_t)0x0000FF43);
		c2bNR->set(134, (char16_t)100);
		c2bNR->set(135, (char16_t)0x0000FF44);
		c2bNR->set(136, (char16_t)101);
		c2bNR->set(137, (char16_t)0x0000FF45);
		c2bNR->set(138, (char16_t)102);
		c2bNR->set(139, (char16_t)0x0000FF46);
		c2bNR->set(140, (char16_t)103);
		c2bNR->set(141, (char16_t)0x0000FF47);
		c2bNR->set(142, (char16_t)104);
		c2bNR->set(143, (char16_t)0x0000FF48);
		c2bNR->set(144, (char16_t)105);
		c2bNR->set(145, (char16_t)0x0000FF49);
		c2bNR->set(146, (char16_t)106);
		c2bNR->set(147, (char16_t)0x0000FF4A);
		c2bNR->set(148, (char16_t)107);
		c2bNR->set(149, (char16_t)0x0000FF4B);
		c2bNR->set(150, (char16_t)108);
		c2bNR->set(151, (char16_t)0x0000FF4C);
		c2bNR->set(152, (char16_t)109);
		c2bNR->set(153, (char16_t)0x0000FF4D);
		c2bNR->set(154, (char16_t)110);
		c2bNR->set(155, (char16_t)0x0000FF4E);
		c2bNR->set(156, (char16_t)111);
		c2bNR->set(157, (char16_t)0x0000FF4F);
		c2bNR->set(158, (char16_t)112);
		c2bNR->set(159, (char16_t)0x0000FF50);
		c2bNR->set(160, (char16_t)113);
		c2bNR->set(161, (char16_t)0x0000FF51);
		c2bNR->set(162, (char16_t)114);
		c2bNR->set(163, (char16_t)0x0000FF52);
		c2bNR->set(164, (char16_t)115);
		c2bNR->set(165, (char16_t)0x0000FF53);
		c2bNR->set(166, (char16_t)116);
		c2bNR->set(167, (char16_t)0x0000FF54);
		c2bNR->set(168, (char16_t)117);
		c2bNR->set(169, (char16_t)0x0000FF55);
		c2bNR->set(170, (char16_t)118);
		c2bNR->set(171, (char16_t)0x0000FF56);
		c2bNR->set(172, (char16_t)119);
		c2bNR->set(173, (char16_t)0x0000FF57);
		c2bNR->set(174, (char16_t)120);
		c2bNR->set(175, (char16_t)0x0000FF58);
		c2bNR->set(176, (char16_t)121);
		c2bNR->set(177, (char16_t)0x0000FF59);
		c2bNR->set(178, (char16_t)122);
		c2bNR->set(179, (char16_t)0x0000FF5A);
		c2bNR->set(180, (char16_t)123);
		c2bNR->set(181, (char16_t)0x0000FF5B);
		c2bNR->set(182, (char16_t)124);
		c2bNR->set(183, (char16_t)0x0000FF5C);
		c2bNR->set(184, (char16_t)125);
		c2bNR->set(185, (char16_t)0x0000FF5D);
		c2bNR->set(186, (char16_t)126);
		c2bNR->set(187, (char16_t)0x0000FF5E);
		$SingleByte::initC2B(b2cMap, c2bNR, IBM1129$Holder::c2b, IBM1129$Holder::c2bIndex);
	}
}

IBM1129$Holder::IBM1129$Holder() {
}

$Class* IBM1129$Holder::load$($String* name, bool initialize) {
	$loadClass(IBM1129$Holder, name, initialize, &_IBM1129$Holder_ClassInfo_, clinit$IBM1129$Holder, allocate$IBM1129$Holder);
	return class$;
}

$Class* IBM1129$Holder::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun