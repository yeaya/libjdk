#include <com/sun/org/apache/xml/internal/utils/Trie$Node.h>
#include <com/sun/org/apache/xml/internal/utils/Trie.h>
#include <jcpp.h>

using $Trie$NodeArray = $Array<::com::sun::org::apache::xml::internal::utils::Trie$Node>;
using $Trie = ::com::sun::org::apache::xml::internal::utils::Trie;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace utils {

void Trie$Node::init$($Trie* this$0) {
	$set(this, this$0, this$0);
	$set(this, m_nextChar, $new($Trie$NodeArray, 128));
	$set(this, m_Value, nullptr);
}

Trie$Node::Trie$Node() {
}

$Class* Trie$Node::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/org/apache/xml/internal/utils/Trie;", nullptr, $FINAL | $SYNTHETIC, $field(Trie$Node, this$0)},
		{"m_nextChar", "[Lcom/sun/org/apache/xml/internal/utils/Trie$Node;", nullptr, 0, $field(Trie$Node, m_nextChar)},
		{"m_Value", "Ljava/lang/Object;", nullptr, 0, $field(Trie$Node, m_Value)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/org/apache/xml/internal/utils/Trie;)V", nullptr, 0, $method(Trie$Node, init$, void, $Trie*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.xml.internal.utils.Trie$Node", "com.sun.org.apache.xml.internal.utils.Trie", "Node", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.org.apache.xml.internal.utils.Trie$Node",
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
		"com.sun.org.apache.xml.internal.utils.Trie"
	};
	$loadClass(Trie$Node, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Trie$Node);
	});
	return class$;
}

$Class* Trie$Node::class$ = nullptr;

						} // utils
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com