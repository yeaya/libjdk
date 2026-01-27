#include <com/sun/org/apache/xml/internal/utils/Trie.h>

#include <com/sun/org/apache/xml/internal/utils/Trie$Node.h>
#include <jcpp.h>

#undef ALPHA_SIZE

using $Trie$Node = ::com::sun::org::apache::xml::internal::utils::Trie$Node;
using $Character = ::java::lang::Character;
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

$FieldInfo _Trie_FieldInfo_[] = {
	{"ALPHA_SIZE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Trie, ALPHA_SIZE)},
	{"m_Root", "Lcom/sun/org/apache/xml/internal/utils/Trie$Node;", nullptr, 0, $field(Trie, m_Root)},
	{"m_charBuffer", "[C", nullptr, $PRIVATE, $field(Trie, m_charBuffer)},
	{}
};

$MethodInfo _Trie_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(Trie, init$, void)},
	{"get", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Trie, get, $Object*, $String*)},
	{"put", "(Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Trie, put, $Object*, $String*, Object$*)},
	{}
};

$InnerClassInfo _Trie_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xml.internal.utils.Trie$Node", "com.sun.org.apache.xml.internal.utils.Trie", "Node", 0},
	{}
};

$ClassInfo _Trie_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.utils.Trie",
	"java.lang.Object",
	nullptr,
	_Trie_FieldInfo_,
	_Trie_MethodInfo_,
	nullptr,
	nullptr,
	_Trie_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.xml.internal.utils.Trie$Node"
};

$Object* allocate$Trie($Class* clazz) {
	return $of($alloc(Trie));
}

void Trie::init$() {
	$set(this, m_charBuffer, $new($chars, 0));
	$set(this, m_Root, $new($Trie$Node, this));
}

$Object* Trie::put($String* key, Object$* value) {
	$useLocalCurrentObjectStackCache();
	int32_t len = $nc(key)->length();
	if (len > $nc(this->m_charBuffer)->length) {
		$set(this, m_charBuffer, $new($chars, len));
	}
	$var($Trie$Node, node, this->m_Root);
	for (int32_t i = 0; i < len; ++i) {
		$var($Trie$Node, nextNode, $nc($nc(node)->m_nextChar)->get($Character::toUpperCase(key->charAt(i))));
		if (nextNode != nullptr) {
			$assign(node, nextNode);
		} else {
			for (; i < len; ++i) {
				$var($Trie$Node, newNode, $new($Trie$Node, this));
				$nc($nc(node)->m_nextChar)->set($Character::toUpperCase(key->charAt(i)), newNode);
				$nc(node->m_nextChar)->set($Character::toLowerCase(key->charAt(i)), newNode);
				$assign(node, newNode);
			}
			break;
		}
	}
	$var($Object, ret, $nc(node)->m_Value);
	$set(node, m_Value, value);
	return $of(ret);
}

$Object* Trie::get($String* key) {
	int32_t len = $nc(key)->length();
	if ($nc(this->m_charBuffer)->length < len) {
		return $of(nullptr);
	}
	$var($Trie$Node, node, this->m_Root);
	switch (len) {
	case 0:
		{
			{
				return $of(nullptr);
			}
		}
	case 1:
		{
			{
				char16_t ch = key->charAt(0);
				if (ch < Trie::ALPHA_SIZE) {
					$assign(node, $nc($nc(node)->m_nextChar)->get(ch));
					if (node != nullptr) {
						return $of(node->m_Value);
					}
				}
				return $of(nullptr);
			}
		}
	default:
		{
			{
				key->getChars(0, len, this->m_charBuffer, 0);
				for (int32_t i = 0; i < len; ++i) {
					char16_t ch = $nc(this->m_charBuffer)->get(i);
					if (Trie::ALPHA_SIZE <= ch) {
						return $of(nullptr);
					}
					$assign(node, $nc($nc(node)->m_nextChar)->get(ch));
					if (node == nullptr) {
						return $of(nullptr);
					}
				}
				return $of($nc(node)->m_Value);
			}
		}
	}
}

Trie::Trie() {
}

$Class* Trie::load$($String* name, bool initialize) {
	$loadClass(Trie, name, initialize, &_Trie_ClassInfo_, allocate$Trie);
	return class$;
}

$Class* Trie::class$ = nullptr;

						} // utils
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com