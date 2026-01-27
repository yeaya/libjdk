#include <sun/text/resources/ext/CollationData_el.h>

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

$MethodInfo _CollationData_el_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CollationData_el, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CollationData_el, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CollationData_el_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.CollationData_el",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_CollationData_el_MethodInfo_
};

$Object* allocate$CollationData_el($Class* clazz) {
	return $of($alloc(CollationData_el));
}

void CollationData_el::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* CollationData_el::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		$of("Rule"_s),
		$of(u"& ͡ = · = ϳ & µ < ʹ < ͵ < ͺ < ; < ΄ < ΅ & Z < α , Α ; ά , Ά < β , Β ; ϐ < γ , Γ < δ , Δ < ε , Ε ; έ , Έ < ζ , Ζ < η , Η ; ή , Ή < θ , Θ ; ϑ < ι , Ι ; ί , Ί ; ϊ , Ϊ ; ΐ < κ , Κ ; ϰ < λ , Λ < μ , Μ < ν , Ν < ξ , Ξ < ο , Ο ; ό , Ό < π , Π ; ϖ < ρ , Ρ ; ϱ < σ , ς , Σ ; ϲ < τ , Τ < υ , Υ ; ύ , Ύ ; ϋ , Ϋ = ϔ ; ΰ ; ϒ ; ϓ < φ , Φ ; ϕ < χ , Χ < ψ , Ψ < ω , Ω ; ώ , Ώ , Ϛ , Ϝ , Ϟ , Ϡ < ϣ , Ϣ < ϥ , Ϥ < ϧ , Ϧ < ϩ , Ϩ < ϫ , Ϫ < ϭ , Ϭ < ϯ , Ϯ & μ = µ "_s)
	})});
}

CollationData_el::CollationData_el() {
}

$Class* CollationData_el::load$($String* name, bool initialize) {
	$loadClass(CollationData_el, name, initialize, &_CollationData_el_ClassInfo_, allocate$CollationData_el);
	return class$;
}

$Class* CollationData_el::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun