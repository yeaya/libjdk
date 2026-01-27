#include <com/sun/org/apache/xerces/internal/jaxp/validation/XMLSchema.h>

#include <com/sun/org/apache/xerces/internal/jaxp/validation/AbstractXMLSchema.h>
#include <com/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarPool.h>
#include <jcpp.h>

using $AbstractXMLSchema = ::com::sun::org::apache::xerces::internal::jaxp::validation::AbstractXMLSchema;
using $XMLGrammarPool = ::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarPool;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace jaxp {
							namespace validation {

$FieldInfo _XMLSchema_FieldInfo_[] = {
	{"fGrammarPool", "Lcom/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarPool;", nullptr, $PRIVATE | $FINAL, $field(XMLSchema, fGrammarPool)},
	{"fFullyComposed", "Z", nullptr, $PRIVATE | $FINAL, $field(XMLSchema, fFullyComposed)},
	{}
};

$MethodInfo _XMLSchema_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarPool;)V", nullptr, $PUBLIC, $method(XMLSchema, init$, void, $XMLGrammarPool*)},
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarPool;Z)V", nullptr, $PUBLIC, $method(XMLSchema, init$, void, $XMLGrammarPool*, bool)},
	{"getGrammarPool", "()Lcom/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarPool;", nullptr, $PUBLIC, $virtualMethod(XMLSchema, getGrammarPool, $XMLGrammarPool*)},
	{"isFullyComposed", "()Z", nullptr, $PUBLIC, $virtualMethod(XMLSchema, isFullyComposed, bool)},
	{}
};

$ClassInfo _XMLSchema_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.jaxp.validation.XMLSchema",
	"com.sun.org.apache.xerces.internal.jaxp.validation.AbstractXMLSchema",
	nullptr,
	_XMLSchema_FieldInfo_,
	_XMLSchema_MethodInfo_
};

$Object* allocate$XMLSchema($Class* clazz) {
	return $of($alloc(XMLSchema));
}

void XMLSchema::init$($XMLGrammarPool* grammarPool) {
	XMLSchema::init$(grammarPool, true);
}

void XMLSchema::init$($XMLGrammarPool* grammarPool, bool fullyComposed) {
	$AbstractXMLSchema::init$();
	$set(this, fGrammarPool, grammarPool);
	this->fFullyComposed = fullyComposed;
}

$XMLGrammarPool* XMLSchema::getGrammarPool() {
	return this->fGrammarPool;
}

bool XMLSchema::isFullyComposed() {
	return this->fFullyComposed;
}

XMLSchema::XMLSchema() {
}

$Class* XMLSchema::load$($String* name, bool initialize) {
	$loadClass(XMLSchema, name, initialize, &_XMLSchema_ClassInfo_, allocate$XMLSchema);
	return class$;
}

$Class* XMLSchema::class$ = nullptr;

							} // validation
						} // jaxp
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com