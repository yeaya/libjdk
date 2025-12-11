#include <com/sun/jarsigner/ContentSigner.h>

#include <com/sun/jarsigner/ContentSignerParameters.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace com {
	namespace sun {
		namespace jarsigner {

$NamedAttribute ContentSigner_Attribute_var$0[] = {
	{"since", 's', "9"},
	{"forRemoval", 'Z', "true"},
	{}
};

$CompoundAttribute _ContentSigner_Annotations_[] = {
	{"Ljava/lang/Deprecated;", ContentSigner_Attribute_var$0},
	{}
};

$MethodInfo _ContentSigner_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ContentSigner::*)()>(&ContentSigner::init$))},
	{"generateSignedData", "(Lcom/sun/jarsigner/ContentSignerParameters;ZZ)[B", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.security.NoSuchAlgorithmException,java.security.cert.CertificateException,java.io.IOException"},
	{}
};

$ClassInfo _ContentSigner_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.jarsigner.ContentSigner",
	"java.lang.Object",
	nullptr,
	nullptr,
	_ContentSigner_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_ContentSigner_Annotations_
};

$Object* allocate$ContentSigner($Class* clazz) {
	return $of($alloc(ContentSigner));
}

void ContentSigner::init$() {
}

ContentSigner::ContentSigner() {
}

$Class* ContentSigner::load$($String* name, bool initialize) {
	$loadClass(ContentSigner, name, initialize, &_ContentSigner_ClassInfo_, allocate$ContentSigner);
	return class$;
}

$Class* ContentSigner::class$ = nullptr;

		} // jarsigner
	} // sun
} // com