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

$FieldInfo _ToHTMLStream$Trie$Node_FieldInfo_[] = {
	{"this$0", "Lcom/sun/org/apache/xml/internal/serializer/ToHTMLStream$Trie;", nullptr, $FINAL | $SYNTHETIC, $field(ToHTMLStream$Trie$Node, this$0)},
	{"m_nextChar", "[Lcom/sun/org/apache/xml/internal/serializer/ToHTMLStream$Trie$Node;", nullptr, $FINAL, $field(ToHTMLStream$Trie$Node, m_nextChar)},
	{"m_Value", "Ljava/lang/Object;", nullptr, 0, $field(ToHTMLStream$Trie$Node, m_Value)},
	{}
};

$MethodInfo _ToHTMLStream$Trie$Node_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xml/internal/serializer/ToHTMLStream$Trie;)V", nullptr, 0, $method(ToHTMLStream$Trie$Node, init$, void, $ToHTMLStream$Trie*)},
	{}
};

$InnerClassInfo _ToHTMLStream$Trie$Node_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xml.internal.serializer.ToHTMLStream$Trie", "com.sun.org.apache.xml.internal.serializer.ToHTMLStream", "Trie", $STATIC},
	{"com.sun.org.apache.xml.internal.serializer.ToHTMLStream$Trie$Node", "com.sun.org.apache.xml.internal.serializer.ToHTMLStream$Trie", "Node", $PRIVATE},
	{}
};

$ClassInfo _ToHTMLStream$Trie$Node_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xml.internal.serializer.ToHTMLStream$Trie$Node",
	"java.lang.Object",
	nullptr,
	_ToHTMLStream$Trie$Node_FieldInfo_,
	_ToHTMLStream$Trie$Node_MethodInfo_,
	nullptr,
	nullptr,
	_ToHTMLStream$Trie$Node_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xml.internal.serializer.ToHTMLStream"
};

$Object* allocate$ToHTMLStream$Trie$Node($Class* clazz) {
	return $of($alloc(ToHTMLStream$Trie$Node));
}

void ToHTMLStream$Trie$Node::init$($ToHTMLStream$Trie* this$0) {
	$set(this, this$0, this$0);
	$set(this, m_nextChar, $new($ToHTMLStream$Trie$NodeArray, 128));
	$set(this, m_Value, nullptr);
}

ToHTMLStream$Trie$Node::ToHTMLStream$Trie$Node() {
}

$Class* ToHTMLStream$Trie$Node::load$($String* name, bool initialize) {
	$loadClass(ToHTMLStream$Trie$Node, name, initialize, &_ToHTMLStream$Trie$Node_ClassInfo_, allocate$ToHTMLStream$Trie$Node);
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