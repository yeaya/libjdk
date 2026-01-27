#include <com/sun/org/apache/xerces/internal/util/XMLGrammarPoolImpl$Entry.h>

#include <com/sun/org/apache/xerces/internal/util/XMLGrammarPoolImpl.h>
#include <com/sun/org/apache/xerces/internal/xni/grammars/Grammar.h>
#include <com/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarDescription.h>
#include <jcpp.h>

using $Grammar = ::com::sun::org::apache::xerces::internal::xni::grammars::Grammar;
using $XMLGrammarDescription = ::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarDescription;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace util {

$FieldInfo _XMLGrammarPoolImpl$Entry_FieldInfo_[] = {
	{"hash", "I", nullptr, $PUBLIC, $field(XMLGrammarPoolImpl$Entry, hash)},
	{"desc", "Lcom/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarDescription;", nullptr, $PUBLIC, $field(XMLGrammarPoolImpl$Entry, desc)},
	{"grammar", "Lcom/sun/org/apache/xerces/internal/xni/grammars/Grammar;", nullptr, $PUBLIC, $field(XMLGrammarPoolImpl$Entry, grammar)},
	{"next", "Lcom/sun/org/apache/xerces/internal/util/XMLGrammarPoolImpl$Entry;", nullptr, $PUBLIC, $field(XMLGrammarPoolImpl$Entry, next)},
	{}
};

$MethodInfo _XMLGrammarPoolImpl$Entry_MethodInfo_[] = {
	{"<init>", "(ILcom/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarDescription;Lcom/sun/org/apache/xerces/internal/xni/grammars/Grammar;Lcom/sun/org/apache/xerces/internal/util/XMLGrammarPoolImpl$Entry;)V", nullptr, $PROTECTED, $method(XMLGrammarPoolImpl$Entry, init$, void, int32_t, $XMLGrammarDescription*, $Grammar*, XMLGrammarPoolImpl$Entry*)},
	{"clear", "()V", nullptr, $PROTECTED, $method(XMLGrammarPoolImpl$Entry, clear, void)},
	{}
};

$InnerClassInfo _XMLGrammarPoolImpl$Entry_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.util.XMLGrammarPoolImpl$Entry", "com.sun.org.apache.xerces.internal.util.XMLGrammarPoolImpl", "Entry", $PROTECTED | $STATIC | $FINAL},
	{}
};

$ClassInfo _XMLGrammarPoolImpl$Entry_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.util.XMLGrammarPoolImpl$Entry",
	"java.lang.Object",
	nullptr,
	_XMLGrammarPoolImpl$Entry_FieldInfo_,
	_XMLGrammarPoolImpl$Entry_MethodInfo_,
	nullptr,
	nullptr,
	_XMLGrammarPoolImpl$Entry_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.util.XMLGrammarPoolImpl"
};

$Object* allocate$XMLGrammarPoolImpl$Entry($Class* clazz) {
	return $of($alloc(XMLGrammarPoolImpl$Entry));
}

void XMLGrammarPoolImpl$Entry::init$(int32_t hash, $XMLGrammarDescription* desc, $Grammar* grammar, XMLGrammarPoolImpl$Entry* next) {
	this->hash = hash;
	$set(this, desc, desc);
	$set(this, grammar, grammar);
	$set(this, next, next);
}

void XMLGrammarPoolImpl$Entry::clear() {
	$set(this, desc, nullptr);
	$set(this, grammar, nullptr);
	if (this->next != nullptr) {
		$nc(this->next)->clear();
		$set(this, next, nullptr);
	}
}

XMLGrammarPoolImpl$Entry::XMLGrammarPoolImpl$Entry() {
}

$Class* XMLGrammarPoolImpl$Entry::load$($String* name, bool initialize) {
	$loadClass(XMLGrammarPoolImpl$Entry, name, initialize, &_XMLGrammarPoolImpl$Entry_ClassInfo_, allocate$XMLGrammarPoolImpl$Entry);
	return class$;
}

$Class* XMLGrammarPoolImpl$Entry::class$ = nullptr;

						} // util
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com