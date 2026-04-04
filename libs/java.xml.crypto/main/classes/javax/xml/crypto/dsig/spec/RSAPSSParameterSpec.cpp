#include <javax/xml/crypto/dsig/spec/RSAPSSParameterSpec.h>
#include <java/security/spec/PSSParameterSpec.h>
#include <java/util/Objects.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PSSParameterSpec = ::java::security::spec::PSSParameterSpec;
using $Objects = ::java::util::Objects;

namespace javax {
	namespace xml {
		namespace crypto {
			namespace dsig {
				namespace spec {

void RSAPSSParameterSpec::init$($PSSParameterSpec* spec) {
	$set(this, spec, $cast($PSSParameterSpec, $Objects::requireNonNull(spec)));
}

$PSSParameterSpec* RSAPSSParameterSpec::getPSSParameterSpec() {
	return this->spec;
}

RSAPSSParameterSpec::RSAPSSParameterSpec() {
}

$Class* RSAPSSParameterSpec::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"spec", "Ljava/security/spec/PSSParameterSpec;", nullptr, $PRIVATE | $FINAL, $field(RSAPSSParameterSpec, spec)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/security/spec/PSSParameterSpec;)V", nullptr, $PUBLIC, $method(RSAPSSParameterSpec, init$, void, $PSSParameterSpec*)},
		{"getPSSParameterSpec", "()Ljava/security/spec/PSSParameterSpec;", nullptr, $PUBLIC, $method(RSAPSSParameterSpec, getPSSParameterSpec, $PSSParameterSpec*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"javax.xml.crypto.dsig.spec.RSAPSSParameterSpec",
		"java.lang.Object",
		"javax.xml.crypto.dsig.spec.SignatureMethodParameterSpec",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(RSAPSSParameterSpec, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RSAPSSParameterSpec);
	});
	return class$;
}

$Class* RSAPSSParameterSpec::class$ = nullptr;

				} // spec
			} // dsig
		} // crypto
	} // xml
} // javax