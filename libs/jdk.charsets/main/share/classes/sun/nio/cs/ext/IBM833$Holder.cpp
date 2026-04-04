#include <sun/nio/cs/ext/IBM833$Holder.h>
#include <sun/nio/cs/SingleByte.h>
#include <sun/nio/cs/ext/IBM833.h>
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

$String* IBM833$Holder::b2cTable = nullptr;
$chars* IBM833$Holder::b2c = nullptr;
$chars* IBM833$Holder::c2b = nullptr;
$chars* IBM833$Holder::c2bIndex = nullptr;

void IBM833$Holder::init$() {
}

void IBM833$Holder::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(IBM833$Holder::b2cTable, $cstr({']', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 0xffc2, 0xffc3, 0xffc4, 0xffc5, 0xffc6, 0xffc7, 0xfffd, 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 0xffca, 0xffcb, 0xffcc, 0xffcd, 0xffce, 0xffcf, 0x203e, '~', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 0xffd2, 0xffd3, 0xffd4, 0xffd5, 0xffd6, 0xffd7, '^', 0xfffd, '\\', 0xfffd, 0xfffd, 0xfffd, 0xfffd, 0xfffd, 0xfffd, 0xfffd, 0xffda, 0xffdb, 0xffdc, 0xfffd, 0xfffd, 0xfffd, '{', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 0xfffd, 0xfffd, 0xfffd, 0xfffd, 0xfffd, 0xfffd, '}', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 0xfffd, 0xfffd, 0xfffd, 0xfffd, 0xfffd, 0xfffd, 0x20a9, 0xfffd, 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 0xfffd, 0xfffd, 0xfffd, 0xfffd, 0xfffd, 0xfffd, '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 0xfffd, 0xfffd, 0xfffd, 0xfffd, 0xfffd, 0x9f, '\0', 0x01, 0x02, 0x03, 0x9c, '\t', 0x86, 0x7f, 0x97, 0x8d, 0x8e, 0x0b, '\f', '\r', 0x0e, 0x0f, 0x10, 0x11, 0x12, 0x13, 0x9d, 0x85, '\b', 0x87, 0x18, 0x19, 0x92, 0x8f, 0x1c, 0x1d, 0x1e, 0x1f, 0x80, 0x81, 0x82, 0x83, 0x84, '\n', 0x17, 0x1b, 0x88, 0x89, 0x8a, 0x8b, 0x8c, 0x05, 0x06, 0x07, 0x90, 0x91, 0x16, 0x93, 0x94, 0x95, 0x96, 0x04, 0x98, 0x99, 0x9a, 0x9b, 0x14, 0x15, 0x9e, 0x1a, ' ', 0xfffd, 0xffa0, 0xffa1, 0xffa2, 0xffa3, 0xffa4, 0xffa5, 0xffa6, 0xffa7, 0xa2, '.', '<', '(', '+', '|', '&', 0xfffd, 0xffa8, 0xffa9, 0xffaa, 0xffab, 0xffac, 0xffad, 0xffae, 0xffaf, '!', '$', '*', ')', ';', 0xac, '-', '/', 0xffb0, 0xffb1, 0xffb2, 0xffb3, 0xffb4, 0xffb5, 0xffb6, 0xffb7, 0xa6, ',', '%', '_', '>', '?', '[', 0xfffd, 0xffb8, 0xffb9, 0xffba, 0xffbb, 0xffbc, 0xffbd, 0xffbe, '`', ':', '#', '@', '\'', '=', '\"'}));
	$assignStatic(IBM833$Holder::b2c, IBM833$Holder::b2cTable->toCharArray());
	$assignStatic(IBM833$Holder::c2b, $new($chars, 768));
	$assignStatic(IBM833$Holder::c2bIndex, $new($chars, 256));
	{
		$var($chars, b2cMap, IBM833$Holder::b2c);
		$var($chars, c2bNR, nullptr);
		$assign(c2bNR, $new($chars, 188));
		c2bNR->set(0, 90);
		c2bNR->set(1, 0x0000ff01);
		c2bNR->set(2, 127);
		c2bNR->set(3, 0x0000ff02);
		c2bNR->set(4, 123);
		c2bNR->set(5, 0x0000ff03);
		c2bNR->set(6, 91);
		c2bNR->set(7, 0x0000ff04);
		c2bNR->set(8, 108);
		c2bNR->set(9, 0x0000ff05);
		c2bNR->set(10, 80);
		c2bNR->set(11, 0x0000ff06);
		c2bNR->set(12, 125);
		c2bNR->set(13, 0x0000ff07);
		c2bNR->set(14, 77);
		c2bNR->set(15, 0x0000ff08);
		c2bNR->set(16, 93);
		c2bNR->set(17, 0x0000ff09);
		c2bNR->set(18, 92);
		c2bNR->set(19, 0x0000ff0a);
		c2bNR->set(20, 78);
		c2bNR->set(21, 0x0000ff0b);
		c2bNR->set(22, 107);
		c2bNR->set(23, 0x0000ff0c);
		c2bNR->set(24, 96);
		c2bNR->set(25, 0x0000ff0d);
		c2bNR->set(26, 75);
		c2bNR->set(27, 0x0000ff0e);
		c2bNR->set(28, 97);
		c2bNR->set(29, 0x0000ff0f);
		c2bNR->set(30, 240);
		c2bNR->set(31, 0x0000ff10);
		c2bNR->set(32, 241);
		c2bNR->set(33, 0x0000ff11);
		c2bNR->set(34, 242);
		c2bNR->set(35, 0x0000ff12);
		c2bNR->set(36, 243);
		c2bNR->set(37, 0x0000ff13);
		c2bNR->set(38, 244);
		c2bNR->set(39, 0x0000ff14);
		c2bNR->set(40, 245);
		c2bNR->set(41, 0x0000ff15);
		c2bNR->set(42, 246);
		c2bNR->set(43, 0x0000ff16);
		c2bNR->set(44, 247);
		c2bNR->set(45, 0x0000ff17);
		c2bNR->set(46, 248);
		c2bNR->set(47, 0x0000ff18);
		c2bNR->set(48, 249);
		c2bNR->set(49, 0x0000ff19);
		c2bNR->set(50, 122);
		c2bNR->set(51, 0x0000ff1a);
		c2bNR->set(52, 94);
		c2bNR->set(53, 0x0000ff1b);
		c2bNR->set(54, 76);
		c2bNR->set(55, 0x0000ff1c);
		c2bNR->set(56, 126);
		c2bNR->set(57, 0x0000ff1d);
		c2bNR->set(58, 110);
		c2bNR->set(59, 0x0000ff1e);
		c2bNR->set(60, 111);
		c2bNR->set(61, 0x0000ff1f);
		c2bNR->set(62, 124);
		c2bNR->set(63, 0x0000ff20);
		c2bNR->set(64, 193);
		c2bNR->set(65, 0x0000ff21);
		c2bNR->set(66, 194);
		c2bNR->set(67, 0x0000ff22);
		c2bNR->set(68, 195);
		c2bNR->set(69, 0x0000ff23);
		c2bNR->set(70, 196);
		c2bNR->set(71, 0x0000ff24);
		c2bNR->set(72, 197);
		c2bNR->set(73, 0x0000ff25);
		c2bNR->set(74, 198);
		c2bNR->set(75, 0x0000ff26);
		c2bNR->set(76, 199);
		c2bNR->set(77, 0x0000ff27);
		c2bNR->set(78, 200);
		c2bNR->set(79, 0x0000ff28);
		c2bNR->set(80, 201);
		c2bNR->set(81, 0x0000ff29);
		c2bNR->set(82, 209);
		c2bNR->set(83, 0x0000ff2a);
		c2bNR->set(84, 210);
		c2bNR->set(85, 0x0000ff2b);
		c2bNR->set(86, 211);
		c2bNR->set(87, 0x0000ff2c);
		c2bNR->set(88, 212);
		c2bNR->set(89, 0x0000ff2d);
		c2bNR->set(90, 213);
		c2bNR->set(91, 0x0000ff2e);
		c2bNR->set(92, 214);
		c2bNR->set(93, 0x0000ff2f);
		c2bNR->set(94, 215);
		c2bNR->set(95, 0x0000ff30);
		c2bNR->set(96, 216);
		c2bNR->set(97, 0x0000ff31);
		c2bNR->set(98, 217);
		c2bNR->set(99, 0x0000ff32);
		c2bNR->set(100, 226);
		c2bNR->set(101, 0x0000ff33);
		c2bNR->set(102, 227);
		c2bNR->set(103, 0x0000ff34);
		c2bNR->set(104, 228);
		c2bNR->set(105, 0x0000ff35);
		c2bNR->set(106, 229);
		c2bNR->set(107, 0x0000ff36);
		c2bNR->set(108, 230);
		c2bNR->set(109, 0x0000ff37);
		c2bNR->set(110, 231);
		c2bNR->set(111, 0x0000ff38);
		c2bNR->set(112, 232);
		c2bNR->set(113, 0x0000ff39);
		c2bNR->set(114, 233);
		c2bNR->set(115, 0x0000ff3a);
		c2bNR->set(116, 112);
		c2bNR->set(117, 0x0000ff3b);
		c2bNR->set(118, 178);
		c2bNR->set(119, 0x0000ff3c);
		c2bNR->set(120, 128);
		c2bNR->set(121, 0x0000ff3d);
		c2bNR->set(122, 176);
		c2bNR->set(123, 0x0000ff3e);
		c2bNR->set(124, 109);
		c2bNR->set(125, 0x0000ff3f);
		c2bNR->set(126, 121);
		c2bNR->set(127, 0x0000ff40);
		c2bNR->set(128, 129);
		c2bNR->set(129, 0x0000ff41);
		c2bNR->set(130, 130);
		c2bNR->set(131, 0x0000ff42);
		c2bNR->set(132, 131);
		c2bNR->set(133, 0x0000ff43);
		c2bNR->set(134, 132);
		c2bNR->set(135, 0x0000ff44);
		c2bNR->set(136, 133);
		c2bNR->set(137, 0x0000ff45);
		c2bNR->set(138, 134);
		c2bNR->set(139, 0x0000ff46);
		c2bNR->set(140, 135);
		c2bNR->set(141, 0x0000ff47);
		c2bNR->set(142, 136);
		c2bNR->set(143, 0x0000ff48);
		c2bNR->set(144, 137);
		c2bNR->set(145, 0x0000ff49);
		c2bNR->set(146, 145);
		c2bNR->set(147, 0x0000ff4a);
		c2bNR->set(148, 146);
		c2bNR->set(149, 0x0000ff4b);
		c2bNR->set(150, 147);
		c2bNR->set(151, 0x0000ff4c);
		c2bNR->set(152, 148);
		c2bNR->set(153, 0x0000ff4d);
		c2bNR->set(154, 149);
		c2bNR->set(155, 0x0000ff4e);
		c2bNR->set(156, 150);
		c2bNR->set(157, 0x0000ff4f);
		c2bNR->set(158, 151);
		c2bNR->set(159, 0x0000ff50);
		c2bNR->set(160, 152);
		c2bNR->set(161, 0x0000ff51);
		c2bNR->set(162, 153);
		c2bNR->set(163, 0x0000ff52);
		c2bNR->set(164, 162);
		c2bNR->set(165, 0x0000ff53);
		c2bNR->set(166, 163);
		c2bNR->set(167, 0x0000ff54);
		c2bNR->set(168, 164);
		c2bNR->set(169, 0x0000ff55);
		c2bNR->set(170, 165);
		c2bNR->set(171, 0x0000ff56);
		c2bNR->set(172, 166);
		c2bNR->set(173, 0x0000ff57);
		c2bNR->set(174, 167);
		c2bNR->set(175, 0x0000ff58);
		c2bNR->set(176, 168);
		c2bNR->set(177, 0x0000ff59);
		c2bNR->set(178, 169);
		c2bNR->set(179, 0x0000ff5a);
		c2bNR->set(180, 192);
		c2bNR->set(181, 0x0000ff5b);
		c2bNR->set(182, 79);
		c2bNR->set(183, 0x0000ff5c);
		c2bNR->set(184, 208);
		c2bNR->set(185, 0x0000ff5d);
		c2bNR->set(186, 161);
		c2bNR->set(187, 0x0000ff5e);
		$SingleByte::initC2B(b2cMap, c2bNR, IBM833$Holder::c2b, IBM833$Holder::c2bIndex);
	}
}

IBM833$Holder::IBM833$Holder() {
}

$Class* IBM833$Holder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"b2cTable", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM833$Holder, b2cTable)},
		{"b2c", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM833$Holder, b2c)},
		{"c2b", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM833$Holder, c2b)},
		{"c2bIndex", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM833$Holder, c2bIndex)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(IBM833$Holder, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.cs.ext.IBM833$Holder", "sun.nio.cs.ext.IBM833", "Holder", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.cs.ext.IBM833$Holder",
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
		"sun.nio.cs.ext.IBM833"
	};
	$loadClass(IBM833$Holder, name, initialize, &classInfo$$, IBM833$Holder::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(IBM833$Holder);
	});
	return class$;
}

$Class* IBM833$Holder::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun