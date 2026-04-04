#include <com/sun/org/apache/xpath/internal/SourceTree.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {

void SourceTree::init$(int32_t root, $String* url) {
	this->m_root = root;
	$set(this, m_url, url);
}

SourceTree::SourceTree() {
}

$Class* SourceTree::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"m_url", "Ljava/lang/String;", nullptr, $PUBLIC, $field(SourceTree, m_url)},
		{"m_root", "I", nullptr, $PUBLIC, $field(SourceTree, m_root)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(ILjava/lang/String;)V", nullptr, $PUBLIC, $method(SourceTree, init$, void, int32_t, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.xpath.internal.SourceTree",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(SourceTree, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SourceTree);
	});
	return class$;
}

$Class* SourceTree::class$ = nullptr;

					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com