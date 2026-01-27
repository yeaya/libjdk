#include <com/sun/org/apache/xml/internal/serializer/ToHTMLStream$Trie.h>

#include <com/sun/org/apache/xml/internal/serializer/ToHTMLStream$Trie$Node.h>
#include <com/sun/org/apache/xml/internal/serializer/ToHTMLStream.h>
#include <jcpp.h>

#undef ALPHA_SIZE

using $ToHTMLStream$Trie$Node = ::com::sun::org::apache::xml::internal::serializer::ToHTMLStream$Trie$Node;
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
						namespace serializer {

$FieldInfo _ToHTMLStream$Trie_FieldInfo_[] = {
	{"ALPHA_SIZE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ToHTMLStream$Trie, ALPHA_SIZE)},
	{"m_Root", "Lcom/sun/org/apache/xml/internal/serializer/ToHTMLStream$Trie$Node;", nullptr, $FINAL, $field(ToHTMLStream$Trie, m_Root)},
	{"m_charBuffer", "[C", nullptr, $PRIVATE, $field(ToHTMLStream$Trie, m_charBuffer)},
	{"m_lowerCaseOnly", "Z", nullptr, $PRIVATE | $FINAL, $field(ToHTMLStream$Trie, m_lowerCaseOnly)},
	{}
};

$MethodInfo _ToHTMLStream$Trie_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(ToHTMLStream$Trie, init$, void)},
	{"<init>", "(Z)V", nullptr, $PUBLIC, $method(ToHTMLStream$Trie, init$, void, bool)},
	{"<init>", "(Lcom/sun/org/apache/xml/internal/serializer/ToHTMLStream$Trie;)V", nullptr, $PUBLIC, $method(ToHTMLStream$Trie, init$, void, ToHTMLStream$Trie*)},
	{"get", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ToHTMLStream$Trie, get, $Object*, $String*)},
	{"get2", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ToHTMLStream$Trie, get2, $Object*, $String*)},
	{"getLongestKeyLength", "()I", nullptr, $PUBLIC, $virtualMethod(ToHTMLStream$Trie, getLongestKeyLength, int32_t)},
	{"put", "(Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ToHTMLStream$Trie, put, $Object*, $String*, Object$*)},
	{}
};

$InnerClassInfo _ToHTMLStream$Trie_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xml.internal.serializer.ToHTMLStream$Trie", "com.sun.org.apache.xml.internal.serializer.ToHTMLStream", "Trie", $STATIC},
	{"com.sun.org.apache.xml.internal.serializer.ToHTMLStream$Trie$Node", "com.sun.org.apache.xml.internal.serializer.ToHTMLStream$Trie", "Node", $PRIVATE},
	{}
};

$ClassInfo _ToHTMLStream$Trie_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xml.internal.serializer.ToHTMLStream$Trie",
	"java.lang.Object",
	nullptr,
	_ToHTMLStream$Trie_FieldInfo_,
	_ToHTMLStream$Trie_MethodInfo_,
	nullptr,
	nullptr,
	_ToHTMLStream$Trie_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xml.internal.serializer.ToHTMLStream"
};

$Object* allocate$ToHTMLStream$Trie($Class* clazz) {
	return $of($alloc(ToHTMLStream$Trie));
}

void ToHTMLStream$Trie::init$() {
	$set(this, m_charBuffer, $new($chars, 0));
	$set(this, m_Root, $new($ToHTMLStream$Trie$Node, this));
	this->m_lowerCaseOnly = false;
}

void ToHTMLStream$Trie::init$(bool lowerCaseOnly) {
	$set(this, m_charBuffer, $new($chars, 0));
	$set(this, m_Root, $new($ToHTMLStream$Trie$Node, this));
	this->m_lowerCaseOnly = lowerCaseOnly;
}

$Object* ToHTMLStream$Trie::put($String* key, Object$* value) {
	$useLocalCurrentObjectStackCache();
	int32_t len = $nc(key)->length();
	if (len > $nc(this->m_charBuffer)->length) {
		$set(this, m_charBuffer, $new($chars, len));
	}
	$var($ToHTMLStream$Trie$Node, node, this->m_Root);
	for (int32_t i = 0; i < len; ++i) {
		$var($ToHTMLStream$Trie$Node, nextNode, $nc($nc(node)->m_nextChar)->get($Character::toLowerCase(key->charAt(i))));
		if (nextNode != nullptr) {
			$assign(node, nextNode);
		} else {
			for (; i < len; ++i) {
				$var($ToHTMLStream$Trie$Node, newNode, $new($ToHTMLStream$Trie$Node, this));
				if (this->m_lowerCaseOnly) {
					$nc($nc(node)->m_nextChar)->set($Character::toLowerCase(key->charAt(i)), newNode);
				} else {
					$nc($nc(node)->m_nextChar)->set($Character::toUpperCase(key->charAt(i)), newNode);
					$nc(node->m_nextChar)->set($Character::toLowerCase(key->charAt(i)), newNode);
				}
				$assign(node, newNode);
			}
			break;
		}
	}
	$var($Object, ret, $nc(node)->m_Value);
	$set(node, m_Value, value);
	return $of(ret);
}

$Object* ToHTMLStream$Trie::get($String* key) {
	int32_t len = $nc(key)->length();
	if ($nc(this->m_charBuffer)->length < len) {
		return $of(nullptr);
	}
	$var($ToHTMLStream$Trie$Node, node, this->m_Root);
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
				if (ch < ToHTMLStream$Trie::ALPHA_SIZE) {
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
				for (int32_t i = 0; i < len; ++i) {
					char16_t ch = key->charAt(i);
					if (ToHTMLStream$Trie::ALPHA_SIZE <= ch) {
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

void ToHTMLStream$Trie::init$(ToHTMLStream$Trie* existingTrie) {
	$set(this, m_charBuffer, $new($chars, 0));
	$set(this, m_Root, $nc(existingTrie)->m_Root);
	this->m_lowerCaseOnly = existingTrie->m_lowerCaseOnly;
	int32_t max = existingTrie->getLongestKeyLength();
	$set(this, m_charBuffer, $new($chars, max));
}

$Object* ToHTMLStream$Trie::get2($String* key) {
	int32_t len = $nc(key)->length();
	if ($nc(this->m_charBuffer)->length < len) {
		return $of(nullptr);
	}
	$var($ToHTMLStream$Trie$Node, node, this->m_Root);
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
				if (ch < ToHTMLStream$Trie::ALPHA_SIZE) {
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
					if (ToHTMLStream$Trie::ALPHA_SIZE <= ch) {
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

int32_t ToHTMLStream$Trie::getLongestKeyLength() {
	return $nc(this->m_charBuffer)->length;
}

ToHTMLStream$Trie::ToHTMLStream$Trie() {
}

$Class* ToHTMLStream$Trie::load$($String* name, bool initialize) {
	$loadClass(ToHTMLStream$Trie, name, initialize, &_ToHTMLStream$Trie_ClassInfo_, allocate$ToHTMLStream$Trie);
	return class$;
}

$Class* ToHTMLStream$Trie::class$ = nullptr;

						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com