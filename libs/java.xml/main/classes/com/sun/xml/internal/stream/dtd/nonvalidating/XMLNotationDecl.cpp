#include <com/sun/xml/internal/stream/dtd/nonvalidating/XMLNotationDecl.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace xml {
			namespace internal {
				namespace stream {
					namespace dtd {
						namespace nonvalidating {

void XMLNotationDecl::init$() {
}

void XMLNotationDecl::setValues($String* name, $String* publicId, $String* systemId, $String* baseSystemId) {
	$set(this, name, name);
	$set(this, publicId, publicId);
	$set(this, systemId, systemId);
	$set(this, baseSystemId, baseSystemId);
}

void XMLNotationDecl::clear() {
	$set(this, name, nullptr);
	$set(this, publicId, nullptr);
	$set(this, systemId, nullptr);
	$set(this, baseSystemId, nullptr);
}

XMLNotationDecl::XMLNotationDecl() {
}

$Class* XMLNotationDecl::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"name", "Ljava/lang/String;", nullptr, $PUBLIC, $field(XMLNotationDecl, name)},
		{"publicId", "Ljava/lang/String;", nullptr, $PUBLIC, $field(XMLNotationDecl, publicId)},
		{"systemId", "Ljava/lang/String;", nullptr, $PUBLIC, $field(XMLNotationDecl, systemId)},
		{"baseSystemId", "Ljava/lang/String;", nullptr, $PUBLIC, $field(XMLNotationDecl, baseSystemId)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(XMLNotationDecl, init$, void)},
		{"clear", "()V", nullptr, $PUBLIC, $virtualMethod(XMLNotationDecl, clear, void)},
		{"setValues", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(XMLNotationDecl, setValues, void, $String*, $String*, $String*, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.xml.internal.stream.dtd.nonvalidating.XMLNotationDecl",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(XMLNotationDecl, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XMLNotationDecl);
	});
	return class$;
}

$Class* XMLNotationDecl::class$ = nullptr;

						} // nonvalidating
					} // dtd
				} // stream
			} // internal
		} // xml
	} // sun
} // com