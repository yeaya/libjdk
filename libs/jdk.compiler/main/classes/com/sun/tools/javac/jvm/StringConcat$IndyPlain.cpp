#include <com/sun/tools/javac/jvm/StringConcat$IndyPlain.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$DynamicMethodSymbol.h>
#include <com/sun/tools/javac/code/Symbol$MethodHandleSymbol.h>
#include <com/sun/tools/javac/code/Symbol$MethodSymbol.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Symtab.h>
#include <com/sun/tools/javac/code/Type$JCVoidType.h>
#include <com/sun/tools/javac/code/Type$MethodType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/comp/Env.h>
#include <com/sun/tools/javac/comp/Resolve.h>
#include <com/sun/tools/javac/jvm/Gen.h>
#include <com/sun/tools/javac/jvm/Items$Item.h>
#include <com/sun/tools/javac/jvm/Items.h>
#include <com/sun/tools/javac/jvm/PoolConstant$LoadableConstant.h>
#include <com/sun/tools/javac/jvm/StringConcat$Indy.h>
#include <com/sun/tools/javac/jvm/StringConcat.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/tree/TreeMaker.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <com/sun/tools/javac/util/Context.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/ListBuffer.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/javac/util/Names.h>
#include <java/util/Iterator.h>
#include <jcpp.h>

using $PoolConstant$LoadableConstantArray = $Array<::com::sun::tools::javac::jvm::PoolConstant$LoadableConstant>;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$DynamicMethodSymbol = ::com::sun::tools::javac::code::Symbol$DynamicMethodSymbol;
using $Symbol$MethodHandleSymbol = ::com::sun::tools::javac::code::Symbol$MethodHandleSymbol;
using $Symbol$MethodSymbol = ::com::sun::tools::javac::code::Symbol$MethodSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$MethodType = ::com::sun::tools::javac::code::Type$MethodType;
using $Items$Item = ::com::sun::tools::javac::jvm::Items$Item;
using $StringConcat$Indy = ::com::sun::tools::javac::jvm::StringConcat$Indy;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $Context = ::com::sun::tools::javac::util::Context;
using $JCDiagnostic$DiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition;
using $List = ::com::sun::tools::javac::util::List;
using $ListBuffer = ::com::sun::tools::javac::util::ListBuffer;
using $Name = ::com::sun::tools::javac::util::Name;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

void StringConcat$IndyPlain::init$($Context* context) {
	$StringConcat$Indy::init$(context);
}

void StringConcat$IndyPlain::emit($JCDiagnostic$DiagnosticPosition* pos, $List* args, bool generateFirstArg, $Type* type) {
	$useLocalObjectStack();
	$var($List, split, this->split(args));
	bool first = true;
	{
		$var($Iterator, i$, $nc(split)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($List, t, $cast($List, i$->next()));
			{
				$Assert::check(!$nc(t)->isEmpty(), "Arguments list is empty"_s);
				$var($ListBuffer, dynamicArgs, $new($ListBuffer));
				{
					$var($Iterator, i$, t->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($JCTree, arg, $cast($JCTree, i$->next()));
						{
							$var($Object, constVal, $nc($nc(arg)->type)->constValue());
							if (""_s->equals(constVal)) {
								continue;
							}
							if (arg->type == $nc(this->syms)->botType) {
								dynamicArgs->add($nc($($nc(this->types)->boxedClass(this->syms->voidType)))->type);
							} else {
								dynamicArgs->add($(sharpestAccessible(arg->type)));
							}
							if (!first || generateFirstArg) {
								$$nc($nc(this->gen)->genExpr(arg, arg->type))->load();
							}
							first = false;
						}
					}
				}
				doCall(type, pos, $(dynamicArgs->toList()));
			}
		}
	}
	if (split->size() > 1) {
		$var($ListBuffer, argTypes, $new($ListBuffer));
		for (int32_t c = 0; c < split->size(); ++c) {
			argTypes->append($nc(this->syms)->stringType);
		}
		doCall(type, pos, $(argTypes->toList()));
	}
}

void StringConcat$IndyPlain::doCall($Type* type, $JCDiagnostic$DiagnosticPosition* pos, $List* dynamicArgTypes) {
	$useLocalObjectStack();
	$var($Type$MethodType, indyType, $new($Type$MethodType, dynamicArgTypes, type, $($List::nil()), $nc(this->syms)->methodClass));
	int32_t prevPos = $nc(this->make)->pos;
	$var($Throwable, var$0, nullptr);
	try {
		this->make->at(pos);
		$var($List, bsm_staticArgs, $List::of(this->syms->methodHandleLookupType, this->syms->stringType, this->syms->methodTypeType));
		$var($Symbol, bsm, $nc(this->rs)->resolveInternalMethod(pos, $($nc(this->gen)->getAttrEnv()), this->syms->stringConcatFactory, $nc(this->names)->makeConcat, bsm_staticArgs, nullptr));
		$var($Name, var$1, this->names->makeConcat);
		$var($Symbol, var$2, this->syms->noSymbol);
		$var($Symbol$MethodHandleSymbol, var$3, $nc($cast($Symbol$MethodSymbol, bsm))->asHandle());
		$var($Symbol$DynamicMethodSymbol, dynSym, $new($Symbol$DynamicMethodSymbol, var$1, var$2, var$3, indyType, $$cast($PoolConstant$LoadableConstantArray, $$nc($List::nil())->toArray($$new($PoolConstant$LoadableConstantArray, 0)))));
		$var($Items$Item, item, $$nc(this->gen->getItems())->makeDynamicItem(dynSym));
		$nc(item)->invoke();
	} catch ($Throwable& var$4) {
		$assign(var$0, var$4);
	} /*finally*/ {
		this->make->at(prevPos);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

StringConcat$IndyPlain::StringConcat$IndyPlain() {
}

$Class* StringConcat$IndyPlain::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/util/Context;)V", nullptr, $PUBLIC, $method(StringConcat$IndyPlain, init$, void, $Context*)},
		{"doCall", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/util/List;)V", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)V", $PRIVATE, $method(StringConcat$IndyPlain, doCall, void, $Type*, $JCDiagnostic$DiagnosticPosition*, $List*)},
		{"emit", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/util/List;ZLcom/sun/tools/javac/code/Type;)V", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree;>;ZLcom/sun/tools/javac/code/Type;)V", $PROTECTED, $virtualMethod(StringConcat$IndyPlain, emit, void, $JCDiagnostic$DiagnosticPosition*, $List*, bool, $Type*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.jvm.StringConcat$IndyPlain", "com.sun.tools.javac.jvm.StringConcat", "IndyPlain", $PRIVATE | $STATIC},
		{"com.sun.tools.javac.jvm.StringConcat$Indy", "com.sun.tools.javac.jvm.StringConcat", "Indy", $PRIVATE | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.jvm.StringConcat$IndyPlain",
		"com.sun.tools.javac.jvm.StringConcat$Indy",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.jvm.StringConcat"
	};
	$loadClass(StringConcat$IndyPlain, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(StringConcat$IndyPlain);
	});
	return class$;
}

$Class* StringConcat$IndyPlain::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com