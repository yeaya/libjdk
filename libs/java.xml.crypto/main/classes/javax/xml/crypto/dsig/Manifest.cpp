#include <javax/xml/crypto/dsig/Manifest.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef TYPE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;

namespace javax {
	namespace xml {
		namespace crypto {
			namespace dsig {

$String* Manifest::TYPE = nullptr;

void Manifest::clinit$($Class* clazz) {
	$assignStatic(Manifest::TYPE, "http://www.w3.org/2000/09/xmldsig#Manifest"_s);
}

$Class* Manifest::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"TYPE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Manifest, TYPE)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"getId", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Manifest, getId, $String*)},
		{"getReferences", "()Ljava/util/List;", "()Ljava/util/List<Ljavax/xml/crypto/dsig/Reference;>;", $PUBLIC | $ABSTRACT, $virtualMethod(Manifest, getReferences, $List*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.xml.crypto.dsig.Manifest",
		nullptr,
		"javax.xml.crypto.XMLStructure",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Manifest, name, initialize, &classInfo$$, Manifest::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Manifest);
	});
	return class$;
}

$Class* Manifest::class$ = nullptr;

			} // dsig
		} // crypto
	} // xml
} // javax