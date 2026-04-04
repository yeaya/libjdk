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
		this->next->clear();
		$set(this, next, nullptr);
	}
}

XMLGrammarPoolImpl$Entry::XMLGrammarPoolImpl$Entry() {
}

$Class* XMLGrammarPoolImpl$Entry::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"hash", "I", nullptr, $PUBLIC, $field(XMLGrammarPoolImpl$Entry, hash)},
		{"desc", "Lcom/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarDescription;", nullptr, $PUBLIC, $field(XMLGrammarPoolImpl$Entry, desc)},
		{"grammar", "Lcom/sun/org/apache/xerces/internal/xni/grammars/Grammar;", nullptr, $PUBLIC, $field(XMLGrammarPoolImpl$Entry, grammar)},
		{"next", "Lcom/sun/org/apache/xerces/internal/util/XMLGrammarPoolImpl$Entry;", nullptr, $PUBLIC, $field(XMLGrammarPoolImpl$Entry, next)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(ILcom/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarDescription;Lcom/sun/org/apache/xerces/internal/xni/grammars/Grammar;Lcom/sun/org/apache/xerces/internal/util/XMLGrammarPoolImpl$Entry;)V", nullptr, $PROTECTED, $method(XMLGrammarPoolImpl$Entry, init$, void, int32_t, $XMLGrammarDescription*, $Grammar*, XMLGrammarPoolImpl$Entry*)},
		{"clear", "()V", nullptr, $PROTECTED, $method(XMLGrammarPoolImpl$Entry, clear, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.xerces.internal.util.XMLGrammarPoolImpl$Entry", "com.sun.org.apache.xerces.internal.util.XMLGrammarPoolImpl", "Entry", $PROTECTED | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.org.apache.xerces.internal.util.XMLGrammarPoolImpl$Entry",
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
		"com.sun.org.apache.xerces.internal.util.XMLGrammarPoolImpl"
	};
	$loadClass(XMLGrammarPoolImpl$Entry, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XMLGrammarPoolImpl$Entry);
	});
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