#include <com/sun/org/apache/xalan/internal/xsltc/dom/SortSettings.h>
#include <com/sun/org/apache/xalan/internal/xsltc/runtime/AbstractTranslet.h>
#include <java/text/Collator.h>
#include <java/util/Locale.h>
#include <jcpp.h>

using $CollatorArray = $Array<::java::text::Collator>;
using $LocaleArray = $Array<::java::util::Locale>;
using $AbstractTranslet = ::com::sun::org::apache::xalan::internal::xsltc::runtime::AbstractTranslet;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace dom {

void SortSettings::init$($AbstractTranslet* translet, $ints* sortOrders, $ints* types, $LocaleArray* locales, $CollatorArray* collators, $StringArray* caseOrders) {
	$set(this, _translet, translet);
	$set(this, _sortOrders, sortOrders);
	$set(this, _types, types);
	$set(this, _locales, locales);
	$set(this, _collators, collators);
	$set(this, _caseOrders, caseOrders);
}

$AbstractTranslet* SortSettings::getTranslet() {
	return this->_translet;
}

$ints* SortSettings::getSortOrders() {
	return this->_sortOrders;
}

$ints* SortSettings::getTypes() {
	return this->_types;
}

$LocaleArray* SortSettings::getLocales() {
	return this->_locales;
}

$CollatorArray* SortSettings::getCollators() {
	return this->_collators;
}

$StringArray* SortSettings::getCaseOrders() {
	return this->_caseOrders;
}

SortSettings::SortSettings() {
}

$Class* SortSettings::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"_translet", "Lcom/sun/org/apache/xalan/internal/xsltc/runtime/AbstractTranslet;", nullptr, $PRIVATE, $field(SortSettings, _translet)},
		{"_sortOrders", "[I", nullptr, $PRIVATE, $field(SortSettings, _sortOrders)},
		{"_types", "[I", nullptr, $PRIVATE, $field(SortSettings, _types)},
		{"_locales", "[Ljava/util/Locale;", nullptr, $PRIVATE, $field(SortSettings, _locales)},
		{"_collators", "[Ljava/text/Collator;", nullptr, $PRIVATE, $field(SortSettings, _collators)},
		{"_caseOrders", "[Ljava/lang/String;", nullptr, $PRIVATE, $field(SortSettings, _caseOrders)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/org/apache/xalan/internal/xsltc/runtime/AbstractTranslet;[I[I[Ljava/util/Locale;[Ljava/text/Collator;[Ljava/lang/String;)V", nullptr, 0, $method(SortSettings, init$, void, $AbstractTranslet*, $ints*, $ints*, $LocaleArray*, $CollatorArray*, $StringArray*)},
		{"getCaseOrders", "()[Ljava/lang/String;", nullptr, 0, $method(SortSettings, getCaseOrders, $StringArray*)},
		{"getCollators", "()[Ljava/text/Collator;", nullptr, 0, $method(SortSettings, getCollators, $CollatorArray*)},
		{"getLocales", "()[Ljava/util/Locale;", nullptr, 0, $method(SortSettings, getLocales, $LocaleArray*)},
		{"getSortOrders", "()[I", nullptr, 0, $method(SortSettings, getSortOrders, $ints*)},
		{"getTranslet", "()Lcom/sun/org/apache/xalan/internal/xsltc/runtime/AbstractTranslet;", nullptr, 0, $method(SortSettings, getTranslet, $AbstractTranslet*)},
		{"getTypes", "()[I", nullptr, 0, $method(SortSettings, getTypes, $ints*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"com.sun.org.apache.xalan.internal.xsltc.dom.SortSettings",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(SortSettings, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SortSettings);
	});
	return class$;
}

$Class* SortSettings::class$ = nullptr;

							} // dom
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com