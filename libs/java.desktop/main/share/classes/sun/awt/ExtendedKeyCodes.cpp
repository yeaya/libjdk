#include <sun/awt/ExtendedKeyCodes.h>
#include <java/awt/event/KeyEvent.h>
#include <java/util/HashMap.h>
#include <java/util/HashSet.h>
#include <jcpp.h>

#undef VK_0
#undef VK_1
#undef VK_2
#undef VK_3
#undef VK_4
#undef VK_5
#undef VK_6
#undef VK_7
#undef VK_8
#undef VK_9
#undef VK_A
#undef VK_AMPERSAND
#undef VK_ASTERISK
#undef VK_AT
#undef VK_B
#undef VK_BACK_QUOTE
#undef VK_BACK_SLASH
#undef VK_BACK_SPACE
#undef VK_BRACELEFT
#undef VK_BRACERIGHT
#undef VK_C
#undef VK_CIRCUMFLEX
#undef VK_CLOSE_BRACKET
#undef VK_COLON
#undef VK_COMMA
#undef VK_D
#undef VK_DELETE
#undef VK_DOLLAR
#undef VK_E
#undef VK_ENTER
#undef VK_EQUALS
#undef VK_ESCAPE
#undef VK_EURO_SIGN
#undef VK_EXCLAMATION_MARK
#undef VK_F
#undef VK_G
#undef VK_GREATER
#undef VK_H
#undef VK_I
#undef VK_INVERTED_EXCLAMATION_MARK
#undef VK_J
#undef VK_K
#undef VK_L
#undef VK_LEFT_PARENTHESIS
#undef VK_LESS
#undef VK_M
#undef VK_MINUS
#undef VK_N
#undef VK_NUMBER_SIGN
#undef VK_O
#undef VK_OPEN_BRACKET
#undef VK_P
#undef VK_PERIOD
#undef VK_PLUS
#undef VK_Q
#undef VK_QUOTE
#undef VK_QUOTEDBL
#undef VK_R
#undef VK_RIGHT_PARENTHESIS
#undef VK_S
#undef VK_SEMICOLON
#undef VK_SLASH
#undef VK_SPACE
#undef VK_T
#undef VK_TAB
#undef VK_U
#undef VK_UNDEFINED
#undef VK_UNDERSCORE
#undef VK_V
#undef VK_W
#undef VK_X
#undef VK_Y
#undef VK_Z

using $KeyEvent = ::java::awt::event::KeyEvent;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $HashMap = ::java::util::HashMap;
using $HashSet = ::java::util::HashSet;

namespace sun {
	namespace awt {

$HashMap* ExtendedKeyCodes::regularKeyCodesMap = nullptr;
$HashSet* ExtendedKeyCodes::extendedKeyCodesSet = nullptr;

void ExtendedKeyCodes::init$() {
}

int32_t ExtendedKeyCodes::getExtendedKeyCodeForChar(int32_t c) {
	$init(ExtendedKeyCodes);
	$useLocalObjectStack();
	int32_t uc = $Character::toUpperCase(c);
	int32_t lc = $Character::toLowerCase(c);
	if (ExtendedKeyCodes::regularKeyCodesMap->containsKey($($Integer::valueOf(c)))) {
		if (ExtendedKeyCodes::regularKeyCodesMap->containsKey($($Integer::valueOf(uc)))) {
			return $$sure($Integer, ExtendedKeyCodes::regularKeyCodesMap->get($($Integer::valueOf(uc))))->intValue();
		}
		return $$sure($Integer, ExtendedKeyCodes::regularKeyCodesMap->get($($Integer::valueOf(c))))->intValue();
	}
	uc += 0x01000000;
	lc += 0x01000000;
	if (ExtendedKeyCodes::extendedKeyCodesSet->contains($($Integer::valueOf(uc)))) {
		return uc;
	} else if (ExtendedKeyCodes::extendedKeyCodesSet->contains($($Integer::valueOf(lc)))) {
		return lc;
	}
	return $KeyEvent::VK_UNDEFINED;
}

void ExtendedKeyCodes::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(ExtendedKeyCodes::regularKeyCodesMap, $new($HashMap, 98, 1.0f));
	$assignStatic(ExtendedKeyCodes::extendedKeyCodesSet, $new($HashSet, 496, 1.0f));
	{
		$var($Object, var$0, $Integer::valueOf(8));
		ExtendedKeyCodes::regularKeyCodesMap->put(var$0, $($Integer::valueOf($KeyEvent::VK_BACK_SPACE)));
		$var($Object, var$1, $Integer::valueOf(9));
		ExtendedKeyCodes::regularKeyCodesMap->put(var$1, $($Integer::valueOf($KeyEvent::VK_TAB)));
		$var($Object, var$2, $Integer::valueOf(10));
		ExtendedKeyCodes::regularKeyCodesMap->put(var$2, $($Integer::valueOf($KeyEvent::VK_ENTER)));
		$var($Object, var$3, $Integer::valueOf(27));
		ExtendedKeyCodes::regularKeyCodesMap->put(var$3, $($Integer::valueOf($KeyEvent::VK_ESCAPE)));
		$var($Object, var$4, $Integer::valueOf(8364));
		ExtendedKeyCodes::regularKeyCodesMap->put(var$4, $($Integer::valueOf($KeyEvent::VK_EURO_SIGN)));
		$var($Object, var$5, $Integer::valueOf(32));
		ExtendedKeyCodes::regularKeyCodesMap->put(var$5, $($Integer::valueOf($KeyEvent::VK_SPACE)));
		$var($Object, var$6, $Integer::valueOf(33));
		ExtendedKeyCodes::regularKeyCodesMap->put(var$6, $($Integer::valueOf($KeyEvent::VK_EXCLAMATION_MARK)));
		$var($Object, var$7, $Integer::valueOf(34));
		ExtendedKeyCodes::regularKeyCodesMap->put(var$7, $($Integer::valueOf($KeyEvent::VK_QUOTEDBL)));
		$var($Object, var$8, $Integer::valueOf(35));
		ExtendedKeyCodes::regularKeyCodesMap->put(var$8, $($Integer::valueOf($KeyEvent::VK_NUMBER_SIGN)));
		$var($Object, var$9, $Integer::valueOf(36));
		ExtendedKeyCodes::regularKeyCodesMap->put(var$9, $($Integer::valueOf($KeyEvent::VK_DOLLAR)));
		$var($Object, var$10, $Integer::valueOf(38));
		ExtendedKeyCodes::regularKeyCodesMap->put(var$10, $($Integer::valueOf($KeyEvent::VK_AMPERSAND)));
		$var($Object, var$11, $Integer::valueOf(39));
		ExtendedKeyCodes::regularKeyCodesMap->put(var$11, $($Integer::valueOf($KeyEvent::VK_QUOTE)));
		$var($Object, var$12, $Integer::valueOf(40));
		ExtendedKeyCodes::regularKeyCodesMap->put(var$12, $($Integer::valueOf($KeyEvent::VK_LEFT_PARENTHESIS)));
		$var($Object, var$13, $Integer::valueOf(41));
		ExtendedKeyCodes::regularKeyCodesMap->put(var$13, $($Integer::valueOf($KeyEvent::VK_RIGHT_PARENTHESIS)));
		$var($Object, var$14, $Integer::valueOf(42));
		ExtendedKeyCodes::regularKeyCodesMap->put(var$14, $($Integer::valueOf($KeyEvent::VK_ASTERISK)));
		$var($Object, var$15, $Integer::valueOf(43));
		ExtendedKeyCodes::regularKeyCodesMap->put(var$15, $($Integer::valueOf($KeyEvent::VK_PLUS)));
		$var($Object, var$16, $Integer::valueOf(44));
		ExtendedKeyCodes::regularKeyCodesMap->put(var$16, $($Integer::valueOf($KeyEvent::VK_COMMA)));
		$var($Object, var$17, $Integer::valueOf(45));
		ExtendedKeyCodes::regularKeyCodesMap->put(var$17, $($Integer::valueOf($KeyEvent::VK_MINUS)));
		$var($Object, var$18, $Integer::valueOf(46));
		ExtendedKeyCodes::regularKeyCodesMap->put(var$18, $($Integer::valueOf($KeyEvent::VK_PERIOD)));
		$var($Object, var$19, $Integer::valueOf(47));
		ExtendedKeyCodes::regularKeyCodesMap->put(var$19, $($Integer::valueOf($KeyEvent::VK_SLASH)));
		$var($Object, var$20, $Integer::valueOf(48));
		ExtendedKeyCodes::regularKeyCodesMap->put(var$20, $($Integer::valueOf($KeyEvent::VK_0)));
		$var($Object, var$21, $Integer::valueOf(49));
		ExtendedKeyCodes::regularKeyCodesMap->put(var$21, $($Integer::valueOf($KeyEvent::VK_1)));
		$var($Object, var$22, $Integer::valueOf(50));
		ExtendedKeyCodes::regularKeyCodesMap->put(var$22, $($Integer::valueOf($KeyEvent::VK_2)));
		$var($Object, var$23, $Integer::valueOf(51));
		ExtendedKeyCodes::regularKeyCodesMap->put(var$23, $($Integer::valueOf($KeyEvent::VK_3)));
		$var($Object, var$24, $Integer::valueOf(52));
		ExtendedKeyCodes::regularKeyCodesMap->put(var$24, $($Integer::valueOf($KeyEvent::VK_4)));
		$var($Object, var$25, $Integer::valueOf(53));
		ExtendedKeyCodes::regularKeyCodesMap->put(var$25, $($Integer::valueOf($KeyEvent::VK_5)));
		$var($Object, var$26, $Integer::valueOf(54));
		ExtendedKeyCodes::regularKeyCodesMap->put(var$26, $($Integer::valueOf($KeyEvent::VK_6)));
		$var($Object, var$27, $Integer::valueOf(55));
		ExtendedKeyCodes::regularKeyCodesMap->put(var$27, $($Integer::valueOf($KeyEvent::VK_7)));
		$var($Object, var$28, $Integer::valueOf(56));
		ExtendedKeyCodes::regularKeyCodesMap->put(var$28, $($Integer::valueOf($KeyEvent::VK_8)));
		$var($Object, var$29, $Integer::valueOf(57));
		ExtendedKeyCodes::regularKeyCodesMap->put(var$29, $($Integer::valueOf($KeyEvent::VK_9)));
		$var($Object, var$30, $Integer::valueOf(58));
		ExtendedKeyCodes::regularKeyCodesMap->put(var$30, $($Integer::valueOf($KeyEvent::VK_COLON)));
		$var($Object, var$31, $Integer::valueOf(59));
		ExtendedKeyCodes::regularKeyCodesMap->put(var$31, $($Integer::valueOf($KeyEvent::VK_SEMICOLON)));
		$var($Object, var$32, $Integer::valueOf(60));
		ExtendedKeyCodes::regularKeyCodesMap->put(var$32, $($Integer::valueOf($KeyEvent::VK_LESS)));
		$var($Object, var$33, $Integer::valueOf(61));
		ExtendedKeyCodes::regularKeyCodesMap->put(var$33, $($Integer::valueOf($KeyEvent::VK_EQUALS)));
		$var($Object, var$34, $Integer::valueOf(62));
		ExtendedKeyCodes::regularKeyCodesMap->put(var$34, $($Integer::valueOf($KeyEvent::VK_GREATER)));
		$var($Object, var$35, $Integer::valueOf(64));
		ExtendedKeyCodes::regularKeyCodesMap->put(var$35, $($Integer::valueOf($KeyEvent::VK_AT)));
		$var($Object, var$36, $Integer::valueOf(65));
		ExtendedKeyCodes::regularKeyCodesMap->put(var$36, $($Integer::valueOf($KeyEvent::VK_A)));
		$var($Object, var$37, $Integer::valueOf(66));
		ExtendedKeyCodes::regularKeyCodesMap->put(var$37, $($Integer::valueOf($KeyEvent::VK_B)));
		$var($Object, var$38, $Integer::valueOf(67));
		ExtendedKeyCodes::regularKeyCodesMap->put(var$38, $($Integer::valueOf($KeyEvent::VK_C)));
		$var($Object, var$39, $Integer::valueOf(68));
		ExtendedKeyCodes::regularKeyCodesMap->put(var$39, $($Integer::valueOf($KeyEvent::VK_D)));
		$var($Object, var$40, $Integer::valueOf(69));
		ExtendedKeyCodes::regularKeyCodesMap->put(var$40, $($Integer::valueOf($KeyEvent::VK_E)));
		$var($Object, var$41, $Integer::valueOf(70));
		ExtendedKeyCodes::regularKeyCodesMap->put(var$41, $($Integer::valueOf($KeyEvent::VK_F)));
		$var($Object, var$42, $Integer::valueOf(71));
		ExtendedKeyCodes::regularKeyCodesMap->put(var$42, $($Integer::valueOf($KeyEvent::VK_G)));
		$var($Object, var$43, $Integer::valueOf(72));
		ExtendedKeyCodes::regularKeyCodesMap->put(var$43, $($Integer::valueOf($KeyEvent::VK_H)));
		$var($Object, var$44, $Integer::valueOf(73));
		ExtendedKeyCodes::regularKeyCodesMap->put(var$44, $($Integer::valueOf($KeyEvent::VK_I)));
		$var($Object, var$45, $Integer::valueOf(74));
		ExtendedKeyCodes::regularKeyCodesMap->put(var$45, $($Integer::valueOf($KeyEvent::VK_J)));
		$var($Object, var$46, $Integer::valueOf(75));
		ExtendedKeyCodes::regularKeyCodesMap->put(var$46, $($Integer::valueOf($KeyEvent::VK_K)));
		$var($Object, var$47, $Integer::valueOf(76));
		ExtendedKeyCodes::regularKeyCodesMap->put(var$47, $($Integer::valueOf($KeyEvent::VK_L)));
		$var($Object, var$48, $Integer::valueOf(77));
		ExtendedKeyCodes::regularKeyCodesMap->put(var$48, $($Integer::valueOf($KeyEvent::VK_M)));
		$var($Object, var$49, $Integer::valueOf(78));
		ExtendedKeyCodes::regularKeyCodesMap->put(var$49, $($Integer::valueOf($KeyEvent::VK_N)));
		$var($Object, var$50, $Integer::valueOf(79));
		ExtendedKeyCodes::regularKeyCodesMap->put(var$50, $($Integer::valueOf($KeyEvent::VK_O)));
		$var($Object, var$51, $Integer::valueOf(80));
		ExtendedKeyCodes::regularKeyCodesMap->put(var$51, $($Integer::valueOf($KeyEvent::VK_P)));
		$var($Object, var$52, $Integer::valueOf(81));
		ExtendedKeyCodes::regularKeyCodesMap->put(var$52, $($Integer::valueOf($KeyEvent::VK_Q)));
		$var($Object, var$53, $Integer::valueOf(82));
		ExtendedKeyCodes::regularKeyCodesMap->put(var$53, $($Integer::valueOf($KeyEvent::VK_R)));
		$var($Object, var$54, $Integer::valueOf(83));
		ExtendedKeyCodes::regularKeyCodesMap->put(var$54, $($Integer::valueOf($KeyEvent::VK_S)));
		$var($Object, var$55, $Integer::valueOf(84));
		ExtendedKeyCodes::regularKeyCodesMap->put(var$55, $($Integer::valueOf($KeyEvent::VK_T)));
		$var($Object, var$56, $Integer::valueOf(85));
		ExtendedKeyCodes::regularKeyCodesMap->put(var$56, $($Integer::valueOf($KeyEvent::VK_U)));
		$var($Object, var$57, $Integer::valueOf(86));
		ExtendedKeyCodes::regularKeyCodesMap->put(var$57, $($Integer::valueOf($KeyEvent::VK_V)));
		$var($Object, var$58, $Integer::valueOf(87));
		ExtendedKeyCodes::regularKeyCodesMap->put(var$58, $($Integer::valueOf($KeyEvent::VK_W)));
		$var($Object, var$59, $Integer::valueOf(88));
		ExtendedKeyCodes::regularKeyCodesMap->put(var$59, $($Integer::valueOf($KeyEvent::VK_X)));
		$var($Object, var$60, $Integer::valueOf(89));
		ExtendedKeyCodes::regularKeyCodesMap->put(var$60, $($Integer::valueOf($KeyEvent::VK_Y)));
		$var($Object, var$61, $Integer::valueOf(90));
		ExtendedKeyCodes::regularKeyCodesMap->put(var$61, $($Integer::valueOf($KeyEvent::VK_Z)));
		$var($Object, var$62, $Integer::valueOf(91));
		ExtendedKeyCodes::regularKeyCodesMap->put(var$62, $($Integer::valueOf($KeyEvent::VK_OPEN_BRACKET)));
		$var($Object, var$63, $Integer::valueOf(92));
		ExtendedKeyCodes::regularKeyCodesMap->put(var$63, $($Integer::valueOf($KeyEvent::VK_BACK_SLASH)));
		$var($Object, var$64, $Integer::valueOf(93));
		ExtendedKeyCodes::regularKeyCodesMap->put(var$64, $($Integer::valueOf($KeyEvent::VK_CLOSE_BRACKET)));
		$var($Object, var$65, $Integer::valueOf(94));
		ExtendedKeyCodes::regularKeyCodesMap->put(var$65, $($Integer::valueOf($KeyEvent::VK_CIRCUMFLEX)));
		$var($Object, var$66, $Integer::valueOf(95));
		ExtendedKeyCodes::regularKeyCodesMap->put(var$66, $($Integer::valueOf($KeyEvent::VK_UNDERSCORE)));
		$var($Object, var$67, $Integer::valueOf(96));
		ExtendedKeyCodes::regularKeyCodesMap->put(var$67, $($Integer::valueOf($KeyEvent::VK_BACK_QUOTE)));
		$var($Object, var$68, $Integer::valueOf(97));
		ExtendedKeyCodes::regularKeyCodesMap->put(var$68, $($Integer::valueOf($KeyEvent::VK_A)));
		$var($Object, var$69, $Integer::valueOf(98));
		ExtendedKeyCodes::regularKeyCodesMap->put(var$69, $($Integer::valueOf($KeyEvent::VK_B)));
		$var($Object, var$70, $Integer::valueOf(99));
		ExtendedKeyCodes::regularKeyCodesMap->put(var$70, $($Integer::valueOf($KeyEvent::VK_C)));
		$var($Object, var$71, $Integer::valueOf(100));
		ExtendedKeyCodes::regularKeyCodesMap->put(var$71, $($Integer::valueOf($KeyEvent::VK_D)));
		$var($Object, var$72, $Integer::valueOf(101));
		ExtendedKeyCodes::regularKeyCodesMap->put(var$72, $($Integer::valueOf($KeyEvent::VK_E)));
		$var($Object, var$73, $Integer::valueOf(102));
		ExtendedKeyCodes::regularKeyCodesMap->put(var$73, $($Integer::valueOf($KeyEvent::VK_F)));
		$var($Object, var$74, $Integer::valueOf(103));
		ExtendedKeyCodes::regularKeyCodesMap->put(var$74, $($Integer::valueOf($KeyEvent::VK_G)));
		$var($Object, var$75, $Integer::valueOf(104));
		ExtendedKeyCodes::regularKeyCodesMap->put(var$75, $($Integer::valueOf($KeyEvent::VK_H)));
		$var($Object, var$76, $Integer::valueOf(105));
		ExtendedKeyCodes::regularKeyCodesMap->put(var$76, $($Integer::valueOf($KeyEvent::VK_I)));
		$var($Object, var$77, $Integer::valueOf(106));
		ExtendedKeyCodes::regularKeyCodesMap->put(var$77, $($Integer::valueOf($KeyEvent::VK_J)));
		$var($Object, var$78, $Integer::valueOf(107));
		ExtendedKeyCodes::regularKeyCodesMap->put(var$78, $($Integer::valueOf($KeyEvent::VK_K)));
		$var($Object, var$79, $Integer::valueOf(108));
		ExtendedKeyCodes::regularKeyCodesMap->put(var$79, $($Integer::valueOf($KeyEvent::VK_L)));
		$var($Object, var$80, $Integer::valueOf(109));
		ExtendedKeyCodes::regularKeyCodesMap->put(var$80, $($Integer::valueOf($KeyEvent::VK_M)));
		$var($Object, var$81, $Integer::valueOf(110));
		ExtendedKeyCodes::regularKeyCodesMap->put(var$81, $($Integer::valueOf($KeyEvent::VK_N)));
		$var($Object, var$82, $Integer::valueOf(111));
		ExtendedKeyCodes::regularKeyCodesMap->put(var$82, $($Integer::valueOf($KeyEvent::VK_O)));
		$var($Object, var$83, $Integer::valueOf(112));
		ExtendedKeyCodes::regularKeyCodesMap->put(var$83, $($Integer::valueOf($KeyEvent::VK_P)));
		$var($Object, var$84, $Integer::valueOf(113));
		ExtendedKeyCodes::regularKeyCodesMap->put(var$84, $($Integer::valueOf($KeyEvent::VK_Q)));
		$var($Object, var$85, $Integer::valueOf(114));
		ExtendedKeyCodes::regularKeyCodesMap->put(var$85, $($Integer::valueOf($KeyEvent::VK_R)));
		$var($Object, var$86, $Integer::valueOf(115));
		ExtendedKeyCodes::regularKeyCodesMap->put(var$86, $($Integer::valueOf($KeyEvent::VK_S)));
		$var($Object, var$87, $Integer::valueOf(116));
		ExtendedKeyCodes::regularKeyCodesMap->put(var$87, $($Integer::valueOf($KeyEvent::VK_T)));
		$var($Object, var$88, $Integer::valueOf(117));
		ExtendedKeyCodes::regularKeyCodesMap->put(var$88, $($Integer::valueOf($KeyEvent::VK_U)));
		$var($Object, var$89, $Integer::valueOf(118));
		ExtendedKeyCodes::regularKeyCodesMap->put(var$89, $($Integer::valueOf($KeyEvent::VK_V)));
		$var($Object, var$90, $Integer::valueOf(119));
		ExtendedKeyCodes::regularKeyCodesMap->put(var$90, $($Integer::valueOf($KeyEvent::VK_W)));
		$var($Object, var$91, $Integer::valueOf(120));
		ExtendedKeyCodes::regularKeyCodesMap->put(var$91, $($Integer::valueOf($KeyEvent::VK_X)));
		$var($Object, var$92, $Integer::valueOf(121));
		ExtendedKeyCodes::regularKeyCodesMap->put(var$92, $($Integer::valueOf($KeyEvent::VK_Y)));
		$var($Object, var$93, $Integer::valueOf(122));
		ExtendedKeyCodes::regularKeyCodesMap->put(var$93, $($Integer::valueOf($KeyEvent::VK_Z)));
		$var($Object, var$94, $Integer::valueOf(123));
		ExtendedKeyCodes::regularKeyCodesMap->put(var$94, $($Integer::valueOf($KeyEvent::VK_BRACELEFT)));
		$var($Object, var$95, $Integer::valueOf(125));
		ExtendedKeyCodes::regularKeyCodesMap->put(var$95, $($Integer::valueOf($KeyEvent::VK_BRACERIGHT)));
		$var($Object, var$96, $Integer::valueOf(127));
		ExtendedKeyCodes::regularKeyCodesMap->put(var$96, $($Integer::valueOf($KeyEvent::VK_DELETE)));
		$var($Object, var$97, $Integer::valueOf(161));
		ExtendedKeyCodes::regularKeyCodesMap->put(var$97, $($Integer::valueOf($KeyEvent::VK_INVERTED_EXCLAMATION_MARK)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 96)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 124)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 126)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 162)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 163)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 165)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 167)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 168)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 171)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 176)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 177)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 178)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 179)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 180)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 181)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 182)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 183)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 185)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 186)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 187)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 188)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 189)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 190)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 191)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 196)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 197)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 198)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 199)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 209)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 214)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 215)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 216)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 223)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 224)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 225)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 226)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 228)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 229)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 230)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 231)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 232)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 233)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 234)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 235)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 236)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 237)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 238)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 240)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 241)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 242)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 243)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 244)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 245)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 246)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 247)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 248)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 249)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 250)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 251)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 252)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 253)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 254)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 261)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 731)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 322)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 318)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 347)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 353)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 351)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 357)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 382)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 380)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 259)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 263)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 269)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 281)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 283)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 273)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 328)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 337)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 369)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 345)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 367)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 355)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 729)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 304)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 295)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 293)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 305)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 287)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 309)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 267)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 265)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 289)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 285)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 365)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 349)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 312)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 343)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 316)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 275)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 291)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 359)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 331)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 257)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 303)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 279)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 299)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 326)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 333)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 311)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 371)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 363)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 339)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 12540)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 12450)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 12452)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 12454)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 12456)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 12458)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 12459)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 12461)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 12463)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 12465)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 12467)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 12469)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 12471)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 12473)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 12475)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 12477)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 12479)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 12481)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 12484)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 12486)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 12488)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 12490)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 12491)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 12492)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 12493)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 12494)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 12495)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 12498)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 12501)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 12504)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 12507)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 12510)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 12511)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 12512)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 12513)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 12514)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 12516)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 12518)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 12520)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 12521)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 12522)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 12523)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 12524)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 12525)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 12527)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 12531)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 12443)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 12444)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1776)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1777)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1778)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1779)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1780)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1781)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1782)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1783)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1784)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1785)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1648)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1662)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1670)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1548)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1748)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1632)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1633)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1634)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1635)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1636)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1637)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1638)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1639)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1640)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1641)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1563)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1569)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1572)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1574)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1575)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1576)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1577)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1578)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1579)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1580)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1581)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1582)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1583)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1584)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1585)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1586)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1587)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1588)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1589)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1590)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1591)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1592)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1593)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1594)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1601)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1602)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1603)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1604)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1605)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1606)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1607)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1608)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1609)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1610)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1614)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1615)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1616)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1618)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1688)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1700)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1705)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1711)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1726)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1740)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1746)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1171)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1175)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1179)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1181)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1187)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1199)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1201)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1203)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1209)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1211)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1241)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1257)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1106)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1107)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1105)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1108)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1109)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1110)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1111)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1112)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1113)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1114)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1115)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1116)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1169)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1118)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1119)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 8470)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1102)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1072)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1073)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1094)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1076)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1077)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1092)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1075)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1093)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1080)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1081)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1082)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1083)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1084)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1085)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1086)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1087)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1103)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1088)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1089)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1090)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1091)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1078)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1074)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1100)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1099)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1079)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1096)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1101)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1097)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1095)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1098)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 8213)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 945)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 946)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 947)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 948)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 949)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 950)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 951)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 952)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 953)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 954)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 955)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 956)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 957)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 958)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 959)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 960)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 961)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 963)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 962)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 964)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 965)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 966)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 967)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 968)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 969)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 8592)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 8594)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 8595)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 8211)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 8220)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 8221)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 8222)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1488)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1489)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1490)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1491)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1492)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1493)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1494)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1495)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1496)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1497)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1498)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1499)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1500)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1501)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1502)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1503)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1504)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1505)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1506)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1507)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1508)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1509)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1510)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1511)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1512)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1513)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1514)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 3585)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 3586)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 3587)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 3588)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 3589)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 3591)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 3592)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 3594)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 3596)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 3604)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 3605)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 3606)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 3607)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 3609)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 3610)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 3611)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 3612)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 3613)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 3614)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 3615)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 3616)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 3617)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 3618)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 3619)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 3621)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 3623)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 3626)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 3627)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 3629)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 3632)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 3633)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 3634)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 3635)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 3636)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 3637)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 3638)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 3639)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 3640)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 3641)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 3647)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 3648)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 3649)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 3651)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 3652)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 3653)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 3654)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 3655)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 3656)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 3657)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 3664)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 3665)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 3666)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 3667)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 3668)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 3669)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 3670)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 3671)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 3672)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 3673)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1415)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1417)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1373)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1371)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1374)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1377)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1378)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1379)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1380)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1381)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1382)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1383)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1384)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1385)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1386)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1387)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1388)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1389)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1390)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1391)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1392)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1393)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1394)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1395)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1396)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1397)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1398)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1399)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1400)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1401)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1402)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1403)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1404)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1405)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1406)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1407)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1408)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1409)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1410)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1411)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1412)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1413)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 1414)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 4304)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 4305)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 4306)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 4307)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 4308)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 4309)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 4310)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 4311)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 4312)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 4313)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 4314)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 4315)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 4316)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 4317)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 4318)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 4319)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 4320)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 4321)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 4322)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 4323)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 4324)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 4325)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 4326)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 4327)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 4328)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 4329)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 4330)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 4331)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 4332)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 4333)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 4334)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 4335)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 4336)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 487)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 601)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 7865)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 7883)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 7885)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 7909)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 417)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 432)));
		ExtendedKeyCodes::extendedKeyCodesSet->add($($Integer::valueOf(0x01000000 + 8363)));
	}
}

ExtendedKeyCodes::ExtendedKeyCodes() {
}

$Class* ExtendedKeyCodes::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"regularKeyCodesMap", "Ljava/util/HashMap;", "Ljava/util/HashMap<Ljava/lang/Integer;Ljava/lang/Integer;>;", $PRIVATE | $STATIC | $FINAL, $staticField(ExtendedKeyCodes, regularKeyCodesMap)},
		{"extendedKeyCodesSet", "Ljava/util/HashSet;", "Ljava/util/HashSet<Ljava/lang/Integer;>;", $PRIVATE | $STATIC | $FINAL, $staticField(ExtendedKeyCodes, extendedKeyCodesSet)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ExtendedKeyCodes, init$, void)},
		{"getExtendedKeyCodeForChar", "(I)I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticMethod(ExtendedKeyCodes, getExtendedKeyCodeForChar, int32_t, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.awt.ExtendedKeyCodes",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ExtendedKeyCodes, name, initialize, &classInfo$$, ExtendedKeyCodes::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ExtendedKeyCodes);
	});
	return class$;
}

$Class* ExtendedKeyCodes::class$ = nullptr;

	} // awt
} // sun