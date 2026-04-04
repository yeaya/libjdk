#include <com/sun/tools/javac/comp/LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext.h>
#include <com/sun/source/tree/ExpressionTree.h>
#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$MethodSymbol.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol$VarSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/comp/LambdaToMethod$1.h>
#include <com/sun/tools/javac/comp/LambdaToMethod$LambdaAnalyzerPreprocessor$Frame.h>
#include <com/sun/tools/javac/comp/LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$1.h>
#include <com/sun/tools/javac/comp/LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$2.h>
#include <com/sun/tools/javac/comp/LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$3.h>
#include <com/sun/tools/javac/comp/LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$4.h>
#include <com/sun/tools/javac/comp/LambdaToMethod$LambdaAnalyzerPreprocessor$SyntheticMethodNameCounter.h>
#include <com/sun/tools/javac/comp/LambdaToMethod$LambdaAnalyzerPreprocessor$TranslationContext.h>
#include <com/sun/tools/javac/comp/LambdaToMethod$LambdaAnalyzerPreprocessor.h>
#include <com/sun/tools/javac/comp/LambdaToMethod$LambdaSymbolKind.h>
#include <com/sun/tools/javac/comp/LambdaToMethod.h>
#include <com/sun/tools/javac/tree/JCTree$JCAssign.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCFieldAccess.h>
#include <com/sun/tools/javac/tree/JCTree$JCFunctionalExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCIdent.h>
#include <com/sun/tools/javac/tree/JCTree$JCLambda.h>
#include <com/sun/tools/javac/tree/JCTree$JCNewClass.h>
#include <com/sun/tools/javac/tree/JCTree$JCVariableDecl.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/tree/TreeInfo.h>
#include <com/sun/tools/javac/tree/TreeMaker.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/ListBuffer.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/javac/util/Names.h>
#include <java/io/Serializable.h>
#include <java/lang/AssertionError.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/Collection.h>
#include <java/util/EnumMap.h>
#include <java/util/HashSet.h>
#include <java/util/Iterator.h>
#include <java/util/LinkedHashMap.h>
#include <java/util/Map.h>
#include <java/util/Optional.h>
#include <java/util/Set.h>
#include <java/util/function/BinaryOperator.h>
#include <java/util/function/Predicate.h>
#include <java/util/stream/Stream.h>
#include <javax/lang/model/element/ElementKind.h>
#include <jcpp.h>

#undef CAPTURED_OUTER_THIS
#undef CAPTURED_THIS
#undef CAPTURED_VAR
#undef EXCEPTION_PARAMETER
#undef LOCAL_VAR
#undef MTH
#undef PARAM
#undef TYP

using $LambdaToMethod$LambdaSymbolKindArray = $Array<::com::sun::tools::javac::comp::LambdaToMethod$LambdaSymbolKind>;
using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Symbol$MethodSymbol = ::com::sun::tools::javac::code::Symbol$MethodSymbol;
using $Symbol$VarSymbol = ::com::sun::tools::javac::code::Symbol$VarSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $LambdaToMethod$1 = ::com::sun::tools::javac::comp::LambdaToMethod$1;
using $LambdaToMethod$LambdaAnalyzerPreprocessor = ::com::sun::tools::javac::comp::LambdaToMethod$LambdaAnalyzerPreprocessor;
using $LambdaToMethod$LambdaAnalyzerPreprocessor$Frame = ::com::sun::tools::javac::comp::LambdaToMethod$LambdaAnalyzerPreprocessor$Frame;
using $LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$1 = ::com::sun::tools::javac::comp::LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$1;
using $LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$2 = ::com::sun::tools::javac::comp::LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$2;
using $LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$3 = ::com::sun::tools::javac::comp::LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$3;
using $LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$4 = ::com::sun::tools::javac::comp::LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$4;
using $LambdaToMethod$LambdaAnalyzerPreprocessor$TranslationContext = ::com::sun::tools::javac::comp::LambdaToMethod$LambdaAnalyzerPreprocessor$TranslationContext;
using $LambdaToMethod$LambdaSymbolKind = ::com::sun::tools::javac::comp::LambdaToMethod$LambdaSymbolKind;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCAssign = ::com::sun::tools::javac::tree::JCTree$JCAssign;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$JCFieldAccess = ::com::sun::tools::javac::tree::JCTree$JCFieldAccess;
using $JCTree$JCIdent = ::com::sun::tools::javac::tree::JCTree$JCIdent;
using $JCTree$JCLambda = ::com::sun::tools::javac::tree::JCTree$JCLambda;
using $JCTree$JCNewClass = ::com::sun::tools::javac::tree::JCTree$JCNewClass;
using $JCTree$JCVariableDecl = ::com::sun::tools::javac::tree::JCTree$JCVariableDecl;
using $TreeInfo = ::com::sun::tools::javac::tree::TreeInfo;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $ListBuffer = ::com::sun::tools::javac::util::ListBuffer;
using $Name = ::com::sun::tools::javac::util::Name;
using $Serializable = ::java::io::Serializable;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $EnumMap = ::java::util::EnumMap;
using $HashSet = ::java::util::HashSet;
using $Iterator = ::java::util::Iterator;
using $LinkedHashMap = ::java::util::LinkedHashMap;
using $Map = ::java::util::Map;
using $Optional = ::java::util::Optional;
using $BinaryOperator = ::java::util::function::BinaryOperator;
using $Predicate = ::java::util::function::Predicate;
using $ElementKind = ::javax::lang::model::element::ElementKind;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$$Lambda$lambda$translate$0 : public $Predicate {
	$class(LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$$Lambda$lambda$translate$0, $NO_CLASS_INIT, $Predicate)
public:
	void init$(LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext* inst, $JCTree$JCIdent* lambdaIdent) {
		$set(this, inst$, inst);
		$set(this, lambdaIdent, lambdaIdent);
	}
	virtual bool test(Object$* out) override {
		 return $nc(inst$)->lambda$translate$0(lambdaIdent, $cast($Symbol, out));
	}
	LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext* inst$ = nullptr;
	$JCTree$JCIdent* lambdaIdent = nullptr;
};
$Class* LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$$Lambda$lambda$translate$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$$Lambda$lambda$translate$0, inst$)},
		{"lambdaIdent", "Lcom/sun/tools/javac/tree/JCTree$JCIdent;", nullptr, $PUBLIC, $field(LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$$Lambda$lambda$translate$0, lambdaIdent)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/comp/LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext;Lcom/sun/tools/javac/tree/JCTree$JCIdent;)V", nullptr, $PUBLIC, $method(LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$$Lambda$lambda$translate$0, init$, void, LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext*, $JCTree$JCIdent*)},
		{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$$Lambda$lambda$translate$0, test, bool, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.tools.javac.comp.LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$$Lambda$lambda$translate$0",
		"java.lang.Object",
		"java.util.function.Predicate",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$$Lambda$lambda$translate$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$$Lambda$lambda$translate$0);
	});
	return class$;
}
$Class* LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$$Lambda$lambda$translate$0::class$ = nullptr;

class LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$$Lambda$lambda$translate$1$1 : public $BinaryOperator {
	$class(LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$$Lambda$lambda$translate$1$1, $NO_CLASS_INIT, $BinaryOperator)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* a, Object$* b) override {
		 return $of(LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext::lambda$translate$1($cast($Symbol, a), $cast($Symbol, b)));
	}
};
$Class* LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$$Lambda$lambda$translate$1$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$$Lambda$lambda$translate$1$1, init$, void)},
		{"apply", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$$Lambda$lambda$translate$1$1, apply, $Object*, Object$*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.tools.javac.comp.LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$$Lambda$lambda$translate$1$1",
		"java.lang.Object",
		"java.util.function.BinaryOperator",
		nullptr,
		methodInfos$$
	};
	$loadClass(LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$$Lambda$lambda$translate$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$$Lambda$lambda$translate$1$1);
	});
	return class$;
}
$Class* LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$$Lambda$lambda$translate$1$1::class$ = nullptr;

void LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext::init$($LambdaToMethod$LambdaAnalyzerPreprocessor* this$1, $JCTree$JCLambda* tree) {
	$useLocalObjectStack();
	$set(this, this$1, this$1);
	$LambdaToMethod$LambdaAnalyzerPreprocessor$TranslationContext::init$(this$1, tree);
	$var($LambdaToMethod$LambdaAnalyzerPreprocessor$Frame, frame, $cast($LambdaToMethod$LambdaAnalyzerPreprocessor$Frame, $nc(this$1->frameStack)->head));
	$init($LambdaToMethod$1);
	switch ($nc($LambdaToMethod$1::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->get(($$nc($nc($nc(frame)->tree)->getTag()))->ordinal())) {
	case 5:
		$set(this, assignedTo, $set(this, self, $cast($JCTree$JCVariableDecl, frame->tree)->sym));
		break;
	case 9:
		$set(this, self, nullptr);
		$set(this, assignedTo, $TreeInfo::symbol($$cast($JCTree, $cast($JCTree$JCAssign, frame->tree)->getVariable())));
		break;
	default:
		$set(this, assignedTo, $set(this, self, nullptr));
		break;
	}
	$init($Kinds$Kind);
	if ($nc(this->owner)->kind == $Kinds$Kind::MTH) {
		$var($Symbol$MethodSymbol, originalOwner, $cast($Symbol$MethodSymbol, this->owner->clone(this->owner->owner)));
		$set(this, translatedSym, $new($LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$1, this, 0x1000 | 2, nullptr, nullptr, $(this->owner->enclClass()), this$1, originalOwner));
	} else {
		$set(this, translatedSym, $nc(this$1->this$0)->makePrivateSyntheticMethod(0, nullptr, nullptr, $(this->owner->enclClass())));
	}
	$load($LambdaToMethod$LambdaSymbolKind);
	$set(this, translatedSymbols, $new($EnumMap, $LambdaToMethod$LambdaSymbolKind::class$));
	$init($LambdaToMethod$LambdaSymbolKind);
	this->translatedSymbols->put($LambdaToMethod$LambdaSymbolKind::PARAM, $$new($LinkedHashMap));
	this->translatedSymbols->put($LambdaToMethod$LambdaSymbolKind::LOCAL_VAR, $$new($LinkedHashMap));
	this->translatedSymbols->put($LambdaToMethod$LambdaSymbolKind::CAPTURED_VAR, $$new($LinkedHashMap));
	this->translatedSymbols->put($LambdaToMethod$LambdaSymbolKind::CAPTURED_THIS, $$new($LinkedHashMap));
	this->translatedSymbols->put($LambdaToMethod$LambdaSymbolKind::CAPTURED_OUTER_THIS, $$new($LinkedHashMap));
	$set(this, freeVarProcessedLocalClasses, $new($HashSet));
}

$String* LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext::serializedLambdaDisambiguation() {
	$useLocalObjectStack();
	$var($StringBuilder, buf, $new($StringBuilder));
	$Assert::check($nc(this->owner)->type != nullptr || this->this$1->directlyEnclosingLambda() != nullptr);
	if (this->owner->type != nullptr) {
		buf->append($($nc(this->this$1->this$0)->typeSig(this->owner->type, true)));
		buf->append(":"_s);
	}
	buf->append($($nc($nc($($nc($nc(this->this$1->this$0)->types)->findDescriptorSymbol($nc($nc(($cast($JCTree$JCLambda, this->tree)))->type)->tsym)))->owner)->flatName()));
	buf->append(" "_s);
	if (this->assignedTo != nullptr) {
		buf->append($(this->assignedTo->flatName()));
		buf->append("="_s);
	}
	{
		$init($LambdaToMethod$LambdaSymbolKind);
		$var($Iterator, i$, $$nc($$nc(getSymbolMap($LambdaToMethod$LambdaSymbolKind::CAPTURED_VAR))->keySet())->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Symbol, fv, $cast($Symbol, i$->next()));
			if (fv != this->self) {
				buf->append($(this->this$1->this$0->typeSig($nc(fv)->type, true)));
				buf->append(" "_s);
				buf->append($(fv->flatName()));
				buf->append(","_s);
			}
		}
	}
	return buf->toString();
}

$Name* LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext::lambdaName() {
	$useLocalObjectStack();
	$var($StringBuilder, var$0, $new($StringBuilder));
	var$0->append($(enclosingMethodName()));
	var$0->append("$"_s);
	var$0->append(this->this$1->lambdaCount++);
	return $nc($nc($nc(this->this$1->this$0)->names)->lambda)->append($($nc($nc(this->this$1->this$0)->names)->fromString($$str(var$0))));
}

$Name* LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext::serializedLambdaName() {
	$useLocalObjectStack();
	$var($StringBuilder, buf, $new($StringBuilder));
	buf->append($nc($nc(this->this$1->this$0)->names)->lambda);
	buf->append($(enclosingMethodName()));
	buf->append(u'$');
	$var($String, disam, serializedLambdaDisambiguation());
	buf->append($($Integer::toHexString($nc(disam)->hashCode())));
	buf->append(u'$');
	buf->append($nc(this->this$1->syntheticMethodNameCounts)->getIndex(buf));
	$var($String, result, buf->toString());
	return $nc(this->this$1->this$0->names)->fromString(result);
}

$Symbol* LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext::translate($Symbol* sym, $LambdaToMethod$LambdaSymbolKind* skind) {
	$useLocalObjectStack();
	$var($Symbol, ret, nullptr);
	{
		$init($LambdaToMethod$1);
		$var($Name, name, nullptr);
		switch ($nc($LambdaToMethod$1::$SwitchMap$com$sun$tools$javac$comp$LambdaToMethod$LambdaSymbolKind)->get($nc((skind))->ordinal())) {
		case 1:
			$assign(ret, sym);
			break;
		case 2:
			$assign(ret, $new($LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$2, this, (0x1000 | 0x10) | (int64_t)0x0000000200000000, $nc(sym)->name, $($nc($nc(this->this$1->this$0)->types)->erasure($nc(sym)->type)), this->translatedSym, sym));
			break;
		case 3:
			$assign(name, $nc($nc(this->this$1->this$0)->names)->fromString($$new($String, $$str({$($$nc($$nc($nc(sym)->flatName())->toString())->replace(u'.', u'$')), $nc($nc(this->this$1->this$0)->names)->dollarThis}))));
			$assign(ret, $new($LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$3, this, (0x1000 | 0x10) | (int64_t)0x0000000200000000, name, $($nc(this->this$1->this$0->types)->erasure(sym->type)), this->translatedSym, sym));
			break;
		case 4:
			$assign(ret, $new($LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$4, this, $nc(sym)->flags() & 0x10, $nc(sym)->name, $nc(sym)->type, this->translatedSym, sym));
			$cast($Symbol$VarSymbol, ret)->pos = $cast($Symbol$VarSymbol, sym)->pos;
			if ($cast($Symbol$VarSymbol, sym)->isExceptionParameter()) {
				$init($ElementKind);
				$cast($Symbol$VarSymbol, ret)->setData($ElementKind::EXCEPTION_PARAMETER);
			}
			break;
		case 5:
			{
				int64_t var$0 = ($nc(sym)->flags() & 0x10) | (int64_t)0x0000000200000000;
				$var($Name, var$1, sym->name);
				$assign(ret, $new($Symbol$VarSymbol, var$0, var$1, $($nc($nc(this->this$1->this$0)->types)->erasure(sym->type)), this->translatedSym));
				$cast($Symbol$VarSymbol, ret)->pos = $cast($Symbol$VarSymbol, sym)->pos;
				if ($cast($Symbol$VarSymbol, sym)->isExceptionParameter()) {
					$init($ElementKind);
					$cast($Symbol$VarSymbol, ret)->setData($ElementKind::EXCEPTION_PARAMETER);
				}
				break;
			}
		default:
			$Assert::error($(skind->name()));
			$throwNew($AssertionError);
		}
	}
	if (ret != sym && skind->propagateAnnotations()) {
		$nc(ret)->setDeclarationAttributes($($nc(sym)->getRawAttributes()));
		ret->setTypeAttributes($(sym->getRawTypeAttributes()));
	}
	return ret;
}

void LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext::addSymbol($Symbol* sym, $LambdaToMethod$LambdaSymbolKind* skind$renamed) {
	$useLocalObjectStack();
	$var($LambdaToMethod$LambdaSymbolKind, skind, skind$renamed);
	$init($LambdaToMethod$LambdaSymbolKind);
	$init($Kinds$Kind);
	if (skind == $LambdaToMethod$LambdaSymbolKind::CAPTURED_THIS && sym != nullptr && sym->kind == $Kinds$Kind::TYP && !$nc(this->this$1->typesUnderConstruction)->isEmpty()) {
		$var($Symbol$ClassSymbol, currentClass, this->this$1->currentClass());
		if (currentClass != nullptr && $nc(this->this$1->typesUnderConstruction)->contains(currentClass)) {
			$Assert::check(!$equals(sym, currentClass));
			skind = $LambdaToMethod$LambdaSymbolKind::CAPTURED_OUTER_THIS;
		}
	}
	$var($Map, transMap, getSymbolMap(skind));
	if (!$nc(transMap)->containsKey(sym)) {
		transMap->put(sym, $(translate(sym, skind)));
	}
}

$Map* LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext::getSymbolMap($LambdaToMethod$LambdaSymbolKind* skind) {
	$var($Map, m, $cast($Map, $nc(this->translatedSymbols)->get(skind)));
	$Assert::checkNonNull(m);
	return m;
}

$JCTree* LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext::translate($JCTree$JCIdent* lambdaIdent) {
	$useLocalObjectStack();
	$var($LambdaToMethod$LambdaSymbolKindArray, arr$, $LambdaToMethod$LambdaSymbolKind::values());
	for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
		$LambdaToMethod$LambdaSymbolKind* kind = arr$->get(i$);
		{
			$var($Map, m, getSymbolMap(kind));
			{
				$init($LambdaToMethod$1);
				$var($Optional, proxy, nullptr);
				switch ($nc($LambdaToMethod$1::$SwitchMap$com$sun$tools$javac$comp$LambdaToMethod$LambdaSymbolKind)->get($nc((kind))->ordinal())) {
				default:
					if ($nc(m)->containsKey($nc(lambdaIdent)->sym)) {
						$var($Symbol, tSym, $cast($Symbol, m->get(lambdaIdent->sym)));
						$var($JCTree, t, $$nc($nc($nc(this->this$1->this$0)->make)->Ident(tSym))->setType(lambdaIdent->type));
						return t;
					}
					break;
				case 3:
					$assign(proxy, $$nc($$nc($$nc($nc(m)->keySet())->stream())->filter($$new(LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$$Lambda$lambda$translate$0, this, lambdaIdent)))->reduce($$new(LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$$Lambda$lambda$translate$1$1)));
					if ($nc(proxy)->isPresent()) {
						$var($Symbol, tSym, $cast($Symbol, m->get($(proxy->get()))));
						$var($JCTree$JCExpression, t, $$nc($nc($nc(this->this$1->this$0)->make)->Ident(tSym))->setType($nc($nc($nc(lambdaIdent)->sym)->owner)->type));
						$assign(t, $nc(this->this$1->this$0->make)->Select(t, lambdaIdent->name));
						$nc(t)->setType(lambdaIdent->type);
						$TreeInfo::setSymbol(t, lambdaIdent->sym);
						return t;
					}
					break;
				}
			}
		}
	}
	return nullptr;
}

$JCTree* LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext::translate($JCTree$JCFieldAccess* fieldAccess) {
	$useLocalObjectStack();
	$Assert::check($nc(fieldAccess)->name == $nc($nc(this->this$1->this$0)->names)->_this);
	$init($LambdaToMethod$LambdaSymbolKind);
	$var($Map, m, $cast($Map, $nc(this->translatedSymbols)->get($LambdaToMethod$LambdaSymbolKind::CAPTURED_OUTER_THIS)));
	if ($nc(m)->containsKey($nc(fieldAccess->sym)->owner)) {
		$var($Symbol, tSym, $cast($Symbol, m->get(fieldAccess->sym->owner)));
		$var($JCTree$JCExpression, t, $$nc($nc(this->this$1->this$0->make)->Ident(tSym))->setType($nc(fieldAccess->sym->owner)->type));
		return t;
	}
	return nullptr;
}

$JCTree$JCNewClass* LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext::translate($JCTree$JCNewClass* newClass) {
	$useLocalObjectStack();
	$Assert::check($nc($nc($nc($nc(newClass)->clazz)->type)->tsym)->hasOuterInstance() && newClass->encl == nullptr);
	$init($LambdaToMethod$LambdaSymbolKind);
	$var($Map, m, $cast($Map, $nc(this->translatedSymbols)->get($LambdaToMethod$LambdaSymbolKind::CAPTURED_OUTER_THIS)));
	$var($Type, enclosingType, $nc($nc(newClass->clazz)->type)->getEnclosingType());
	if ($nc(m)->containsKey($nc(enclosingType)->tsym)) {
		$var($Symbol, tSym, $cast($Symbol, m->get(enclosingType->tsym)));
		$var($JCTree$JCExpression, encl, $$nc($nc($nc(this->this$1->this$0)->make)->Ident(tSym))->setType(enclosingType));
		$set(newClass, encl, encl);
	}
	return newClass;
}

void LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext::complete() {
	$useLocalObjectStack();
	if (this->syntheticParams != nullptr) {
		return;
	}
	bool inInterface = $nc($nc(this->translatedSym)->owner)->isInterface();
	$init($LambdaToMethod$LambdaSymbolKind);
	bool thisReferenced = !$$nc(getSymbolMap($LambdaToMethod$LambdaSymbolKind::CAPTURED_THIS))->isEmpty();
	$nc(this->translatedSym)->flags_field = ((((0x1000 | (int64_t)0x0002000000000000) | ($nc(this->owner)->flags_field & 0x0800)) | ($nc($nc(this->owner)->owner)->flags_field & 0x0800)) | 2) | (thisReferenced ? (inInterface ? (int64_t)0x0000080000000000 : 0) : 8);
	$var($ListBuffer, params, $new($ListBuffer));
	$var($ListBuffer, parameterSymbols, $new($ListBuffer));
	{
		$var($Iterator, i$, $$nc($$nc(getSymbolMap($LambdaToMethod$LambdaSymbolKind::CAPTURED_VAR))->values())->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Symbol, thisSym, $cast($Symbol, i$->next()));
			{
				params->append($($nc($nc(this->this$1->this$0)->make)->VarDef($cast($Symbol$VarSymbol, thisSym), nullptr)));
				parameterSymbols->append($cast($Symbol$VarSymbol, thisSym));
			}
		}
	}
	{
		$var($Iterator, i$, $$nc($$nc(getSymbolMap($LambdaToMethod$LambdaSymbolKind::CAPTURED_OUTER_THIS))->values())->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Symbol, thisSym, $cast($Symbol, i$->next()));
			{
				params->append($($nc($nc(this->this$1->this$0)->make)->VarDef($cast($Symbol$VarSymbol, thisSym), nullptr)));
				parameterSymbols->append($cast($Symbol$VarSymbol, thisSym));
			}
		}
	}
	{
		$var($Iterator, i$, $$nc($$nc(getSymbolMap($LambdaToMethod$LambdaSymbolKind::PARAM))->values())->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Symbol, thisSym, $cast($Symbol, i$->next()));
			{
				params->append($($nc($nc(this->this$1->this$0)->make)->VarDef($cast($Symbol$VarSymbol, thisSym), nullptr)));
				parameterSymbols->append($cast($Symbol$VarSymbol, thisSym));
			}
		}
	}
	$set(this, syntheticParams, params->toList());
	$set($nc(this->translatedSym), params$, parameterSymbols->toList());
	$set($nc(this->translatedSym), name, isSerializable() ? serializedLambdaName() : lambdaName());
	$var($Type, var$0, generatedLambdaSig());
	$set($nc(this->translatedSym), type, $nc($nc(this->this$1->this$0)->types)->createMethodTypeWithParameters(var$0, $($TreeInfo::types(this->syntheticParams))));
}

$Type* LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext::generatedLambdaSig() {
	return $nc($nc(this->this$1->this$0)->types)->erasure($($nc($cast($JCTree$JCLambda, this->tree))->getDescriptorType($nc(this->this$1->this$0)->types)));
}

$Symbol* LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext::lambda$translate$1($Symbol* a, $Symbol* b) {
	$init(LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext);
	return $nc(a)->isEnclosedBy($cast($Symbol$ClassSymbol, b)) ? a : b;
}

bool LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext::lambda$translate$0($JCTree$JCIdent* lambdaIdent, $Symbol* out) {
	return $nc($nc(lambdaIdent)->sym)->isMemberOf($nc($nc(out)->type)->tsym, $nc(this->this$1->this$0)->types);
}

LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext::LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext() {
}

$Class* LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("com.sun.tools.javac.comp.LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$$Lambda$lambda$translate$0")) {
			return LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$$Lambda$lambda$translate$0::load$(name, initialize);
		}
		if (name->equals("com.sun.tools.javac.comp.LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$$Lambda$lambda$translate$1$1")) {
			return LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$$Lambda$lambda$translate$1$1::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "Lcom/sun/tools/javac/comp/LambdaToMethod$LambdaAnalyzerPreprocessor;", nullptr, $FINAL | $SYNTHETIC, $field(LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext, this$1)},
		{"self", "Lcom/sun/tools/javac/code/Symbol;", nullptr, $FINAL, $field(LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext, self)},
		{"assignedTo", "Lcom/sun/tools/javac/code/Symbol;", nullptr, $FINAL, $field(LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext, assignedTo)},
		{"translatedSymbols", "Ljava/util/Map;", "Ljava/util/Map<Lcom/sun/tools/javac/comp/LambdaToMethod$LambdaSymbolKind;Ljava/util/Map<Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;>;>;", 0, $field(LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext, translatedSymbols)},
		{"translatedSym", "Lcom/sun/tools/javac/code/Symbol$MethodSymbol;", nullptr, 0, $field(LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext, translatedSym)},
		{"syntheticParams", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;>;", 0, $field(LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext, syntheticParams)},
		{"freeVarProcessedLocalClasses", "Ljava/util/Set;", "Ljava/util/Set<Lcom/sun/tools/javac/code/Symbol;>;", $FINAL, $field(LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext, freeVarProcessedLocalClasses)},
		{"methodReferenceReceiver", "Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, 0, $field(LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext, methodReferenceReceiver)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/comp/LambdaToMethod$LambdaAnalyzerPreprocessor;Lcom/sun/tools/javac/tree/JCTree$JCLambda;)V", nullptr, 0, $method(LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext, init$, void, $LambdaToMethod$LambdaAnalyzerPreprocessor*, $JCTree$JCLambda*)},
		{"addSymbol", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/comp/LambdaToMethod$LambdaSymbolKind;)V", nullptr, 0, $virtualMethod(LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext, addSymbol, void, $Symbol*, $LambdaToMethod$LambdaSymbolKind*)},
		{"complete", "()V", nullptr, 0, $virtualMethod(LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext, complete, void)},
		{"generatedLambdaSig", "()Lcom/sun/tools/javac/code/Type;", nullptr, 0, $virtualMethod(LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext, generatedLambdaSig, $Type*)},
		{"getSymbolMap", "(Lcom/sun/tools/javac/comp/LambdaToMethod$LambdaSymbolKind;)Ljava/util/Map;", "(Lcom/sun/tools/javac/comp/LambdaToMethod$LambdaSymbolKind;)Ljava/util/Map<Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;>;", 0, $virtualMethod(LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext, getSymbolMap, $Map*, $LambdaToMethod$LambdaSymbolKind*)},
		{"lambda$translate$0", "(Lcom/sun/tools/javac/tree/JCTree$JCIdent;Lcom/sun/tools/javac/code/Symbol;)Z", nullptr, $PRIVATE | $SYNTHETIC, $method(LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext, lambda$translate$0, bool, $JCTree$JCIdent*, $Symbol*)},
		{"lambda$translate$1", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/code/Symbol;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext, lambda$translate$1, $Symbol*, $Symbol*, $Symbol*)},
		{"lambdaName", "()Lcom/sun/tools/javac/util/Name;", nullptr, $PRIVATE, $method(LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext, lambdaName, $Name*)},
		{"serializedLambdaDisambiguation", "()Ljava/lang/String;", nullptr, $PRIVATE, $method(LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext, serializedLambdaDisambiguation, $String*)},
		{"serializedLambdaName", "()Lcom/sun/tools/javac/util/Name;", nullptr, $PRIVATE, $method(LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext, serializedLambdaName, $Name*)},
		{"translate", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/comp/LambdaToMethod$LambdaSymbolKind;)Lcom/sun/tools/javac/code/Symbol;", nullptr, 0, $virtualMethod(LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext, translate, $Symbol*, $Symbol*, $LambdaToMethod$LambdaSymbolKind*)},
		{"translate", "(Lcom/sun/tools/javac/tree/JCTree$JCIdent;)Lcom/sun/tools/javac/tree/JCTree;", nullptr, 0, $virtualMethod(LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext, translate, $JCTree*, $JCTree$JCIdent*)},
		{"translate", "(Lcom/sun/tools/javac/tree/JCTree$JCFieldAccess;)Lcom/sun/tools/javac/tree/JCTree;", nullptr, $PUBLIC, $virtualMethod(LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext, translate, $JCTree*, $JCTree$JCFieldAccess*)},
		{"translate", "(Lcom/sun/tools/javac/tree/JCTree$JCNewClass;)Lcom/sun/tools/javac/tree/JCTree$JCNewClass;", nullptr, $PUBLIC, $virtualMethod(LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext, translate, $JCTree$JCNewClass*, $JCTree$JCNewClass*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.LambdaToMethod$LambdaAnalyzerPreprocessor", "com.sun.tools.javac.comp.LambdaToMethod", "LambdaAnalyzerPreprocessor", 0},
		{"com.sun.tools.javac.comp.LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext", "com.sun.tools.javac.comp.LambdaToMethod$LambdaAnalyzerPreprocessor", "LambdaTranslationContext", 0},
		{"com.sun.tools.javac.comp.LambdaToMethod$LambdaAnalyzerPreprocessor$TranslationContext", "com.sun.tools.javac.comp.LambdaToMethod$LambdaAnalyzerPreprocessor", "TranslationContext", $ABSTRACT},
		{"com.sun.tools.javac.comp.LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$4", nullptr, nullptr, 0},
		{"com.sun.tools.javac.comp.LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$3", nullptr, nullptr, 0},
		{"com.sun.tools.javac.comp.LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$2", nullptr, nullptr, 0},
		{"com.sun.tools.javac.comp.LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext$1", nullptr, nullptr, 0},
		{"com.sun.tools.javac.tree.JCTree$JCLambda", "com.sun.tools.javac.tree.JCTree", "JCLambda", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.comp.LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext",
		"com.sun.tools.javac.comp.LambdaToMethod$LambdaAnalyzerPreprocessor$TranslationContext",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Lcom/sun/tools/javac/comp/LambdaToMethod$LambdaAnalyzerPreprocessor$TranslationContext<Lcom/sun/tools/javac/tree/JCTree$JCLambda;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.comp.LambdaToMethod"
	};
	$loadClass(LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext);
	});
	return class$;
}

$Class* LambdaToMethod$LambdaAnalyzerPreprocessor$LambdaTranslationContext::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com