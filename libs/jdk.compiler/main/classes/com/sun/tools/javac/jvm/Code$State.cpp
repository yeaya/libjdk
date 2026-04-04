#include <com/sun/tools/javac/jvm/Code$State.h>
#include <com/sun/tools/javac/code/Symbol$MethodSymbol.h>
#include <com/sun/tools/javac/code/Symbol$VarSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Symtab.h>
#include <com/sun/tools/javac/code/Type$JCPrimitiveType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/jvm/Code$1.h>
#include <com/sun/tools/javac/jvm/Code$LocalVar.h>
#include <com/sun/tools/javac/jvm/Code.h>
#include <com/sun/tools/javac/jvm/UninitializedType.h>
#include <com/sun/tools/javac/util/ArrayUtils.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <com/sun/tools/javac/util/Bits.h>
#include <java/lang/AssertionError.h>
#include <java/lang/CloneNotSupportedException.h>
#include <java/lang/Cloneable.h>
#include <java/util/List.h>
#include <jcpp.h>

using $TypeArray = $Array<::com::sun::tools::javac::code::Type>;
using $Symbol$VarSymbol = ::com::sun::tools::javac::code::Symbol$VarSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Code = ::com::sun::tools::javac::jvm::Code;
using $Code$1 = ::com::sun::tools::javac::jvm::Code$1;
using $Code$LocalVar = ::com::sun::tools::javac::jvm::Code$LocalVar;
using $UninitializedType = ::com::sun::tools::javac::jvm::UninitializedType;
using $ArrayUtils = ::com::sun::tools::javac::util::ArrayUtils;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $Bits = ::com::sun::tools::javac::util::Bits;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $CloneNotSupportedException = ::java::lang::CloneNotSupportedException;
using $Cloneable = ::java::lang::Cloneable;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

void Code$State::init$($Code* this$0) {
	$set(this, this$0, this$0);
	$set(this, defined, $new($Bits));
	$set(this, stack, $new($TypeArray, 16));
}

Code$State* Code$State::dup() {
	$useLocalObjectStack();
	try {
		$var(Code$State, state, $cast(Code$State, $Cloneable::clone()));
		$set($nc(state), defined, $new($Bits, this->defined));
		$set(state, stack, $cast($TypeArray, $nc(this->stack)->clone()));
		if (this->locks != nullptr) {
			$set(state, locks, $cast($ints, this->locks->clone()));
		}
		if (this->this$0->debugCode) {
			$nc($System::err)->println($$str({"duping state "_s, this}));
			dump();
		}
		return state;
	} catch ($CloneNotSupportedException& ex) {
		$throwNew($AssertionError, $of(ex));
	}
	$shouldNotReachHere();
}

void Code$State::lock(int32_t register$) {
	if (this->locks == nullptr) {
		$set(this, locks, $new($ints, 20));
	} else {
		$set(this, locks, $ArrayUtils::ensureCapacity(this->locks, this->nlocks));
	}
	$nc(this->locks)->set(this->nlocks, register$);
	++this->nlocks;
}

void Code$State::unlock(int32_t register$) {
	--this->nlocks;
	$Assert::check($nc(this->locks)->get(this->nlocks) == register$);
	$nc(this->locks)->set(this->nlocks, -1);
}

void Code$State::push($Type* t$renamed) {
	$useLocalObjectStack();
	$var($Type, t, t$renamed);
	if (this->this$0->debugCode) {
		$nc($System::err)->println($$str({"   pushing "_s, t}));
	}
	$init($Code$1);
	switch ($nc($Code$1::$SwitchMap$com$sun$tools$javac$code$TypeTag)->get(($$nc($nc(t)->getTag()))->ordinal())) {
	case 9:
		return;
	case 1:
	case 3:
	case 2:
	case 8:
		$assign(t, $nc(this->this$0->syms)->intType);
		break;
	default:
		break;
	}
	$set(this, stack, $cast($TypeArray, $ArrayUtils::ensureCapacity(this->stack, this->stacksize + 2)));
	$nc(this->stack)->set(this->stacksize++, t);
	switch ($Code::width(t)) {
	case 1:
		break;
	case 2:
		this->stack->set(this->stacksize++, nullptr);
		break;
	default:
		$throwNew($AssertionError, t);
	}
	if (this->stacksize > this->this$0->max_stack) {
		this->this$0->max_stack = this->stacksize;
	}
}

$Type* Code$State::pop1() {
	$useLocalObjectStack();
	if (this->this$0->debugCode) {
		$nc($System::err)->println($$str({"   popping "_s, $$str(1)}));
	}
	--this->stacksize;
	$var($Type, result, $nc(this->stack)->get(this->stacksize));
	this->stack->set(this->stacksize, nullptr);
	$Assert::check(result != nullptr && $Code::width(result) == 1);
	return result;
}

$Type* Code$State::peek() {
	return $nc(this->stack)->get(this->stacksize - 1);
}

$Type* Code$State::pop2() {
	$useLocalObjectStack();
	if (this->this$0->debugCode) {
		$nc($System::err)->println($$str({"   popping "_s, $$str(2)}));
	}
	this->stacksize -= 2;
	$var($Type, result, $nc(this->stack)->get(this->stacksize));
	this->stack->set(this->stacksize, nullptr);
	$Assert::check(this->stack->get(this->stacksize + 1) == nullptr && result != nullptr && $Code::width(result) == 2);
	return result;
}

void Code$State::pop(int32_t n) {
	$useLocalObjectStack();
	if (this->this$0->debugCode) {
		$nc($System::err)->println($$str({"   popping "_s, $$str(n)}));
	}
	while (n > 0) {
		$nc(this->stack)->set(--this->stacksize, nullptr);
		--n;
	}
}

void Code$State::pop($Type* t) {
	pop($Code::width(t));
}

void Code$State::forceStackTop($Type* t) {
	$useLocalObjectStack();
	if (!this->this$0->alive) {
		return;
	}
	{
		$init($Code$1);
		int32_t width = 0;
		$var($Type, old, nullptr);
		switch ($nc($Code$1::$SwitchMap$com$sun$tools$javac$code$TypeTag)->get(($$nc($nc(t)->getTag()))->ordinal())) {
		case 10:
		case 11:
			{
				width = $Code::width(t);
				$assign(old, $nc(this->stack)->get(this->stacksize - width));
				$var($Type, var$0, $nc(this->this$0->types)->erasure(old));
				$Assert::check($nc(this->this$0->types)->isSubtype(var$0, $(this->this$0->types->erasure(t))));
				$nc(this->stack)->set(this->stacksize - width, t);
				break;
			}
		default:
			break;
		}
	}
}

void Code$State::markInitialized($UninitializedType* old) {
	$useLocalObjectStack();
	$var($Type, newtype, $nc(old)->initializedType());
	for (int32_t i = 0; i < this->stacksize; ++i) {
		if ($equals($nc(this->stack)->get(i), old)) {
			this->stack->set(i, newtype);
		}
	}
	for (int32_t i = 0; i < $nc(this->this$0->lvar)->length; ++i) {
		$var($Code$LocalVar, lv, this->this$0->lvar->get(i));
		if (lv != nullptr && $equals($nc(lv->sym)->type, old)) {
			$var($Symbol$VarSymbol, sym, lv->sym);
			$assign(sym, $nc(sym)->clone($nc(sym)->owner));
			$set($nc(sym), type, newtype);
			$var($Code$LocalVar, newlv, $nc(this->this$0->lvar)->set(i, $$new($Code$LocalVar, sym)));
			$set($nc(newlv), aliveRanges, lv->aliveRanges);
		}
	}
}

Code$State* Code$State::join(Code$State* other) {
	$useLocalObjectStack();
	$nc(this->defined)->andSet($nc(other)->defined);
	$Assert::check(this->stacksize == other->stacksize && this->nlocks == other->nlocks);
	for (int32_t i = 0; i < this->stacksize;) {
		$var($Type, t, $nc(this->stack)->get(i));
		$var($Type, tother, $nc(other->stack)->get(i));
		$var($Type, result, t == tother ? t : $nc(this->this$0->types)->isSubtype(t, tother) ? tother : this->this$0->types->isSubtype(tother, t) ? t : error());
		int32_t w = $Code::width(result);
		$nc(this->stack)->set(i, result);
		if (w == 2) {
			$Assert::checkNull(this->stack->get(i + 1));
		}
		i += w;
	}
	return this;
}

$Type* Code$State::error() {
	$throwNew($AssertionError, $of("inconsistent stack types at join point"_s));
	$shouldNotReachHere();
}

void Code$State::dump() {
	dump(-1);
}

void Code$State::dump(int32_t pc) {
	$useLocalObjectStack();
	$nc($System::err)->print($$str({"stackMap for "_s, $nc(this->this$0->meth)->owner, "."_s, this->this$0->meth}));
	if (pc == -1) {
		$nc($System::out)->println();
	} else {
		$nc($System::out)->println($$str({" at "_s, $$str(pc)}));
	}
	$System::err->println(" stack (from bottom):"_s);
	for (int32_t i = 0; i < this->stacksize; ++i) {
		$System::err->println($$str({"  "_s, $$str(i), ": "_s, $nc(this->stack)->get(i)}));
	}
	int32_t lastLocal = 0;
	for (int32_t i = this->this$0->max_locals - 1; i >= 0; --i) {
		if ($nc(this->defined)->isMember(i)) {
			lastLocal = i;
			break;
		}
	}
	if (lastLocal >= 0) {
		$System::err->println(" locals:"_s);
	}
	for (int32_t i = 0; i <= lastLocal; ++i) {
		$System::err->print($$str({"  "_s, $$str(i), ": "_s}));
		if ($nc(this->defined)->isMember(i)) {
			$var($Code$LocalVar, var, $nc(this->this$0->lvar)->get(i));
			if (var == nullptr) {
				$System::err->println("(none)"_s);
			} else if (var->sym == nullptr) {
				$System::err->println("UNKNOWN!"_s);
			} else {
				$var($StringBuilder, var$0, $new($StringBuilder));
				var$0->append(""_s);
				var$0->append(var->sym);
				var$0->append(" of type "_s);
				var$0->append($(var->sym->erasure(this->this$0->types)));
				$System::err->println($$str(var$0));
			}
		} else {
			$System::err->println("undefined"_s);
		}
	}
	if (this->nlocks != 0) {
		$System::err->print(" locks:"_s);
		for (int32_t i = 0; i < this->nlocks; ++i) {
			$System::err->print($$str({" "_s, $$str($nc(this->locks)->get(i))}));
		}
		$System::err->println();
	}
}

Code$State::Code$State() {
}

$Class* Code$State::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/jvm/Code;", nullptr, $FINAL | $SYNTHETIC, $field(Code$State, this$0)},
		{"defined", "Lcom/sun/tools/javac/util/Bits;", nullptr, 0, $field(Code$State, defined)},
		{"stack", "[Lcom/sun/tools/javac/code/Type;", nullptr, 0, $field(Code$State, stack)},
		{"stacksize", "I", nullptr, 0, $field(Code$State, stacksize)},
		{"locks", "[I", nullptr, 0, $field(Code$State, locks)},
		{"nlocks", "I", nullptr, 0, $field(Code$State, nlocks)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/jvm/Code;)V", nullptr, 0, $method(Code$State, init$, void, $Code*)},
		{"dump", "()V", nullptr, 0, $virtualMethod(Code$State, dump, void)},
		{"dump", "(I)V", nullptr, 0, $virtualMethod(Code$State, dump, void, int32_t)},
		{"dup", "()Lcom/sun/tools/javac/jvm/Code$State;", nullptr, 0, $virtualMethod(Code$State, dup, Code$State*)},
		{"error", "()Lcom/sun/tools/javac/code/Type;", nullptr, 0, $virtualMethod(Code$State, error, $Type*)},
		{"forceStackTop", "(Lcom/sun/tools/javac/code/Type;)V", nullptr, 0, $virtualMethod(Code$State, forceStackTop, void, $Type*)},
		{"join", "(Lcom/sun/tools/javac/jvm/Code$State;)Lcom/sun/tools/javac/jvm/Code$State;", nullptr, 0, $virtualMethod(Code$State, join, Code$State*, Code$State*)},
		{"lock", "(I)V", nullptr, 0, $virtualMethod(Code$State, lock, void, int32_t)},
		{"markInitialized", "(Lcom/sun/tools/javac/jvm/UninitializedType;)V", nullptr, 0, $virtualMethod(Code$State, markInitialized, void, $UninitializedType*)},
		{"peek", "()Lcom/sun/tools/javac/code/Type;", nullptr, 0, $virtualMethod(Code$State, peek, $Type*)},
		{"pop", "(I)V", nullptr, 0, $virtualMethod(Code$State, pop, void, int32_t)},
		{"pop", "(Lcom/sun/tools/javac/code/Type;)V", nullptr, 0, $virtualMethod(Code$State, pop, void, $Type*)},
		{"pop1", "()Lcom/sun/tools/javac/code/Type;", nullptr, 0, $virtualMethod(Code$State, pop1, $Type*)},
		{"pop2", "()Lcom/sun/tools/javac/code/Type;", nullptr, 0, $virtualMethod(Code$State, pop2, $Type*)},
		{"push", "(Lcom/sun/tools/javac/code/Type;)V", nullptr, 0, $virtualMethod(Code$State, push, void, $Type*)},
		{"unlock", "(I)V", nullptr, 0, $virtualMethod(Code$State, unlock, void, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.jvm.Code$State", "com.sun.tools.javac.jvm.Code", "State", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.jvm.Code$State",
		"java.lang.Object",
		"java.lang.Cloneable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.jvm.Code"
	};
	$loadClass(Code$State, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Code$State);
	});
	return class$;
}

$Class* Code$State::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com