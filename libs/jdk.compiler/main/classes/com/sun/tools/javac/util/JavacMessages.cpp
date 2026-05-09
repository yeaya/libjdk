#include <com/sun/tools/javac/util/JavacMessages.h>
#include <com/sun/tools/javac/api/DiagnosticFormatter.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Errors.h>
#include <com/sun/tools/javac/util/BasicDiagnosticFormatter.h>
#include <com/sun/tools/javac/util/Context$Key.h>
#include <com/sun/tools/javac/util/Context.h>
#include <com/sun/tools/javac/util/DiagnosticSource.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticInfo.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Error.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Factory.h>
#include <com/sun/tools/javac/util/JCDiagnostic.h>
#include <com/sun/tools/javac/util/JavacMessages$ResourceBundleHelper.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Options.h>
#include <com/sun/tools/javac/util/RawDiagnosticFormatter.h>
#include <java/io/Serializable.h>
#include <java/lang/Error.h>
#include <java/lang/InternalError.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/ref/SoftReference.h>
#include <java/text/MessageFormat.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/Locale.h>
#include <java/util/Map.h>
#include <java/util/MissingResourceException.h>
#include <java/util/ResourceBundle.h>
#include <javax/tools/Diagnostic.h>
#include <jcpp.h>

#undef NO_SOURCE

using $DiagnosticFormatter = ::com::sun::tools::javac::api::DiagnosticFormatter;
using $CompilerProperties$Errors = ::com::sun::tools::javac::resources::CompilerProperties$Errors;
using $BasicDiagnosticFormatter = ::com::sun::tools::javac::util::BasicDiagnosticFormatter;
using $Context = ::com::sun::tools::javac::util::Context;
using $Context$Key = ::com::sun::tools::javac::util::Context$Key;
using $DiagnosticSource = ::com::sun::tools::javac::util::DiagnosticSource;
using $JCDiagnostic$DiagnosticInfo = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticInfo;
using $JCDiagnostic$DiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition;
using $JCDiagnostic$Factory = ::com::sun::tools::javac::util::JCDiagnostic$Factory;
using $JavacMessages$ResourceBundleHelper = ::com::sun::tools::javac::util::JavacMessages$ResourceBundleHelper;
using $List = ::com::sun::tools::javac::util::List;
using $Options = ::com::sun::tools::javac::util::Options;
using $RawDiagnosticFormatter = ::com::sun::tools::javac::util::RawDiagnosticFormatter;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $SoftReference = ::java::lang::ref::SoftReference;
using $MessageFormat = ::java::text::MessageFormat;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $Locale = ::java::util::Locale;
using $MissingResourceException = ::java::util::MissingResourceException;
using $ResourceBundle = ::java::util::ResourceBundle;
using $Diagnostic = ::javax::tools::Diagnostic;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

class JavacMessages$$Lambda$lambda$add$0 : public $JavacMessages$ResourceBundleHelper {
	$class(JavacMessages$$Lambda$lambda$add$0, $NO_CLASS_INIT, $JavacMessages$ResourceBundleHelper)
public:
	void init$($String* bundleName) {
		$set(this, bundleName, bundleName);
	}
	virtual $ResourceBundle* getResourceBundle($Locale* locale) override {
		return JavacMessages::lambda$add$0(bundleName, locale);
	}
	$String* bundleName = nullptr;
};
$Class* JavacMessages$$Lambda$lambda$add$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"bundleName", "Ljava/lang/String;", nullptr, $PUBLIC, $field(JavacMessages$$Lambda$lambda$add$0, bundleName)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(JavacMessages$$Lambda$lambda$add$0, init$, void, $String*)},
		{"getResourceBundle", "(Ljava/util/Locale;)Ljava/util/ResourceBundle;", nullptr, $PUBLIC, $virtualMethod(JavacMessages$$Lambda$lambda$add$0, getResourceBundle, $ResourceBundle*, $Locale*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.tools.javac.util.JavacMessages$$Lambda$lambda$add$0",
		"java.lang.Object",
		"com.sun.tools.javac.util.JavacMessages$ResourceBundleHelper",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(JavacMessages$$Lambda$lambda$add$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JavacMessages$$Lambda$lambda$add$0);
	});
	return class$;
}
$Class* JavacMessages$$Lambda$lambda$add$0::class$ = nullptr;

$Context$Key* JavacMessages::messagesKey = nullptr;
$String* JavacMessages::defaultBundleName = nullptr;
$ResourceBundle* JavacMessages::defaultBundle = nullptr;
JavacMessages* JavacMessages::defaultMessages = nullptr;

JavacMessages* JavacMessages::instance($Context* context) {
	$init(JavacMessages);
	$var(JavacMessages, instance, $cast(JavacMessages, $nc(context)->get(JavacMessages::messagesKey)));
	if (instance == nullptr) {
		$assign(instance, $new(JavacMessages, context));
	}
	return instance;
}

$Locale* JavacMessages::getCurrentLocale() {
	return this->currentLocale;
}

void JavacMessages::setCurrentLocale($Locale* locale$renamed) {
	$var($Locale, locale, locale$renamed);
	if (locale == nullptr) {
		$assign(locale, $Locale::getDefault());
	}
	$set(this, currentBundles, getBundles(locale));
	$set(this, currentLocale, locale);
}

void JavacMessages::init$($Context* context) {
	$useLocalObjectStack();
	$load($Locale);
	JavacMessages::init$(JavacMessages::defaultBundleName, $$cast($Locale, $nc(context)->get($Locale::class$)));
	$set(this, context, context);
	context->put(JavacMessages::messagesKey, this);
	$var($Options, options, $Options::instance(context));
	bool rawDiagnostics = $nc(options)->isSet("rawDiagnostics"_s);
	$set(this, diagFormatter, rawDiagnostics ? $cast($DiagnosticFormatter, $new($RawDiagnosticFormatter, options)) : $cast($DiagnosticFormatter, $new($BasicDiagnosticFormatter, options, this)));
}

void JavacMessages::init$($String* bundleName) {
	JavacMessages::init$(bundleName, nullptr);
}

void JavacMessages::init$($String* bundleName, $Locale* locale) {
	$set(this, bundleHelpers, $List::nil());
	$set(this, bundleCache, $new($HashMap));
	add(bundleName);
	setCurrentLocale(locale);
}

void JavacMessages::init$() {
	JavacMessages::init$(JavacMessages::defaultBundleName);
}

void JavacMessages::add($String* bundleName) {
	add($$new(JavacMessages$$Lambda$lambda$add$0, bundleName));
}

void JavacMessages::add($JavacMessages$ResourceBundleHelper* ma) {
	$set(this, bundleHelpers, $nc(this->bundleHelpers)->prepend(ma));
	if (!$nc(this->bundleCache)->isEmpty()) {
		this->bundleCache->clear();
	}
	$set(this, currentBundles, nullptr);
}

$List* JavacMessages::getBundles($Locale* locale) {
	$useLocalObjectStack();
	if (locale == this->currentLocale && this->currentBundles != nullptr) {
		return this->currentBundles;
	}
	$var($SoftReference, bundles, $cast($SoftReference, $nc(this->bundleCache)->get(locale)));
	$var($List, bundleList, bundles == nullptr ? ($List*)nullptr : $cast($List, bundles->get()));
	if (bundleList == nullptr) {
		$assign(bundleList, $List::nil());
		{
			$var($Iterator, i$, $nc(this->bundleHelpers)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($JavacMessages$ResourceBundleHelper, helper, $cast($JavacMessages$ResourceBundleHelper, i$->next()));
				try {
					$var($ResourceBundle, rb, $nc(helper)->getResourceBundle(locale));
					$assign(bundleList, $nc(bundleList)->prepend(rb));
				} catch ($MissingResourceException& e) {
					$throwNew($InternalError, $$str({"Cannot find requested resource bundle for locale "_s, locale}), e);
				}
			}
		}
		$nc(this->bundleCache)->put(locale, $$new($SoftReference, bundleList));
	}
	return bundleList;
}

$String* JavacMessages::getLocalizedString($String* key, $ObjectArray* args) {
	return getLocalizedString(this->currentLocale, key, args);
}

$String* JavacMessages::getLocalizedString($JCDiagnostic$DiagnosticInfo* diagInfo) {
	return getLocalizedString(this->currentLocale, diagInfo);
}

$String* JavacMessages::getLocalizedString($Locale* l$renamed, $String* key, $ObjectArray* args) {
	$useLocalObjectStack();
	$var($Locale, l, l$renamed);
	if (l == nullptr) {
		$assign(l, getCurrentLocale());
	}
	return getLocalizedString($(getBundles(l)), key, args);
}

$String* JavacMessages::getLocalizedString($Locale* l$renamed, $JCDiagnostic$DiagnosticInfo* diagInfo) {
	$useLocalObjectStack();
	$var($Locale, l, l$renamed);
	if (l == nullptr) {
		$assign(l, getCurrentLocale());
	}
	return getLocalizedString($(getBundles(l)), diagInfo);
}

$String* JavacMessages::getDefaultLocalizedString($String* key, $ObjectArray* args) {
	$init(JavacMessages);
	$useLocalObjectStack();
	return getLocalizedString($($List::of($(getDefaultBundle()))), key, args);
}

JavacMessages* JavacMessages::getDefaultMessages() {
	$init(JavacMessages);
	if (JavacMessages::defaultMessages == nullptr) {
		$assignStatic(JavacMessages::defaultMessages, $new(JavacMessages, JavacMessages::defaultBundleName));
	}
	return JavacMessages::defaultMessages;
}

$ResourceBundle* JavacMessages::getDefaultBundle() {
	$init(JavacMessages);
	$beforeCallerSensitive();
	try {
		if (JavacMessages::defaultBundle == nullptr) {
			$assignStatic(JavacMessages::defaultBundle, $ResourceBundle::getBundle(JavacMessages::defaultBundleName));
		}
		return JavacMessages::defaultBundle;
	} catch ($MissingResourceException& e) {
		$throwNew($Error, "Fatal: Resource for compiler is missing"_s, e);
	}
	$shouldNotReachHere();
}

$String* JavacMessages::getLocalizedString($List* bundles, $String* key, $ObjectArray* args) {
	$init(JavacMessages);
	$useLocalObjectStack();
	$var($String, msg, nullptr);
	{
		$var($List, l, bundles);
		for (; $nc(l)->nonEmpty() && msg == nullptr; $assign(l, l->tail)) {
			$var($ResourceBundle, rb, $cast($ResourceBundle, l->head));
			try {
				$assign(msg, $nc(rb)->getString(key));
			} catch ($MissingResourceException& e) {
			}
		}
	}
	if (msg == nullptr) {
		$assign(msg, $str({"compiler message file broken: key="_s, key, " arguments={0}, {1}, {2}, {3}, {4}, {5}, {6}, {7}"_s}));
	}
	return $MessageFormat::format(msg, args);
}

$String* JavacMessages::getLocalizedString($List* bundles, $JCDiagnostic$DiagnosticInfo* diagInfo) {
	$useLocalObjectStack();
	$var($String, msg, nullptr);
	{
		$var($List, l, bundles);
		for (; $nc(l)->nonEmpty() && msg == nullptr; $assign(l, l->tail)) {
			$var($ResourceBundle, rb, $cast($ResourceBundle, l->head));
			try {
				$assign(msg, $nc(rb)->getString($($nc(diagInfo)->key())));
			} catch ($MissingResourceException& e) {
			}
		}
	}
	if (msg == nullptr) {
		$assign(msg, $str({"compiler message file broken: key="_s, $($nc(diagInfo)->key()), " arguments={0}, {1}, {2}, {3}, {4}, {5}, {6}, {7}"_s}));
	}
	$init($CompilerProperties$Errors);
	if ($equals(diagInfo, $CompilerProperties$Errors::Error)) {
		return $MessageFormat::format(msg, $$new($ObjectArray, 0));
	} else {
		$init($DiagnosticSource);
		$var($Diagnostic, var$0, $$nc(getDiagFactory())->create($DiagnosticSource::NO_SOURCE, nullptr, diagInfo));
		return $nc(this->diagFormatter)->format(var$0, $(getCurrentLocale()));
	}
}

$JCDiagnostic$Factory* JavacMessages::getDiagFactory() {
	if (this->diagFactory == nullptr) {
		$set(this, diagFactory, $JCDiagnostic$Factory::instance(this->context));
	}
	return this->diagFactory;
}

$ResourceBundle* JavacMessages::lambda$add$0($String* bundleName, $Locale* locale) {
	$init(JavacMessages);
	$beforeCallerSensitive();
	return $ResourceBundle::getBundle(bundleName, locale);
}

void JavacMessages::clinit$($Class* clazz) {
	$assignStatic(JavacMessages::defaultBundleName, "com.sun.tools.javac.resources.compiler"_s);
	$assignStatic(JavacMessages::messagesKey, $new($Context$Key));
}

JavacMessages::JavacMessages() {
}

$Class* JavacMessages::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("com.sun.tools.javac.util.JavacMessages$$Lambda$lambda$add$0")) {
			return JavacMessages$$Lambda$lambda$add$0::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"messagesKey", "Lcom/sun/tools/javac/util/Context$Key;", "Lcom/sun/tools/javac/util/Context$Key<Lcom/sun/tools/javac/util/JavacMessages;>;", $PUBLIC | $STATIC | $FINAL, $staticField(JavacMessages, messagesKey)},
		{"bundleCache", "Ljava/util/Map;", "Ljava/util/Map<Ljava/util/Locale;Ljava/lang/ref/SoftReference<Lcom/sun/tools/javac/util/List<Ljava/util/ResourceBundle;>;>;>;", $PRIVATE, $field(JavacMessages, bundleCache)},
		{"bundleHelpers", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/util/JavacMessages$ResourceBundleHelper;>;", $PRIVATE, $field(JavacMessages, bundleHelpers)},
		{"currentLocale", "Ljava/util/Locale;", nullptr, $PRIVATE, $field(JavacMessages, currentLocale)},
		{"currentBundles", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Ljava/util/ResourceBundle;>;", $PRIVATE, $field(JavacMessages, currentBundles)},
		{"diagFormatter", "Lcom/sun/tools/javac/api/DiagnosticFormatter;", "Lcom/sun/tools/javac/api/DiagnosticFormatter<Lcom/sun/tools/javac/util/JCDiagnostic;>;", $PRIVATE, $field(JavacMessages, diagFormatter)},
		{"diagFactory", "Lcom/sun/tools/javac/util/JCDiagnostic$Factory;", nullptr, $PRIVATE, $field(JavacMessages, diagFactory)},
		{"context", "Lcom/sun/tools/javac/util/Context;", nullptr, 0, $field(JavacMessages, context)},
		{"defaultBundleName", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JavacMessages, defaultBundleName)},
		{"defaultBundle", "Ljava/util/ResourceBundle;", nullptr, $PRIVATE | $STATIC, $staticField(JavacMessages, defaultBundle)},
		{"defaultMessages", "Lcom/sun/tools/javac/util/JavacMessages;", nullptr, $PRIVATE | $STATIC, $staticField(JavacMessages, defaultMessages)},
		{}
	};
	$CompoundAttribute getDefaultMessagesmethodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/util/Context;)V", nullptr, $PUBLIC, $method(JavacMessages, init$, void, $Context*)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(JavacMessages, init$, void, $String*), "java.util.MissingResourceException"},
		{"<init>", "(Ljava/lang/String;Ljava/util/Locale;)V", nullptr, $PUBLIC, $method(JavacMessages, init$, void, $String*, $Locale*), "java.util.MissingResourceException"},
		{"<init>", "()V", nullptr, $PUBLIC, $method(JavacMessages, init$, void), "java.util.MissingResourceException"},
		{"add", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(JavacMessages, add, void, $String*), "java.util.MissingResourceException"},
		{"add", "(Lcom/sun/tools/javac/util/JavacMessages$ResourceBundleHelper;)V", nullptr, $PUBLIC, $virtualMethod(JavacMessages, add, void, $JavacMessages$ResourceBundleHelper*)},
		{"getBundles", "(Ljava/util/Locale;)Lcom/sun/tools/javac/util/List;", "(Ljava/util/Locale;)Lcom/sun/tools/javac/util/List<Ljava/util/ResourceBundle;>;", $PUBLIC, $virtualMethod(JavacMessages, getBundles, $List*, $Locale*)},
		{"getCurrentLocale", "()Ljava/util/Locale;", nullptr, $PUBLIC, $virtualMethod(JavacMessages, getCurrentLocale, $Locale*)},
		{"getDefaultBundle", "()Ljava/util/ResourceBundle;", nullptr, $PUBLIC | $STATIC, $staticMethod(JavacMessages, getDefaultBundle, $ResourceBundle*)},
		{"getDefaultLocalizedString", "(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;", nullptr, $STATIC | $TRANSIENT, $staticMethod(JavacMessages, getDefaultLocalizedString, $String*, $String*, $ObjectArray*)},
		{"getDefaultMessages", "()Lcom/sun/tools/javac/util/JavacMessages;", nullptr, $STATIC | $DEPRECATED, $staticMethod(JavacMessages, getDefaultMessages, JavacMessages*), nullptr, nullptr, getDefaultMessagesmethodAnnotations$$},
		{"getDiagFactory", "()Lcom/sun/tools/javac/util/JCDiagnostic$Factory;", nullptr, 0, $virtualMethod(JavacMessages, getDiagFactory, $JCDiagnostic$Factory*)},
		{"getLocalizedString", "(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;", nullptr, $PUBLIC | $TRANSIENT, $virtualMethod(JavacMessages, getLocalizedString, $String*, $String*, $ObjectArray*)},
		{"getLocalizedString", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticInfo;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(JavacMessages, getLocalizedString, $String*, $JCDiagnostic$DiagnosticInfo*)},
		{"getLocalizedString", "(Ljava/util/Locale;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;", nullptr, $PUBLIC | $TRANSIENT, $virtualMethod(JavacMessages, getLocalizedString, $String*, $Locale*, $String*, $ObjectArray*)},
		{"getLocalizedString", "(Ljava/util/Locale;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticInfo;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(JavacMessages, getLocalizedString, $String*, $Locale*, $JCDiagnostic$DiagnosticInfo*)},
		{"getLocalizedString", "(Lcom/sun/tools/javac/util/List;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;", "(Lcom/sun/tools/javac/util/List<Ljava/util/ResourceBundle;>;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;", $PRIVATE | $STATIC | $TRANSIENT, $staticMethod(JavacMessages, getLocalizedString, $String*, $List*, $String*, $ObjectArray*)},
		{"getLocalizedString", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticInfo;)Ljava/lang/String;", "(Lcom/sun/tools/javac/util/List<Ljava/util/ResourceBundle;>;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticInfo;)Ljava/lang/String;", $PRIVATE, $method(JavacMessages, getLocalizedString, $String*, $List*, $JCDiagnostic$DiagnosticInfo*)},
		{"instance", "(Lcom/sun/tools/javac/util/Context;)Lcom/sun/tools/javac/util/JavacMessages;", nullptr, $PUBLIC | $STATIC, $staticMethod(JavacMessages, instance, JavacMessages*, $Context*)},
		{"lambda$add$0", "(Ljava/lang/String;Ljava/util/Locale;)Ljava/util/ResourceBundle;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(JavacMessages, lambda$add$0, $ResourceBundle*, $String*, $Locale*)},
		{"setCurrentLocale", "(Ljava/util/Locale;)V", nullptr, $PUBLIC, $virtualMethod(JavacMessages, setCurrentLocale, void, $Locale*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.util.JavacMessages$ResourceBundleHelper", "com.sun.tools.javac.util.JavacMessages", "ResourceBundleHelper", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.tools.javac.util.JavacMessages",
		"java.lang.Object",
		"com.sun.tools.javac.api.Messages",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"com.sun.tools.javac.util.JavacMessages$ResourceBundleHelper"
	};
	$loadClass(JavacMessages, name, initialize, &classInfo$$, JavacMessages::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(JavacMessages);
	});
	return class$;
}

$Class* JavacMessages::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com