#include <com/sun/org/apache/xml/internal/serializer/ToHTMLStream$Trie$Node.h>
#include <com/sun/org/apache/xml/internal/serializer/ToHTMLStream$Trie.h>
#include <jcpp.h>

using $ToHTMLStream$Trie$NodeArray = $Array<::com::sun::org::apache::xml::internal::serializer::ToHTMLStream$Trie$Node>;
using $ToHTMLStream$Trie = ::com::sun::org::apache::xml::internal::serializer::ToHTMLStream$Trie;
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
						namespace serializer {

void ToHTMLStream$Trie$Node::init$($ToHTMLStream$Trie* this$0) {
	$set(this, this$0, this$0);
	$set(this, m_nextChar, $new($ToHTMLStream$Trie$NodeArray, 128));
	$set(this, m_Value, nullptr);
}

ToHTMLStream$Trie$Node::ToHTMLStream$Trie$Node() {
}

$Class* ToHTMLStream$Trie$Node::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/org/apache/xml/internal/serializer/ToHTMLStream$Trie;", nullptr, $FINAL | $SYNTHETIC, $field(ToHTMLStream$Trie$Node, this$0)},
		{"m_nextChar", "[Lcom/sun/org/apache/xml/internal/serializer/ToHTMLStream$Trie$Node;", nullptr, $FINAL, $field(ToHTMLStream$Trie$Node, m_nextChar)},
		{"m_Value", "Ljava/lang/Object;", nullptr, 0, $field(ToHTMLStream$Trie$Node, m_Value)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/org/apache/xml/internal/serializer/ToHTMLStream$Trie;)V", nullptr, 0, $method(ToHTMLStream$Trie$Node, init$, void, $ToHTMLStream$Trie*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.xml.internal.serializer.ToHTMLStream$Trie", "com.sun.org.apache.xml.internal.serializer.ToHTMLStream", "Trie", $STATIC},
		{"com.sun.org.apache.xml.internal.serializer.ToHTMLStream$Trie$Node", "com.sun.org.apache.xml.internal.serializer.ToHTMLStream$Trie", "Node", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.org.apache.xml.internal.serializer.ToHTMLStream$Trie$Node",
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
		"com.sun.org.apache.xml.internal.serializer.ToHTMLStream"
	};
	$loadClass(ToHTMLStream$Trie$Node, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ToHTMLStream$Trie$Node);
	});
	return class$;
}

$Class* ToHTMLStream$Trie$Node::class$ = nullptr;

						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com