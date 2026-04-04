#include <sun/nio/cs/ext/IBM1112$Holder.h>
#include <sun/nio/cs/SingleByte.h>
#include <sun/nio/cs/ext/IBM1112.h>
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

$String* IBM1112$Holder::b2cTable = nullptr;
$chars* IBM1112$Holder::b2c = nullptr;
$chars* IBM1112$Holder::c2b = nullptr;
$chars* IBM1112$Holder::c2bIndex = nullptr;

void IBM1112$Holder::init$() {
}

void IBM1112$Holder::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(IBM1112$Holder::b2cTable, $cstr({0xd8, 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 0xab, 0xbb, 0x0101, 0x017c, 0x0144, 0xb1, 0xb0, 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 0x0156, 0x0157, 0xe6, 0x0137, 0xc6, 0xa4, 0xb5, '~', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 0x201d, 0x017a, 0x0100, 0x017b, 0x0143, 0xae, '^', 0xa3, 0x012b, 0xb7, 0xa9, 0xa7, 0xb6, 0xbc, 0xbd, 0xbe, '[', ']', 0x0179, 0x0136, 0x013c, 0xd7, '{', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 0xad, 0x014d, 0xf6, 0x0146, 0xf3, 0xf5, '}', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 0xb9, 0x0107, 0xfc, 0x0142, 0x015b, 0x2019, '\\', 0xf7, 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 0xb2, 0x014c, 0xd6, 0x0145, 0xd3, 0xd5, '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 0xb3, 0x0106, 0xdc, 0x0141, 0x015a, 0x9f, '\0', 0x01, 0x02, 0x03, 0x9c, '\t', 0x86, 0x7f, 0x97, 0x8d, 0x8e, 0x0b, '\f', '\r', 0x0e, 0x0f, 0x10, 0x11, 0x12, 0x13, 0x9d, '\n', '\b', 0x87, 0x18, 0x19, 0x92, 0x8f, 0x1c, 0x1d, 0x1e, 0x1f, 0x80, 0x81, 0x82, 0x83, 0x84, '\n', 0x17, 0x1b, 0x88, 0x89, 0x8a, 0x8b, 0x8c, 0x05, 0x06, 0x07, 0x90, 0x91, 0x16, 0x93, 0x94, 0x95, 0x96, 0x04, 0x98, 0x99, 0x9a, 0x9b, 0x14, 0x15, 0x9e, 0x1a, ' ', 0xa0, 0x0161, 0xe4, 0x0105, 0x012f, 0x016b, 0xe5, 0x0113, 0x017e, 0xa2, '.', '<', '(', '+', '|', '&', 0xe9, 0x0119, 0x0117, 0x010d, 0x0173, 0x201e, 0x201c, 0x0123, 0xdf, '!', '$', '*', ')', ';', 0xac, '-', '/', 0x0160, 0xc4, 0x0104, 0x012e, 0x016a, 0xc5, 0x0112, 0x017d, 0xa6, ',', '%', '_', '>', '?', 0xf8, 0xc9, 0x0118, 0x0116, 0x010c, 0x0172, 0x012a, 0x013b, 0x0122, '`', ':', '#', '@', '\'', '=', '\"'}));
	$assignStatic(IBM1112$Holder::b2c, IBM1112$Holder::b2cTable->toCharArray());
	$assignStatic(IBM1112$Holder::c2b, $new($chars, 768));
	$assignStatic(IBM1112$Holder::c2bIndex, $new($chars, 256));
	{
		$var($chars, b2cMap, IBM1112$Holder::b2c);
		$var($chars, c2bNR, nullptr);
		$assign(b2cMap, IBM1112$Holder::b2cTable->toCharArray());
		b2cMap->set(165, (char16_t)0xfffd);
		$assign(c2bNR, $new($chars, 2));
		c2bNR->set(0, 21);
		c2bNR->set(1, 133);
		$SingleByte::initC2B(b2cMap, c2bNR, IBM1112$Holder::c2b, IBM1112$Holder::c2bIndex);
	}
}

IBM1112$Holder::IBM1112$Holder() {
}

$Class* IBM1112$Holder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"b2cTable", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM1112$Holder, b2cTable)},
		{"b2c", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM1112$Holder, b2c)},
		{"c2b", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM1112$Holder, c2b)},
		{"c2bIndex", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IBM1112$Holder, c2bIndex)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(IBM1112$Holder, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.cs.ext.IBM1112$Holder", "sun.nio.cs.ext.IBM1112", "Holder", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.cs.ext.IBM1112$Holder",
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
		"sun.nio.cs.ext.IBM1112"
	};
	$loadClass(IBM1112$Holder, name, initialize, &classInfo$$, IBM1112$Holder::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(IBM1112$Holder);
	});
	return class$;
}

$Class* IBM1112$Holder::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun