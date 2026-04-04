#include <com/sun/org/apache/xml/internal/security/signature/VerifiedReference.h>
#include <java/util/Collections.h>
#include <java/util/List.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Collections = ::java::util::Collections;
using $List = ::java::util::List;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace signature {

void VerifiedReference::init$(bool valid, $String* uri, $List* manifestReferences) {
	this->valid = valid;
	$set(this, uri, uri);
	if (manifestReferences != nullptr) {
		$set(this, manifestReferences, manifestReferences);
	} else {
		$set(this, manifestReferences, $Collections::emptyList());
	}
}

bool VerifiedReference::isValid() {
	return this->valid;
}

$String* VerifiedReference::getUri() {
	return this->uri;
}

$List* VerifiedReference::getManifestReferences() {
	return $Collections::unmodifiableList(this->manifestReferences);
}

VerifiedReference::VerifiedReference() {
}

$Class* VerifiedReference::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"valid", "Z", nullptr, $PRIVATE | $FINAL, $field(VerifiedReference, valid)},
		{"uri", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(VerifiedReference, uri)},
		{"manifestReferences", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/org/apache/xml/internal/security/signature/VerifiedReference;>;", $PRIVATE | $FINAL, $field(VerifiedReference, manifestReferences)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(ZLjava/lang/String;Ljava/util/List;)V", "(ZLjava/lang/String;Ljava/util/List<Lcom/sun/org/apache/xml/internal/security/signature/VerifiedReference;>;)V", $PUBLIC, $method(VerifiedReference, init$, void, bool, $String*, $List*)},
		{"getManifestReferences", "()Ljava/util/List;", "()Ljava/util/List<Lcom/sun/org/apache/xml/internal/security/signature/VerifiedReference;>;", $PUBLIC, $virtualMethod(VerifiedReference, getManifestReferences, $List*)},
		{"getUri", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(VerifiedReference, getUri, $String*)},
		{"isValid", "()Z", nullptr, $PUBLIC, $virtualMethod(VerifiedReference, isValid, bool)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.xml.internal.security.signature.VerifiedReference",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(VerifiedReference, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(VerifiedReference);
	});
	return class$;
}

$Class* VerifiedReference::class$ = nullptr;

							} // signature
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com