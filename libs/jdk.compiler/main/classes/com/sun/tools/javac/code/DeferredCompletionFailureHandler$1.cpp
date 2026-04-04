#include <com/sun/tools/javac/code/DeferredCompletionFailureHandler$1.h>
#include <com/sun/tools/javac/code/DeferredCompletionFailureHandler$1$1.h>
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
using $DeferredCompletionFailureHandler$1$1 = ::com::sun::tools::javac::code::DeferredCompletionFailureHandler$1$1;
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

class DeferredCompletionFailureHandler$1$$Lambda$lambda$install$0 : public $Consumer {
	$class(DeferredCompletionFailureHandler$1$$Lambda$lambda$install$0, $NO_CLASS_INIT, $Consumer)
public:
	void init$() {
	}
	virtual void accept(Object$* f) override {
		DeferredCompletionFailureHandler$1::lambda$install$0($cast($DeferredCompletionFailureHandler$FlipSymbolDescription, f));
	}
};
$Class* DeferredCompletionFailureHandler$1$$Lambda$lambda$install$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(DeferredCompletionFailureHandler$1$$Lambda$lambda$install$0, init$, void)},
		{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(DeferredCompletionFailureHandler$1$$Lambda$lambda$install$0, accept, void, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.tools.javac.code.DeferredCompletionFailureHandler$1$$Lambda$lambda$install$0",
		"java.lang.Object",
		"java.util.function.Consumer",
		nullptr,
		methodInfos$$
	};
	$loadClass(DeferredCompletionFailureHandler$1$$Lambda$lambda$install$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DeferredCompletionFailureHandler$1$$Lambda$lambda$install$0);
	});
	return class$;
}
$Class* DeferredCompletionFailureHandler$1$$Lambda$lambda$install$0::class$ = nullptr;

void DeferredCompletionFailureHandler$1::init$($DeferredCompletionFailureHandler* this$0) {
	$set(this, this$0, this$0);
	$set(this, class2Flip, $new($HashMap));
}

void DeferredCompletionFailureHandler$1::install() {
	$useLocalObjectStack();
	$$nc(this->class2Flip->values())->forEach($$new(DeferredCompletionFailureHandler$1$$Lambda$lambda$install$0));
}

void DeferredCompletionFailureHandler$1::handleAPICompletionFailure($Symbol$CompletionFailure* cf) {
}

void DeferredCompletionFailureHandler$1::classSymbolCompleteFailed($Symbol$ClassSymbol* sym, $Symbol$Completer* origCompleter) {
	$useLocalObjectStack();
	this->class2Flip->put(sym, $$new($DeferredCompletionFailureHandler$FlipSymbolDescription, sym, $$new($DeferredCompletionFailureHandler$1$1, this, origCompleter)));
}

void DeferredCompletionFailureHandler$1::classSymbolRemoved($Symbol$ClassSymbol* sym) {
	this->class2Flip->remove(sym);
}

void DeferredCompletionFailureHandler$1::uninstall() {
	$useLocalObjectStack();
	$$nc(this->class2Flip->values())->forEach($$new(DeferredCompletionFailureHandler$1$$Lambda$lambda$install$0));
}

void DeferredCompletionFailureHandler$1::lambda$install$0($DeferredCompletionFailureHandler$FlipSymbolDescription* f) {
	$init(DeferredCompletionFailureHandler$1);
	$nc(f)->flip();
}

DeferredCompletionFailureHandler$1::DeferredCompletionFailureHandler$1() {
}

$Class* DeferredCompletionFailureHandler$1::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("com.sun.tools.javac.code.DeferredCompletionFailureHandler$1$$Lambda$lambda$install$0")) {
			return DeferredCompletionFailureHandler$1$$Lambda$lambda$install$0::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/code/DeferredCompletionFailureHandler;", nullptr, $FINAL | $SYNTHETIC, $field(DeferredCompletionFailureHandler$1, this$0)},
		{"class2Flip", "Ljava/util/Map;", "Ljava/util/Map<Lcom/sun/tools/javac/code/Symbol$ClassSymbol;Lcom/sun/tools/javac/code/DeferredCompletionFailureHandler$FlipSymbolDescription;>;", $PRIVATE | $FINAL, $field(DeferredCompletionFailureHandler$1, class2Flip)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/code/DeferredCompletionFailureHandler;)V", nullptr, 0, $method(DeferredCompletionFailureHandler$1, init$, void, $DeferredCompletionFailureHandler*)},
		{"classSymbolCompleteFailed", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;Lcom/sun/tools/javac/code/Symbol$Completer;)V", nullptr, $PUBLIC, $virtualMethod(DeferredCompletionFailureHandler$1, classSymbolCompleteFailed, void, $Symbol$ClassSymbol*, $Symbol$Completer*)},
		{"classSymbolRemoved", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;)V", nullptr, $PUBLIC, $virtualMethod(DeferredCompletionFailureHandler$1, classSymbolRemoved, void, $Symbol$ClassSymbol*)},
		{"handleAPICompletionFailure", "(Lcom/sun/tools/javac/code/Symbol$CompletionFailure;)V", nullptr, $PUBLIC, $virtualMethod(DeferredCompletionFailureHandler$1, handleAPICompletionFailure, void, $Symbol$CompletionFailure*)},
		{"install", "()V", nullptr, $PUBLIC, $virtualMethod(DeferredCompletionFailureHandler$1, install, void)},
		{"lambda$install$0", "(Lcom/sun/tools/javac/code/DeferredCompletionFailureHandler$FlipSymbolDescription;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(DeferredCompletionFailureHandler$1, lambda$install$0, void, $DeferredCompletionFailureHandler$FlipSymbolDescription*)},
		{"uninstall", "()V", nullptr, $PUBLIC, $virtualMethod(DeferredCompletionFailureHandler$1, uninstall, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.code.DeferredCompletionFailureHandler",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.code.DeferredCompletionFailureHandler$1", nullptr, nullptr, 0},
		{"com.sun.tools.javac.code.DeferredCompletionFailureHandler$Handler", "com.sun.tools.javac.code.DeferredCompletionFailureHandler", "Handler", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{"com.sun.tools.javac.code.DeferredCompletionFailureHandler$1$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.code.DeferredCompletionFailureHandler$1",
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
	$loadClass(DeferredCompletionFailureHandler$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DeferredCompletionFailureHandler$1);
	});
	return class$;
}

$Class* DeferredCompletionFailureHandler$1::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com