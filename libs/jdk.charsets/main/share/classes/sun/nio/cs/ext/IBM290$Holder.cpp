#include <sun/nio/cs/ext/IBM290$Holder.h>
#include <sun/nio/cs/SingleByte.h>
#include <sun/nio/cs/ext/IBM290.h>
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

$String* IBM290$Holder::b2cTable = nullptr;
$chars* IBM290$Holder::b2c = nullptr;
$chars* IBM290$Holder::c2b = nullptr;
$chars* IBM290$Holder::c2bIndex = nullptr;

void IBM290$Holder::init$() {
}

void IBM290$Holder::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(IBM290$Holder::b2cTable, $cstr({']', 0xff71, 0xff72, 0xff73, 0xff74, 0xff75, 0xff76, 0xff77, 0xff78, 0xff79, 0xff7a, 'q', 0xff7b, 0xff7c, 0xff7d, 0xff7e, 0xff7f, 0xff80, 0xff81, 0xff82, 0xff83, 0xff84, 0xff85, 0xff86, 0xff87, 0xff88, 0xff89, 'r', 0xfffd, 0xff8a, 0xff8b, 0xff8c, '~', 0x203e, 0xff8d, 0xff8e, 0xff8f, 0xff90, 0xff91, 0xff92, 0xff93, 0xff94, 0xff95, 's', 0xff96, 0xff97, 0xff98, 0xff99, '^', 0xa2, '\\', 't', 'u', 'v', 'w', 'x', 'y', 'z', 0xff9a, 0xff9b, 0xff9c, 0xff9d, 0xff9e, 0xff9f, '{', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 0xfffd, 0xfffd, 0xfffd, 0xfffd, 0xfffd, 0xfffd, '}', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 0xfffd, 0xfffd, 0xfffd, 0xfffd, 0xfffd, 0xfffd, '$', 0xfffd, 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 0xfffd, 0xfffd, 0xfffd, 0xfffd, 0xfffd, 0xfffd, '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 0xfffd, 0xfffd, 0xfffd, 0xfffd, 0xfffd, 0x9f, '\0', 0x01, 0x02, 0x03, 0x9c, '\t', 0x86, 0x7f, 0x97, 0x8d, 0x8e, 0x0b, '\f', '\r', 0x0e, 0x0f, 0x10, 0x11, 0x12, 0x13, 0x9d, 0x85, '\b', 0x87, 0x18, 0x19, 0x92, 0x8f, 0x1c, 0x1d, 0x1e, 0x1f, 0x80, 0x81, 0x82, 0x83, 0x84, '\n', 0x17, 0x1b, 0x88, 0x89, 0x8a, 0x8b, 0x8c, 0x05, 0x06, 0x07, 0x90, 0x91, 0x16, 0x93, 0x94, 0x95, 0x96, 0x04, 0x98, 0x99, 0x9a, 0x9b, 0x14, 0x15, 0x9e, 0x1a, ' ', 0xff61, 0xff62, 0xff63, 0xff64, 0xff65, 0xff66, 0xff67, 0xff68, 0xff69, 0xa3, '.', '<', '(', '+', '|', '&', 0xff6a, 0xff6b, 0xff6c, 0xff6d, 0xff6e, 0xff6f, 0xfffd, 0xff70, 0xfffd, '!', 0xa5, '*', ')', ';', 0xac, '-', '/', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 0xfffd, ',', '%', '_', '>', '?', '[', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', '`', ':', '#', '@', '\'', '=', '\"'}));
	$assignStatic(IBM290$Holder::b2c, IBM290$Holder::b2cTable->toCharArray());
	$assignStatic(IBM290$Holder::c2b, $new($chars, 768));
	$assignStatic(IBM290$Holder::c2bIndex, $new($chars, 256));
	{
		$var($chars, b2cMap, IBM290$Holder::b2c);
		$var($chars, c2bNR, nullptr);
		$assign(c2bNR, $new($chars, 188));
		c2bNR->set(0, 75);
		c2bNR->set(1, 0x0000ff0e);
		c2bNR->set(2, 76);
		c2bNR->set(3, 0x0000ff1c);
		c2bNR->set(4, 77);
		c2bNR->set(5, 0x0000ff08);
		c2bNR->set(6, 78);
		c2bNR->set(7, 0x0000ff0b);
		c2bNR->set(8, 79);
		c2bNR->set(9, 0x0000ff5c);
		c2bNR->set(10, 80);
		c2bNR->set(11, 0x0000ff06);
		c2bNR->set(12, 90);
		c2bNR->set(13, 0x0000ff01);
		c2bNR->set(14, 92);
		c2bNR->set(15, 0x0000ff0a);
		c2bNR->set(16, 93);
		c2bNR->set(17, 0x0000ff09);
		c2bNR->set(18, 94);
		c2bNR->set(19, 0x0000ff1b);
		c2bNR->set(20, 96);
		c2bNR->set(21, 0x0000ff0d);
		c2bNR->set(22, 97);
		c2bNR->set(23, 0x0000ff0f);
		c2bNR->set(24, 98);
		c2bNR->set(25, 0x0000ff41);
		c2bNR->set(26, 99);
		c2bNR->set(27, 0x0000ff42);
		c2bNR->set(28, 100);
		c2bNR->set(29, 0x0000ff43);
		c2bNR->set(30, 101);
		c2bNR->set(31, 0x0000ff44);
		c2bNR->set(32, 102);
		c2bNR->set(33, 0x0000ff45);
		c2bNR->set(34, 103);
		c2bNR->set(35, 0x0000ff46);
		c2bNR->set(36, 104);
		c2bNR->set(37, 0x0000ff47);
		c2bNR->set(38, 105);
		c2bNR->set(39, 0x0000ff48);
		c2bNR->set(40, 107);
		c2bNR->set(41, 0x0000ff0c);
		c2bNR->set(42, 108);
		c2bNR->set(43, 0x0000ff05);
		c2bNR->set(44, 109);
		c2bNR->set(45, 0x0000ff3f);
		c2bNR->set(46, 110);
		c2bNR->set(47, 0x0000ff1e);
		c2bNR->set(48, 111);
		c2bNR->set(49, 0x0000ff1f);
		c2bNR->set(50, 112);
		c2bNR->set(51, 0x0000ff3b);
		c2bNR->set(52, 113);
		c2bNR->set(53, 0x0000ff49);
		c2bNR->set(54, 114);
		c2bNR->set(55, 0x0000ff4a);
		c2bNR->set(56, 115);
		c2bNR->set(57, 0x0000ff4b);
		c2bNR->set(58, 116);
		c2bNR->set(59, 0x0000ff4c);
		c2bNR->set(60, 117);
		c2bNR->set(61, 0x0000ff4d);
		c2bNR->set(62, 118);
		c2bNR->set(63, 0x0000ff4e);
		c2bNR->set(64, 119);
		c2bNR->set(65, 0x0000ff4f);
		c2bNR->set(66, 120);
		c2bNR->set(67, 0x0000ff50);
		c2bNR->set(68, 121);
		c2bNR->set(69, 0x0000ff40);
		c2bNR->set(70, 122);
		c2bNR->set(71, 0x0000ff1a);
		c2bNR->set(72, 123);
		c2bNR->set(73, 0x0000ff03);
		c2bNR->set(74, 124);
		c2bNR->set(75, 0x0000ff20);
		c2bNR->set(76, 125);
		c2bNR->set(77, 0x0000ff07);
		c2bNR->set(78, 126);
		c2bNR->set(79, 0x0000ff1d);
		c2bNR->set(80, 127);
		c2bNR->set(81, 0x0000ff02);
		c2bNR->set(82, 128);
		c2bNR->set(83, 0x0000ff3d);
		c2bNR->set(84, 139);
		c2bNR->set(85, 0x0000ff51);
		c2bNR->set(86, 155);
		c2bNR->set(87, 0x0000ff52);
		c2bNR->set(88, 160);
		c2bNR->set(89, 0x0000ff5e);
		c2bNR->set(90, 171);
		c2bNR->set(91, 0x0000ff53);
		c2bNR->set(92, 176);
		c2bNR->set(93, 0x0000ff3e);
		c2bNR->set(94, 178);
		c2bNR->set(95, 0x0000ff3c);
		c2bNR->set(96, 179);
		c2bNR->set(97, 0x0000ff54);
		c2bNR->set(98, 180);
		c2bNR->set(99, 0x0000ff55);
		c2bNR->set(100, 181);
		c2bNR->set(101, 0x0000ff56);
		c2bNR->set(102, 182);
		c2bNR->set(103, 0x0000ff57);
		c2bNR->set(104, 183);
		c2bNR->set(105, 0x0000ff58);
		c2bNR->set(106, 184);
		c2bNR->set(107, 0x0000ff59);
		c2bNR->set(108, 185);
		c2bNR->set(109, 0x0000ff5a);
		c2bNR->set(110, 192);
		c2bNR->set(111, 0x0000ff5b);
		c2bNR->set(112, 193);
		c2bNR->set(113, 0x0000ff21);
		c2bNR->set(114, 194);
		c2bNR->set(115, 0x0000ff22);
		c2bNR->set(116, 195);
		c2bNR->set(117, 0x0000ff23);
		c2bNR->set(118, 196);
		c2bNR->set(119, 0x0000ff24);
		c2bNR->set(120, 197);
		c2bNR->set(121, 0x0000ff25);
		c2bNR->set(122, 198);
		c2bNR->set(123, 0x0000ff26);
		c2bNR->set(124, 199);
		c2bNR->set(125, 0x0000ff27);
		c2bNR->set(126, 200);
		c2bNR->set(127, 0x0000ff28);
		c2bNR->set(128, 201);
		c2bNR->set(129, 0x0000ff29);
		c2bNR->set(130, 208);
		c2bNR->set(131, 0x0000ff5d);
		c2bNR->set(132, 209);
		c2bNR->set(133, 0x0000ff2a);
		c2bNR->set(134, 210);
		c2bNR->set(135, 0x0000ff2b);
		c2bNR->set(136, 211);
		c2bNR->set(137, 0x0000ff2c);
		c2bNR->set(138, 212);
		c2bNR->set(139, 0x0000ff2d);
		c2bNR->set(140, 213);
		c2bNR->set(141, 0x0000ff2e);
		c2bNR->set(142, 214);
		c2bNR->set(143, 0x0000ff2f);
		c2bNR->set(144, 215);
		c2bNR->set(145, 0x0000ff30);
		c2bNR->set(146, 216);
		c2bNR->set(147, 0x0000ff31);
		c2bNR->set(148, 217);
		c2bNR->set(149, 0x0000ff32);
		c2bNR->set(150, 224);
		c2bNR->set(151, 0x0000ff04);
		c2bNR->set(152, 226);
		c2bNR->set(153, 0x0000ff33);
		c2bNR->set(154, 227);
		c2bNR->set(155, 0x0000ff34);
		c2bNR->set(156, 228);
		c2bNR->set(157, 0x0000ff35);
		c2bNR->set(158, 229);
		c2bNR->set(159, 0x0000ff36);
		c2bNR->set(160, 230);
		c2bNR->set(161, 0x0000ff37);
		c2bNR->set(162, 231);
		c2bNR->set(163, 0x0000ff38);
		c2bNR->set(164, 232);
		c2bNR->set(165, 0x0000ff39);
		c2bNR->set(166, 233);
		c2bNR->set(167, 0x0000ff3a);
		c2bNR->set(168, 240);
		c2bNR->set(169, 0x0000ff10);
		c2bNR->set(170, 241);
		c2bNR->set(171, 0x0000ff11);
		c2bNR->set(172, 242);
		c2bNR->set(173, 0x0000ff12);
		c2bNR->set(174, 243);
		c2bNR->set(175, 0x0000ff13);
		c2bNR->set(176, 244);
		c2bNR->set(177, 0x0000ff14);
		c2bNR->set(178, 245);
		c2bNR->set(179, 0x0000ff15);
		c2bNR->set(180, 246);
		c2bNR->set(181, 0x0000ff16);
		c2bNR->set(182, 247);
		c2bNR->set(183, 0x0000ff17);
		c2bNR->set(184, 248);
		c2bNR->set(185, 0x0000ff18);
		c2bNR->set(186, 249);
		c2bNR->set(187, 0x0000ff19);
		$SingleByte::initC2B(b2cMap, c2bNR, IBM290$Holder::c2b, IBM290$Holder::c2bIndex);
	}
}

IBM290$Holder::IBM290$Holder() {
}

$Class* IBM290$Holder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"b2cTable", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM290$Holder, b2cTable)},
		{"b2c", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM290$Holder, b2c)},
		{"c2b", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM290$Holder, c2b)},
		{"c2bIndex", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM290$Holder, c2bIndex)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(IBM290$Holder, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.cs.ext.IBM290$Holder", "sun.nio.cs.ext.IBM290", "Holder", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.cs.ext.IBM290$Holder",
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
		"sun.nio.cs.ext.IBM290"
	};
	$loadClass(IBM290$Holder, name, initialize, &classInfo$$, IBM290$Holder::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(IBM290$Holder);
	});
	return class$;
}

$Class* IBM290$Holder::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun