#include <sun/text/resources/ext/CollationData_hi.h>
#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace sun {
	namespace text {
		namespace resources {
			namespace ext {

void CollationData_hi::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* CollationData_hi::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		"Rule"_s,
		u"< ँ < ं < ः < अ< आ < इ < ई < उ< ऊ < ऋ < ॠ < ऎ< ए < ऌ < ॡ < ऐ< ऍ < ऒ < ओ < औ< ऑ < क < क़ < ख< ख़ < ग < ग़ < घ< ङ < च < छ < ज< ज़ < झ < ञ < ट< ठ < ड < ड़ < ढ< ढ़ < ण < त < थ< द < ध < न < ऩ< प < फ < फ़ < ब< भ < म < य < य़< र < ऱ < ल < ळ< ऴ < व < श < ष< स < ह < ा < ि< ी < ु < ू < ृ< ॄ < ॆ < े < ै< ॅ < ॊ < ो < ौ< ॉ < ् < ़ < ऽ< ॐ < ॑ < ॒ < ॓< ॔ < ॢ < ॣ < ।< ॥ < ० < १ < २< ३ < ४ < ५ < ६< ७ < ८ < ९ < ॰"_s
	})});
}

CollationData_hi::CollationData_hi() {
}

$Class* CollationData_hi::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CollationData_hi, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CollationData_hi, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.text.resources.ext.CollationData_hi",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CollationData_hi, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CollationData_hi);
	});
	return class$;
}

$Class* CollationData_hi::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun