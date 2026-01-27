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

$FieldInfo _Trie$Node_FieldInfo_[] = {
	{"this$0", "Lcom/sun/org/apache/xml/internal/utils/Trie;", nullptr, $FINAL | $SYNTHETIC, $field(Trie$Node, this$0)},
	{"m_nextChar", "[Lcom/sun/org/apache/xml/internal/utils/Trie$Node;", nullptr, 0, $field(Trie$Node, m_nextChar)},
	{"m_Value", "Ljava/lang/Object;", nullptr, 0, $field(Trie$Node, m_Value)},
	{}
};

$MethodInfo _Trie$Node_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xml/internal/utils/Trie;)V", nullptr, 0, $method(Trie$Node, init$, void, $Trie*)},
	{}
};

$InnerClassInfo _Trie$Node_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xml.internal.utils.Trie$Node", "com.sun.org.apache.xml.internal.utils.Trie", "Node", 0},
	{}
};

$ClassInfo _Trie$Node_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xml.internal.utils.Trie$Node",
	"java.lang.Object",
	nullptr,
	_Trie$Node_FieldInfo_,
	_Trie$Node_MethodInfo_,
	nullptr,
	nullptr,
	_Trie$Node_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xml.internal.utils.Trie"
};

$Object* allocate$Trie$Node($Class* clazz) {
	return $of($alloc(Trie$Node));
}

void Trie$Node::init$($Trie* this$0) {
	$set(this, this$0, this$0);
	$set(this, m_nextChar, $new($Trie$NodeArray, 128));
	$set(this, m_Value, nullptr);
}

Trie$Node::Trie$Node() {
}

$Class* Trie$Node::load$($String* name, bool initialize) {
	$loadClass(Trie$Node, name, initialize, &_Trie$Node_ClassInfo_, allocate$Trie$Node);
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