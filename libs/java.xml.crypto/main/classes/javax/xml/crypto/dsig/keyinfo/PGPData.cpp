#include <javax/xml/crypto/dsig/keyinfo/PGPData.h>
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
				namespace keyinfo {

$String* PGPData::TYPE = nullptr;

void PGPData::clinit$($Class* clazz) {
	$assignStatic(PGPData::TYPE, "http://www.w3.org/2000/09/xmldsig#PGPData"_s);
}

$Class* PGPData::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"TYPE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PGPData, TYPE)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"getExternalElements", "()Ljava/util/List;", "()Ljava/util/List<Ljavax/xml/crypto/XMLStructure;>;", $PUBLIC | $ABSTRACT, $virtualMethod(PGPData, getExternalElements, $List*)},
		{"getKeyId", "()[B", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PGPData, getKeyId, $bytes*)},
		{"getKeyPacket", "()[B", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PGPData, getKeyPacket, $bytes*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.xml.crypto.dsig.keyinfo.PGPData",
		nullptr,
		"javax.xml.crypto.XMLStructure",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(PGPData, name, initialize, &classInfo$$, PGPData::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(PGPData);
	});
	return class$;
}

$Class* PGPData::class$ = nullptr;

				} // keyinfo
			} // dsig
		} // crypto
	} // xml
} // javax