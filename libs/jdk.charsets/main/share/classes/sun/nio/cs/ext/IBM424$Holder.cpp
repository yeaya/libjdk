#include <sun/nio/cs/ext/IBM424$Holder.h>
#include <sun/nio/cs/SingleByte.h>
#include <sun/nio/cs/ext/IBM424.h>
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

$String* IBM424$Holder::b2cTable = nullptr;
$chars* IBM424$Holder::b2c = nullptr;
$chars* IBM424$Holder::c2b = nullptr;
$chars* IBM424$Holder::c2bIndex = nullptr;

void IBM424$Holder::init$() {
}

void IBM424$Holder::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(IBM424$Holder::b2cTable, $cstr({0xfffd, 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 0xab, 0xbb, 0xfffd, 0xfffd, 0xfffd, 0xb1, 0xb0, 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 0xfffd, 0xfffd, 0xfffd, 0xb8, 0xfffd, 0xa4, 0xb5, '~', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 0xfffd, 0xfffd, 0xfffd, 0xfffd, 0xfffd, 0xae, '^', 0xa3, 0xa5, 0x2022, 0xa9, 0xa7, 0xb6, 0xbc, 0xbd, 0xbe, '[', ']', 0x203e, 0xa8, 0xb4, 0xd7, '{', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 0xad, 0xfffd, 0xfffd, 0xfffd, 0xfffd, 0xfffd, '}', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 0xb9, 0xfffd, 0xfffd, 0xfffd, 0xfffd, 0xfffd, '\\', 0xf7, 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 0xb2, 0xfffd, 0xfffd, 0xfffd, 0xfffd, 0xfffd, '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 0xb3, 0xfffd, 0xfffd, 0xfffd, 0xfffd, 0x9f, '\0', 0x01, 0x02, 0x03, 0x9c, '\t', 0x86, 0x7f, 0x97, 0x8d, 0x8e, 0x0b, '\f', '\r', 0x0e, 0x0f, 0x10, 0x11, 0x12, 0x13, 0x9d, '\n', '\b', 0x87, 0x18, 0x19, 0x92, 0x8f, 0x1c, 0x1d, 0x1e, 0x1f, 0x80, 0x81, 0x82, 0x83, 0x84, '\n', 0x17, 0x1b, 0x88, 0x89, 0x8a, 0x8b, 0x8c, 0x05, 0x06, 0x07, 0x90, 0x91, 0x16, 0x93, 0x94, 0x95, 0x96, 0x04, 0x98, 0x99, 0x9a, 0x9b, 0x14, 0x15, 0x9e, 0x1a, ' ', 0x05d0, 0x05d1, 0x05d2, 0x05d3, 0x05d4, 0x05d5, 0x05d6, 0x05d7, 0x05d8, 0xa2, '.', '<', '(', '+', '|', '&', 0x05d9, 0x05da, 0x05db, 0x05dc, 0x05dd, 0x05de, 0x05df, 0x05e0, 0x05e1, '!', '$', '*', ')', ';', 0xac, '-', '/', 0x05e2, 0x05e3, 0x05e4, 0x05e5, 0x05e6, 0x05e7, 0x05e8, 0x05e9, 0xa6, ',', '%', '_', '>', '?', 0xfffd, 0x05ea, 0xfffd, 0xfffd, 0xa0, 0xfffd, 0xfffd, 0xfffd, 0x2017, '`', ':', '#', '@', '\'', '=', '\"'}));
	$assignStatic(IBM424$Holder::b2c, IBM424$Holder::b2cTable->toCharArray());
	$assignStatic(IBM424$Holder::c2b, $new($chars, 1024));
	$assignStatic(IBM424$Holder::c2bIndex, $new($chars, 256));
	{
		$var($chars, b2cMap, IBM424$Holder::b2c);
		$var($chars, c2bNR, nullptr);
		$assign(b2cMap, IBM424$Holder::b2cTable->toCharArray());
		b2cMap->set(165, (char16_t)0xfffd);
		$assign(c2bNR, $new($chars, 2));
		c2bNR->set(0, 21);
		c2bNR->set(1, 133);
		$SingleByte::initC2B(b2cMap, c2bNR, IBM424$Holder::c2b, IBM424$Holder::c2bIndex);
	}
}

IBM424$Holder::IBM424$Holder() {
}

$Class* IBM424$Holder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"b2cTable", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM424$Holder, b2cTable)},
		{"b2c", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM424$Holder, b2c)},
		{"c2b", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM424$Holder, c2b)},
		{"c2bIndex", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM424$Holder, c2bIndex)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(IBM424$Holder, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.cs.ext.IBM424$Holder", "sun.nio.cs.ext.IBM424", "Holder", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.cs.ext.IBM424$Holder",
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
		"sun.nio.cs.ext.IBM424"
	};
	$loadClass(IBM424$Holder, name, initialize, &classInfo$$, IBM424$Holder::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(IBM424$Holder);
	});
	return class$;
}

$Class* IBM424$Holder::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun