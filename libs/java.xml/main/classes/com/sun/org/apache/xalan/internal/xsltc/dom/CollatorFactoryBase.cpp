#include <com/sun/org/apache/xalan/internal/xsltc/dom/CollatorFactoryBase.h>

#include <java/text/Collator.h>
#include <java/util/Locale.h>
#include <jcpp.h>

#undef DEFAULT_COLLATOR
#undef DEFAULT_LOCALE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Collator = ::java::text::Collator;
using $Locale = ::java::util::Locale;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace dom {

$FieldInfo _CollatorFactoryBase_FieldInfo_[] = {
	{"DEFAULT_LOCALE", "Ljava/util/Locale;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CollatorFactoryBase, DEFAULT_LOCALE)},
	{"DEFAULT_COLLATOR", "Ljava/text/Collator;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CollatorFactoryBase, DEFAULT_COLLATOR)},
	{}
};

$MethodInfo _CollatorFactoryBase_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CollatorFactoryBase, init$, void)},
	{"getCollator", "(Ljava/lang/String;Ljava/lang/String;)Ljava/text/Collator;", nullptr, $PUBLIC, $virtualMethod(CollatorFactoryBase, getCollator, $Collator*, $String*, $String*)},
	{"getCollator", "(Ljava/util/Locale;)Ljava/text/Collator;", nullptr, $PUBLIC, $virtualMethod(CollatorFactoryBase, getCollator, $Collator*, $Locale*)},
	{}
};

$ClassInfo _CollatorFactoryBase_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.dom.CollatorFactoryBase",
	"java.lang.Object",
	"com.sun.org.apache.xalan.internal.xsltc.CollatorFactory",
	_CollatorFactoryBase_FieldInfo_,
	_CollatorFactoryBase_MethodInfo_
};

$Object* allocate$CollatorFactoryBase($Class* clazz) {
	return $of($alloc(CollatorFactoryBase));
}

$Locale* CollatorFactoryBase::DEFAULT_LOCALE = nullptr;
$Collator* CollatorFactoryBase::DEFAULT_COLLATOR = nullptr;

void CollatorFactoryBase::init$() {
}

$Collator* CollatorFactoryBase::getCollator($String* lang, $String* country) {
	return $Collator::getInstance($$new($Locale, lang, country));
}

$Collator* CollatorFactoryBase::getCollator($Locale* locale) {
	if (locale == CollatorFactoryBase::DEFAULT_LOCALE) {
		return CollatorFactoryBase::DEFAULT_COLLATOR;
	} else {
		return $Collator::getInstance(locale);
	}
}

void clinit$CollatorFactoryBase($Class* class$) {
	$assignStatic(CollatorFactoryBase::DEFAULT_LOCALE, $Locale::getDefault());
	$assignStatic(CollatorFactoryBase::DEFAULT_COLLATOR, $Collator::getInstance());
}

CollatorFactoryBase::CollatorFactoryBase() {
}

$Class* CollatorFactoryBase::load$($String* name, bool initialize) {
	$loadClass(CollatorFactoryBase, name, initialize, &_CollatorFactoryBase_ClassInfo_, clinit$CollatorFactoryBase, allocate$CollatorFactoryBase);
	return class$;
}

$Class* CollatorFactoryBase::class$ = nullptr;

							} // dom
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com