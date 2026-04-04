#include <com/sun/tools/sjavac/server/RequestHandler$1.h>
#include <com/sun/tools/sjavac/Log$Level.h>
#include <com/sun/tools/sjavac/Log.h>
#include <com/sun/tools/sjavac/Util.h>
#include <com/sun/tools/sjavac/server/RequestHandler.h>
#include <java/io/Serializable.h>
#include <java/io/Writer.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/Function.h>
#include <java/util/stream/Stream.h>
#include <jcpp.h>

using $Log = ::com::sun::tools::sjavac::Log;
using $Log$Level = ::com::sun::tools::sjavac::Log$Level;
using $Util = ::com::sun::tools::sjavac::Util;
using $RequestHandler = ::com::sun::tools::sjavac::server::RequestHandler;
using $Serializable = ::java::io::Serializable;
using $Writer = ::java::io::Writer;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Consumer = ::java::util::function::Consumer;
using $Function = ::java::util::function::Function;

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace server {

class RequestHandler$1$$Lambda$lambda$printLogMsg$0 : public $Function {
	$class(RequestHandler$1$$Lambda$lambda$printLogMsg$0, $NO_CLASS_INIT, $Function)
public:
	void init$($Log$Level* msgLevel) {
		$set(this, msgLevel, msgLevel);
	}
	virtual $Object* apply(Object$* line) override {
		 return $of(RequestHandler$1::lambda$printLogMsg$0(msgLevel, $cast($String, line)));
	}
	$Log$Level* msgLevel = nullptr;
};
$Class* RequestHandler$1$$Lambda$lambda$printLogMsg$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"msgLevel", "Lcom/sun/tools/sjavac/Log$Level;", nullptr, $PUBLIC, $field(RequestHandler$1$$Lambda$lambda$printLogMsg$0, msgLevel)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/sjavac/Log$Level;)V", nullptr, $PUBLIC, $method(RequestHandler$1$$Lambda$lambda$printLogMsg$0, init$, void, $Log$Level*)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(RequestHandler$1$$Lambda$lambda$printLogMsg$0, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.tools.sjavac.server.RequestHandler$1$$Lambda$lambda$printLogMsg$0",
		"java.lang.Object",
		"java.util.function.Function",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(RequestHandler$1$$Lambda$lambda$printLogMsg$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RequestHandler$1$$Lambda$lambda$printLogMsg$0);
	});
	return class$;
}
$Class* RequestHandler$1$$Lambda$lambda$printLogMsg$0::class$ = nullptr;

class RequestHandler$1$$Lambda$lambda$printLogMsg$1$1 : public $Consumer {
	$class(RequestHandler$1$$Lambda$lambda$printLogMsg$1$1, $NO_CLASS_INIT, $Consumer)
public:
	void init$(RequestHandler$1* inst, $Log$Level* msgLevel) {
		$set(this, inst$, inst);
		$set(this, msgLevel, msgLevel);
	}
	virtual void accept(Object$* line) override {
		$nc(inst$)->lambda$printLogMsg$1(msgLevel, $cast($String, line));
	}
	RequestHandler$1* inst$ = nullptr;
	$Log$Level* msgLevel = nullptr;
};
$Class* RequestHandler$1$$Lambda$lambda$printLogMsg$1$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(RequestHandler$1$$Lambda$lambda$printLogMsg$1$1, inst$)},
		{"msgLevel", "Lcom/sun/tools/sjavac/Log$Level;", nullptr, $PUBLIC, $field(RequestHandler$1$$Lambda$lambda$printLogMsg$1$1, msgLevel)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/sjavac/server/RequestHandler$1;Lcom/sun/tools/sjavac/Log$Level;)V", nullptr, $PUBLIC, $method(RequestHandler$1$$Lambda$lambda$printLogMsg$1$1, init$, void, RequestHandler$1*, $Log$Level*)},
		{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(RequestHandler$1$$Lambda$lambda$printLogMsg$1$1, accept, void, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.tools.sjavac.server.RequestHandler$1$$Lambda$lambda$printLogMsg$1$1",
		"java.lang.Object",
		"java.util.function.Consumer",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(RequestHandler$1$$Lambda$lambda$printLogMsg$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RequestHandler$1$$Lambda$lambda$printLogMsg$1$1);
	});
	return class$;
}
$Class* RequestHandler$1$$Lambda$lambda$printLogMsg$1$1::class$ = nullptr;

void RequestHandler$1::init$($RequestHandler* this$0, $Writer* out, $Writer* err) {
	$set(this, this$0, this$0);
	$Log::init$(out, err);
}

bool RequestHandler$1::isLevelLogged($Log$Level* l) {
	return true;
}

void RequestHandler$1::printLogMsg($Log$Level* msgLevel, $String* msg) {
	$useLocalObjectStack();
	$$nc($$nc($Util::getLines(msg))->map($$new(RequestHandler$1$$Lambda$lambda$printLogMsg$0, msgLevel)))->forEach($$new(RequestHandler$1$$Lambda$lambda$printLogMsg$1$1, this, msgLevel));
}

void RequestHandler$1::lambda$printLogMsg$1($Log$Level* msgLevel, $String* line) {
	$Log::printLogMsg(msgLevel, line);
}

$String* RequestHandler$1::lambda$printLogMsg$0($Log$Level* msgLevel, $String* line) {
	$init(RequestHandler$1);
	return $str({msgLevel, ":"_s, line});
}

RequestHandler$1::RequestHandler$1() {
}

$Class* RequestHandler$1::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("com.sun.tools.sjavac.server.RequestHandler$1$$Lambda$lambda$printLogMsg$0")) {
			return RequestHandler$1$$Lambda$lambda$printLogMsg$0::load$(name, initialize);
		}
		if (name->equals("com.sun.tools.sjavac.server.RequestHandler$1$$Lambda$lambda$printLogMsg$1$1")) {
			return RequestHandler$1$$Lambda$lambda$printLogMsg$1$1::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/sjavac/server/RequestHandler;", nullptr, $FINAL | $SYNTHETIC, $field(RequestHandler$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/sjavac/server/RequestHandler;Ljava/io/Writer;Ljava/io/Writer;)V", nullptr, 0, $method(RequestHandler$1, init$, void, $RequestHandler*, $Writer*, $Writer*)},
		{"isLevelLogged", "(Lcom/sun/tools/sjavac/Log$Level;)Z", nullptr, $PROTECTED, $virtualMethod(RequestHandler$1, isLevelLogged, bool, $Log$Level*)},
		{"lambda$printLogMsg$0", "(Lcom/sun/tools/sjavac/Log$Level;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(RequestHandler$1, lambda$printLogMsg$0, $String*, $Log$Level*, $String*)},
		{"lambda$printLogMsg$1", "(Lcom/sun/tools/sjavac/Log$Level;Ljava/lang/String;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(RequestHandler$1, lambda$printLogMsg$1, void, $Log$Level*, $String*)},
		{"printLogMsg", "(Lcom/sun/tools/sjavac/Log$Level;Ljava/lang/String;)V", nullptr, $PROTECTED, $virtualMethod(RequestHandler$1, printLogMsg, void, $Log$Level*, $String*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.sjavac.server.RequestHandler",
		"run",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.sjavac.server.RequestHandler$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.sjavac.server.RequestHandler$1",
		"com.sun.tools.sjavac.Log",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.sjavac.server.RequestHandler"
	};
	$loadClass(RequestHandler$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RequestHandler$1);
	});
	return class$;
}

$Class* RequestHandler$1::class$ = nullptr;

				} // server
			} // sjavac
		} // tools
	} // sun
} // com