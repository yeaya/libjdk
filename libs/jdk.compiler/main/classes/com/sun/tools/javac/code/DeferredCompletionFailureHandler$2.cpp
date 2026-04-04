#include <com/sun/tools/javac/code/DeferredCompletionFailureHandler$2.h>
#include <com/sun/tools/javac/code/DeferredCompletionFailureHandler$DeferredCompleter.h>
#include <com/sun/tools/javac/code/DeferredCompletionFailureHandler$FlipSymbolDescription.h>
#include <com/sun/tools/javac/code/DeferredCompletionFailureHandler.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$Completer.h>
#include <com/sun/tools/javac/code/Symbol$CompletionFailure.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/Collection.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <java/util/function/Consumer.h>
#include <jcpp.h>

using $DeferredCompletionFailureHandler = ::com::sun::tools::javac::code::DeferredCompletionFailureHandler;
using $DeferredCompletionFailureHandler$DeferredCompleter = ::com::sun::tools::javac::code::DeferredCompletionFailureHandler$DeferredCompleter;
using $DeferredCompletionFailureHandler$FlipSymbolDescription = ::com::sun::tools::javac::code::DeferredCompletionFailureHandler$FlipSymbolDescription;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Symbol$Completer = ::com::sun::tools::javac::code::Symbol$Completer;
using $Symbol$CompletionFailure = ::com::sun::tools::javac::code::Symbol$CompletionFailure;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $HashMap = ::java::util::HashMap;
using $Consumer = ::java::util::function::Consumer;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

class DeferredCompletionFailureHandler$2$$Lambda$lambda$uninstall$0 : public $Consumer {
	$class(DeferredCompletionFailureHandler$2$$Lambda$lambda$uninstall$0, $NO_CLASS_INIT, $Consumer)
public:
	void init$() {
	}
	virtual void accept(Object$* f) override {
		DeferredCompletionFailureHandler$2::lambda$uninstall$0($cast($DeferredCompletionFailureHandler$FlipSymbolDescription, f));
	}
};
$Class* DeferredCompletionFailureHandler$2$$Lambda$lambda$uninstall$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(DeferredCompletionFailureHandler$2$$Lambda$lambda$uninstall$0, init$, void)},
		{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(DeferredCompletionFailureHandler$2$$Lambda$lambda$uninstall$0, accept, void, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.tools.javac.code.DeferredCompletionFailureHandler$2$$Lambda$lambda$uninstall$0",
		"java.lang.Object",
		"java.util.function.Consumer",
		nullptr,
		methodInfos$$
	};
	$loadClass(DeferredCompletionFailureHandler$2$$Lambda$lambda$uninstall$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DeferredCompletionFailureHandler$2$$Lambda$lambda$uninstall$0);
	});
	return class$;
}
$Class* DeferredCompletionFailureHandler$2$$Lambda$lambda$uninstall$0::class$ = nullptr;

void DeferredCompletionFailureHandler$2::init$($DeferredCompletionFailureHandler* this$0) {
	$set(this, this$0, this$0);
	$set(this, class2Flip, $new($HashMap));
}

void DeferredCompletionFailureHandler$2::install() {
}

void DeferredCompletionFailureHandler$2::handleAPICompletionFailure($Symbol$CompletionFailure* cf) {
	$throw(cf);
}

void DeferredCompletionFailureHandler$2::classSymbolCompleteFailed($Symbol$ClassSymbol* sym, $Symbol$Completer* origCompleter) {
	$useLocalObjectStack();
	this->class2Flip->put(sym, $$new($DeferredCompletionFailureHandler$FlipSymbolDescription, sym, $$new($DeferredCompletionFailureHandler$DeferredCompleter, this->this$0, origCompleter)));
}

void DeferredCompletionFailureHandler$2::classSymbolRemoved($Symbol$ClassSymbol* sym) {
	this->class2Flip->remove(sym);
}

void DeferredCompletionFailureHandler$2::uninstall() {
	$useLocalObjectStack();
	$$nc(this->class2Flip->values())->forEach($$new(DeferredCompletionFailureHandler$2$$Lambda$lambda$uninstall$0));
	this->class2Flip->clear();
}

void DeferredCompletionFailureHandler$2::lambda$uninstall$0($DeferredCompletionFailureHandler$FlipSymbolDescription* f) {
	$init(DeferredCompletionFailureHandler$2);
	$nc(f)->flip();
}

DeferredCompletionFailureHandler$2::DeferredCompletionFailureHandler$2() {
}

$Class* DeferredCompletionFailureHandler$2::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("com.sun.tools.javac.code.DeferredCompletionFailureHandler$2$$Lambda$lambda$uninstall$0")) {
			return DeferredCompletionFailureHandler$2$$Lambda$lambda$uninstall$0::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/code/DeferredCompletionFailureHandler;", nullptr, $FINAL | $SYNTHETIC, $field(DeferredCompletionFailureHandler$2, this$0)},
		{"class2Flip", "Ljava/util/Map;", "Ljava/util/Map<Lcom/sun/tools/javac/code/Symbol$ClassSymbol;Lcom/sun/tools/javac/code/DeferredCompletionFailureHandler$FlipSymbolDescription;>;", $PRIVATE | $FINAL, $field(DeferredCompletionFailureHandler$2, class2Flip)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/code/DeferredCompletionFailureHandler;)V", nullptr, 0, $method(DeferredCompletionFailureHandler$2, init$, void, $DeferredCompletionFailureHandler*)},
		{"classSymbolCompleteFailed", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;Lcom/sun/tools/javac/code/Symbol$Completer;)V", nullptr, $PUBLIC, $virtualMethod(DeferredCompletionFailureHandler$2, classSymbolCompleteFailed, void, $Symbol$ClassSymbol*, $Symbol$Completer*)},
		{"classSymbolRemoved", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;)V", nullptr, $PUBLIC, $virtualMethod(DeferredCompletionFailureHandler$2, classSymbolRemoved, void, $Symbol$ClassSymbol*)},
		{"handleAPICompletionFailure", "(Lcom/sun/tools/javac/code/Symbol$CompletionFailure;)V", nullptr, $PUBLIC, $virtualMethod(DeferredCompletionFailureHandler$2, handleAPICompletionFailure, void, $Symbol$CompletionFailure*)},
		{"install", "()V", nullptr, $PUBLIC, $virtualMethod(DeferredCompletionFailureHandler$2, install, void)},
		{"lambda$uninstall$0", "(Lcom/sun/tools/javac/code/DeferredCompletionFailureHandler$FlipSymbolDescription;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(DeferredCompletionFailureHandler$2, lambda$uninstall$0, void, $DeferredCompletionFailureHandler$FlipSymbolDescription*)},
		{"uninstall", "()V", nullptr, $PUBLIC, $virtualMethod(DeferredCompletionFailureHandler$2, uninstall, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.code.DeferredCompletionFailureHandler",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.code.DeferredCompletionFailureHandler$2", nullptr, nullptr, 0},
		{"com.sun.tools.javac.code.DeferredCompletionFailureHandler$Handler", "com.sun.tools.javac.code.DeferredCompletionFailureHandler", "Handler", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.code.DeferredCompletionFailureHandler$2",
		"java.lang.Object",
		"com.sun.tools.javac.code.DeferredCompletionFailureHandler$Handler",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.code.DeferredCompletionFailureHandler"
	};
	$loadClass(DeferredCompletionFailureHandler$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DeferredCompletionFailureHandler$2);
	});
	return class$;
}

$Class* DeferredCompletionFailureHandler$2::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com