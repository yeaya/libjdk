#include <com/sun/org/apache/xerces/internal/impl/xs/util/XSInputSource.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLInputSource.h>
#include <com/sun/org/apache/xerces/internal/xs/XSObject.h>
#include <jcpp.h>

using $SchemaGrammarArray = $Array<::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar>;
using $XSObjectArray = $Array<::com::sun::org::apache::xerces::internal::xs::XSObject>;
using $XMLInputSource = ::com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {
								namespace util {

void XSInputSource::init$($SchemaGrammarArray* grammars) {
	$XMLInputSource::init$(nullptr, nullptr, nullptr, false);
	$set(this, fGrammars, grammars);
	$set(this, fComponents, nullptr);
}

void XSInputSource::init$($XSObjectArray* component) {
	$XMLInputSource::init$(nullptr, nullptr, nullptr, false);
	$set(this, fGrammars, nullptr);
	$set(this, fComponents, component);
}

$SchemaGrammarArray* XSInputSource::getGrammars() {
	return this->fGrammars;
}

void XSInputSource::setGrammars($SchemaGrammarArray* grammars) {
	$set(this, fGrammars, grammars);
}

$XSObjectArray* XSInputSource::getComponents() {
	return this->fComponents;
}

void XSInputSource::setComponents($XSObjectArray* components) {
	$set(this, fComponents, components);
}

XSInputSource::XSInputSource() {
}

$Class* XSInputSource::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"fGrammars", "[Lcom/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar;", nullptr, $PRIVATE, $field(XSInputSource, fGrammars)},
		{"fComponents", "[Lcom/sun/org/apache/xerces/internal/xs/XSObject;", nullptr, $PRIVATE, $field(XSInputSource, fComponents)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "([Lcom/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar;)V", nullptr, $PUBLIC, $method(XSInputSource, init$, void, $SchemaGrammarArray*)},
		{"<init>", "([Lcom/sun/org/apache/xerces/internal/xs/XSObject;)V", nullptr, $PUBLIC, $method(XSInputSource, init$, void, $XSObjectArray*)},
		{"getComponents", "()[Lcom/sun/org/apache/xerces/internal/xs/XSObject;", nullptr, $PUBLIC, $method(XSInputSource, getComponents, $XSObjectArray*)},
		{"getGrammars", "()[Lcom/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar;", nullptr, $PUBLIC, $method(XSInputSource, getGrammars, $SchemaGrammarArray*)},
		{"setComponents", "([Lcom/sun/org/apache/xerces/internal/xs/XSObject;)V", nullptr, $PUBLIC, $method(XSInputSource, setComponents, void, $XSObjectArray*)},
		{"setGrammars", "([Lcom/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar;)V", nullptr, $PUBLIC, $method(XSInputSource, setGrammars, void, $SchemaGrammarArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.org.apache.xerces.internal.impl.xs.util.XSInputSource",
		"com.sun.org.apache.xerces.internal.xni.parser.XMLInputSource",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(XSInputSource, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XSInputSource);
	});
	return class$;
}

$Class* XSInputSource::class$ = nullptr;

								} // util
							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com