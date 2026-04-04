#include <sun/nio/cs/ext/IBM1129$Holder.h>
#include <sun/nio/cs/SingleByte.h>
#include <sun/nio/cs/ext/IBM1129.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SingleByte = ::sun::nio::cs::SingleByte;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$String* IBM1129$Holder::b2cTable = nullptr;
$chars* IBM1129$Holder::b2c = nullptr;
$chars* IBM1129$Holder::c2b = nullptr;
$chars* IBM1129$Holder::c2bIndex = nullptr;

void IBM1129$Holder::init$() {
}

void IBM1129$Holder::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(IBM1129$Holder::b2cTable, $cstr({0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8a, 0x8b, 0x8c, 0x8d, 0x8e, 0x8f, 0x90, 0x91, 0x92, 0x93, 0x94, 0x95, 0x96, 0x97, 0x98, 0x99, 0x9a, 0x9b, 0x9c, 0x9d, 0x9e, 0x9f, 0xa0, 0xa1, 0xa2, 0xa3, 0xa4, 0xa5, 0xa6, 0xa7, 0x0153, 0xa9, 0xaa, 0xab, 0xac, 0xad, 0xae, 0xaf, 0xb0, 0xb1, 0xb2, 0xb3, 0x0178, 0xb5, 0xb6, 0xb7, 0x0152, 0xb9, 0xba, 0xbb, 0xbc, 0xbd, 0xbe, 0xbf, 0xc0, 0xc1, 0xc2, 0x0102, 0xc4, 0xc5, 0xc6, 0xc7, 0xc8, 0xc9, 0xca, 0xcb, 0x0300, 0xcd, 0xce, 0xcf, 0x0110, 0xd1, 0x0309, 0xd3, 0xd4, 0x01a0, 0xd6, 0xd7, 0xd8, 0xd9, 0xda, 0xdb, 0xdc, 0x01af, 0x0303, 0xdf, 0xe0, 0xe1, 0xe2, 0x0103, 0xe4, 0xe5, 0xe6, 0xe7, 0xe8, 0xe9, 0xea, 0xeb, 0x0301, 0xed, 0xee, 0xef, 0x0111, 0xf1, 0x0323, 0xf3, 0xf4, 0x01a1, 0xf6, 0xf7, 0xf8, 0xf9, 0xfa, 0xfb, 0xfc, 0x01b0, 0x20ab, 0xff, '\0', 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, '\b', '\t', '\n', 0x0b, '\f', '\r', 0x0e, 0x0f, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f, ' ', '!', '\"', '#', '$', '%', '&', '\'', '(', ')', '*', '+', ',', '-', '.', '/', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', ':', ';', '<', '=', '>', '?', '@', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '[', '\\', ']', '^', '_', '`', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '{', '|', '}', '~', 0x7f}));
	$assignStatic(IBM1129$Holder::b2c, IBM1129$Holder::b2cTable->toCharArray());
	$assignStatic(IBM1129$Holder::c2b, $new($chars, 1280));
	$assignStatic(IBM1129$Holder::c2bIndex, $new($chars, 256));
	{
		$var($chars, b2cMap, IBM1129$Holder::b2c);
		$var($chars, c2bNR, nullptr);
		$assign(c2bNR, $new($chars, 188));
		c2bNR->set(0, 33);
		c2bNR->set(1, 0x0000ff01);
		c2bNR->set(2, 34);
		c2bNR->set(3, 0x0000ff02);
		c2bNR->set(4, 35);
		c2bNR->set(5, 0x0000ff03);
		c2bNR->set(6, 36);
		c2bNR->set(7, 0x0000ff04);
		c2bNR->set(8, 37);
		c2bNR->set(9, 0x0000ff05);
		c2bNR->set(10, 38);
		c2bNR->set(11, 0x0000ff06);
		c2bNR->set(12, 39);
		c2bNR->set(13, 0x0000ff07);
		c2bNR->set(14, 40);
		c2bNR->set(15, 0x0000ff08);
		c2bNR->set(16, 41);
		c2bNR->set(17, 0x0000ff09);
		c2bNR->set(18, 42);
		c2bNR->set(19, 0x0000ff0a);
		c2bNR->set(20, 43);
		c2bNR->set(21, 0x0000ff0b);
		c2bNR->set(22, 44);
		c2bNR->set(23, 0x0000ff0c);
		c2bNR->set(24, 45);
		c2bNR->set(25, 0x0000ff0d);
		c2bNR->set(26, 46);
		c2bNR->set(27, 0x0000ff0e);
		c2bNR->set(28, 47);
		c2bNR->set(29, 0x0000ff0f);
		c2bNR->set(30, 48);
		c2bNR->set(31, 0x0000ff10);
		c2bNR->set(32, 49);
		c2bNR->set(33, 0x0000ff11);
		c2bNR->set(34, 50);
		c2bNR->set(35, 0x0000ff12);
		c2bNR->set(36, 51);
		c2bNR->set(37, 0x0000ff13);
		c2bNR->set(38, 52);
		c2bNR->set(39, 0x0000ff14);
		c2bNR->set(40, 53);
		c2bNR->set(41, 0x0000ff15);
		c2bNR->set(42, 54);
		c2bNR->set(43, 0x0000ff16);
		c2bNR->set(44, 55);
		c2bNR->set(45, 0x0000ff17);
		c2bNR->set(46, 56);
		c2bNR->set(47, 0x0000ff18);
		c2bNR->set(48, 57);
		c2bNR->set(49, 0x0000ff19);
		c2bNR->set(50, 58);
		c2bNR->set(51, 0x0000ff1a);
		c2bNR->set(52, 59);
		c2bNR->set(53, 0x0000ff1b);
		c2bNR->set(54, 60);
		c2bNR->set(55, 0x0000ff1c);
		c2bNR->set(56, 61);
		c2bNR->set(57, 0x0000ff1d);
		c2bNR->set(58, 62);
		c2bNR->set(59, 0x0000ff1e);
		c2bNR->set(60, 63);
		c2bNR->set(61, 0x0000ff1f);
		c2bNR->set(62, 64);
		c2bNR->set(63, 0x0000ff20);
		c2bNR->set(64, 65);
		c2bNR->set(65, 0x0000ff21);
		c2bNR->set(66, 66);
		c2bNR->set(67, 0x0000ff22);
		c2bNR->set(68, 67);
		c2bNR->set(69, 0x0000ff23);
		c2bNR->set(70, 68);
		c2bNR->set(71, 0x0000ff24);
		c2bNR->set(72, 69);
		c2bNR->set(73, 0x0000ff25);
		c2bNR->set(74, 70);
		c2bNR->set(75, 0x0000ff26);
		c2bNR->set(76, 71);
		c2bNR->set(77, 0x0000ff27);
		c2bNR->set(78, 72);
		c2bNR->set(79, 0x0000ff28);
		c2bNR->set(80, 73);
		c2bNR->set(81, 0x0000ff29);
		c2bNR->set(82, 74);
		c2bNR->set(83, 0x0000ff2a);
		c2bNR->set(84, 75);
		c2bNR->set(85, 0x0000ff2b);
		c2bNR->set(86, 76);
		c2bNR->set(87, 0x0000ff2c);
		c2bNR->set(88, 77);
		c2bNR->set(89, 0x0000ff2d);
		c2bNR->set(90, 78);
		c2bNR->set(91, 0x0000ff2e);
		c2bNR->set(92, 79);
		c2bNR->set(93, 0x0000ff2f);
		c2bNR->set(94, 80);
		c2bNR->set(95, 0x0000ff30);
		c2bNR->set(96, 81);
		c2bNR->set(97, 0x0000ff31);
		c2bNR->set(98, 82);
		c2bNR->set(99, 0x0000ff32);
		c2bNR->set(100, 83);
		c2bNR->set(101, 0x0000ff33);
		c2bNR->set(102, 84);
		c2bNR->set(103, 0x0000ff34);
		c2bNR->set(104, 85);
		c2bNR->set(105, 0x0000ff35);
		c2bNR->set(106, 86);
		c2bNR->set(107, 0x0000ff36);
		c2bNR->set(108, 87);
		c2bNR->set(109, 0x0000ff37);
		c2bNR->set(110, 88);
		c2bNR->set(111, 0x0000ff38);
		c2bNR->set(112, 89);
		c2bNR->set(113, 0x0000ff39);
		c2bNR->set(114, 90);
		c2bNR->set(115, 0x0000ff3a);
		c2bNR->set(116, 91);
		c2bNR->set(117, 0x0000ff3b);
		c2bNR->set(118, 92);
		c2bNR->set(119, 0x0000ff3c);
		c2bNR->set(120, 93);
		c2bNR->set(121, 0x0000ff3d);
		c2bNR->set(122, 94);
		c2bNR->set(123, 0x0000ff3e);
		c2bNR->set(124, 95);
		c2bNR->set(125, 0x0000ff3f);
		c2bNR->set(126, 96);
		c2bNR->set(127, 0x0000ff40);
		c2bNR->set(128, 97);
		c2bNR->set(129, 0x0000ff41);
		c2bNR->set(130, 98);
		c2bNR->set(131, 0x0000ff42);
		c2bNR->set(132, 99);
		c2bNR->set(133, 0x0000ff43);
		c2bNR->set(134, 100);
		c2bNR->set(135, 0x0000ff44);
		c2bNR->set(136, 101);
		c2bNR->set(137, 0x0000ff45);
		c2bNR->set(138, 102);
		c2bNR->set(139, 0x0000ff46);
		c2bNR->set(140, 103);
		c2bNR->set(141, 0x0000ff47);
		c2bNR->set(142, 104);
		c2bNR->set(143, 0x0000ff48);
		c2bNR->set(144, 105);
		c2bNR->set(145, 0x0000ff49);
		c2bNR->set(146, 106);
		c2bNR->set(147, 0x0000ff4a);
		c2bNR->set(148, 107);
		c2bNR->set(149, 0x0000ff4b);
		c2bNR->set(150, 108);
		c2bNR->set(151, 0x0000ff4c);
		c2bNR->set(152, 109);
		c2bNR->set(153, 0x0000ff4d);
		c2bNR->set(154, 110);
		c2bNR->set(155, 0x0000ff4e);
		c2bNR->set(156, 111);
		c2bNR->set(157, 0x0000ff4f);
		c2bNR->set(158, 112);
		c2bNR->set(159, 0x0000ff50);
		c2bNR->set(160, 113);
		c2bNR->set(161, 0x0000ff51);
		c2bNR->set(162, 114);
		c2bNR->set(163, 0x0000ff52);
		c2bNR->set(164, 115);
		c2bNR->set(165, 0x0000ff53);
		c2bNR->set(166, 116);
		c2bNR->set(167, 0x0000ff54);
		c2bNR->set(168, 117);
		c2bNR->set(169, 0x0000ff55);
		c2bNR->set(170, 118);
		c2bNR->set(171, 0x0000ff56);
		c2bNR->set(172, 119);
		c2bNR->set(173, 0x0000ff57);
		c2bNR->set(174, 120);
		c2bNR->set(175, 0x0000ff58);
		c2bNR->set(176, 121);
		c2bNR->set(177, 0x0000ff59);
		c2bNR->set(178, 122);
		c2bNR->set(179, 0x0000ff5a);
		c2bNR->set(180, 123);
		c2bNR->set(181, 0x0000ff5b);
		c2bNR->set(182, 124);
		c2bNR->set(183, 0x0000ff5c);
		c2bNR->set(184, 125);
		c2bNR->set(185, 0x0000ff5d);
		c2bNR->set(186, 126);
		c2bNR->set(187, 0x0000ff5e);
		$SingleByte::initC2B(b2cMap, c2bNR, IBM1129$Holder::c2b, IBM1129$Holder::c2bIndex);
	}
}

IBM1129$Holder::IBM1129$Holder() {
}

$Class* IBM1129$Holder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"b2cTable", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM1129$Holder, b2cTable)},
		{"b2c", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM1129$Holder, b2c)},
		{"c2b", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM1129$Holder, c2b)},
		{"c2bIndex", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM1129$Holder, c2bIndex)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(IBM1129$Holder, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.cs.ext.IBM1129$Holder", "sun.nio.cs.ext.IBM1129", "Holder", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.cs.ext.IBM1129$Holder",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.nio.cs.ext.IBM1129"
	};
	$loadClass(IBM1129$Holder, name, initialize, &classInfo$$, IBM1129$Holder::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(IBM1129$Holder);
	});
	return class$;
}

$Class* IBM1129$Holder::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun