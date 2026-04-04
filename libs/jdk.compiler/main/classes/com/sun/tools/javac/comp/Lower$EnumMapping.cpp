#include <com/sun/tools/javac/comp/Lower$EnumMapping.h>
#include <com/sun/tools/javac/code/Scope$WriteableScope.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$MethodSymbol.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol$VarSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Symtab.h>
#include <com/sun/tools/javac/code/Type$ArrayType.h>
#include <com/sun/tools/javac/code/Type$JCPrimitiveType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/comp/Lower.h>
#include <com/sun/tools/javac/jvm/ClassWriter.h>
#include <com/sun/tools/javac/jvm/Target.h>
#include <com/sun/tools/javac/tree/JCTree$JCArrayAccess.h>
#include <com/sun/tools/javac/tree/JCTree$JCAssign.h>
#include <com/sun/tools/javac/tree/JCTree$JCBlock.h>
#include <com/sun/tools/javac/tree/JCTree$JCCatch.h>
#include <com/sun/tools/javac/tree/JCTree$JCClassDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpressionStatement.h>
#include <com/sun/tools/javac/tree/JCTree$JCLiteral.h>
#include <com/sun/tools/javac/tree/JCTree$JCMethodInvocation.h>
#include <com/sun/tools/javac/tree/JCTree$JCNewArray.h>
#include <com/sun/tools/javac/tree/JCTree$JCStatement.h>
#include <com/sun/tools/javac/tree/JCTree$JCTry.h>
#include <com/sun/tools/javac/tree/JCTree$JCVariableDecl.h>
#include <com/sun/tools/javac/tree/TreeMaker.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/ListBuffer.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/javac/util/Names.h>
#include <java/util/Iterator.h>
#include <java/util/LinkedHashMap.h>
#include <java/util/Map$Entry.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Symbol$MethodSymbol = ::com::sun::tools::javac::code::Symbol$MethodSymbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Symbol$VarSymbol = ::com::sun::tools::javac::code::Symbol$VarSymbol;
using $Type$ArrayType = ::com::sun::tools::javac::code::Type$ArrayType;
using $Lower = ::com::sun::tools::javac::comp::Lower;
using $ClassWriter = ::com::sun::tools::javac::jvm::ClassWriter;
using $JCTree$JCBlock = ::com::sun::tools::javac::tree::JCTree$JCBlock;
using $JCTree$JCClassDecl = ::com::sun::tools::javac::tree::JCTree$JCClassDecl;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$JCLiteral = ::com::sun::tools::javac::tree::JCTree$JCLiteral;
using $JCTree$JCStatement = ::com::sun::tools::javac::tree::JCTree$JCStatement;
using $JCTree$JCVariableDecl = ::com::sun::tools::javac::tree::JCTree$JCVariableDecl;
using $JCDiagnostic$DiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition;
using $List = ::com::sun::tools::javac::util::List;
using $ListBuffer = ::com::sun::tools::javac::util::ListBuffer;
using $Name = ::com::sun::tools::javac::util::Name;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $LinkedHashMap = ::java::util::LinkedHashMap;
using $Map$Entry = ::java::util::Map$Entry;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

void Lower$EnumMapping::init$($Lower* this$0, $JCDiagnostic$DiagnosticPosition* pos, $Symbol$TypeSymbol* forEnum) {
	$useLocalObjectStack();
	$set(this, this$0, this$0);
	$set(this, pos, nullptr);
	this->next = 1;
	$set(this, forEnum, forEnum);
	$set(this, values, $new($LinkedHashMap));
	$set(this, pos, pos);
	$var($StringBuilder, var$0, $new($StringBuilder));
	var$0->append(this$0->target->syntheticNameChar());
	var$0->append("SwitchMap"_s);
	var$0->append(this$0->target->syntheticNameChar());
	var$0->append($($($$nc($$nc($nc(this$0->names)->fromUtf($($ClassWriter::externalize($($nc($nc($nc(forEnum)->type)->tsym)->flatName())))))->toString())->replace(u'/', u'.'))->replace(u'.', this$0->target->syntheticNameChar())));
	$var($Name, varName, $nc(this$0->names)->fromString($$str(var$0)));
	$var($Symbol$ClassSymbol, outerCacheClass, this$0->outerCacheClass());
	$set(this, mapVar, $new($Symbol$VarSymbol, (8 | 0x1000) | 0x10, varName, $$new($Type$ArrayType, $nc(this$0->syms)->intType, $nc(this$0->syms)->arrayClass), outerCacheClass));
	this$0->enterSynthetic(pos, this->mapVar, $($nc(outerCacheClass)->members()));
}

$JCTree$JCLiteral* Lower$EnumMapping::forConstant($Symbol$VarSymbol* v) {
	$var($Integer, result, $cast($Integer, $nc(this->values)->get(v)));
	if (result == nullptr) {
		this->values->put(v, $assign(result, $Integer::valueOf(this->next++)));
	}
	return $nc(this->this$0->make)->Literal(result);
}

void Lower$EnumMapping::translate() {
	$useLocalObjectStack();
	$nc(this->this$0->make)->at($nc(this->pos)->getStartPosition());
	$var($JCTree$JCClassDecl, owner, this->this$0->classDef($cast($Symbol$ClassSymbol, $nc(this->mapVar)->owner)));
	$var($Symbol$MethodSymbol, valuesMethod, this->this$0->lookupMethod(this->pos, $nc(this->this$0->names)->values, $nc(this->forEnum)->type, $($List::nil())));
	$var($JCTree$JCExpression, size, $nc(this->this$0->make)->Select($($nc(this->this$0->make)->App($($nc(this->this$0->make)->QualIdent(valuesMethod)))), $nc(this->this$0->syms)->lengthVar));
	$var($JCTree$JCExpression, var$0, $nc(this->this$0->make)->Type(this->this$0->syms->intType));
	$var($JCTree$JCExpression, mapVarInit, $$nc($nc(this->this$0->make)->NewArray(var$0, $($List::of(size)), nullptr))->setType($$new($Type$ArrayType, this->this$0->syms->intType, this->this$0->syms->arrayClass)));
	$var($ListBuffer, stmts, $new($ListBuffer));
	$var($Symbol, ordinalMethod, this->this$0->lookupMethod(this->pos, this->this$0->names->ordinal, this->forEnum->type, $($List::nil())));
	$var($JCTree$JCVariableDecl, var$1, $nc(this->this$0->make)->VarDef($$new($Symbol$VarSymbol, (int64_t)0x0000000200000000, this->this$0->names->ex, this->this$0->syms->noSuchFieldErrorType, this->this$0->syms->noSymbol), nullptr));
	$var($List, catcher, $$nc($List::nil())->prepend($($nc(this->this$0->make)->Catch(var$1, $(this->this$0->make->Block(0, $($List::nil())))))));
	{
		$var($Iterator, i$, $$nc($nc(this->values)->entrySet())->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Map$Entry, e, $cast($Map$Entry, i$->next()));
			{
				$var($Symbol$VarSymbol, enumerator, $cast($Symbol$VarSymbol, $nc(e)->getKey()));
				$var($Integer, mappedValue, $cast($Integer, e->getValue()));
				$var($JCTree$JCExpression, var$2, $nc(this->this$0->make)->Indexed(this->mapVar, $($nc(this->this$0->make)->App($($nc(this->this$0->make)->Select($($nc(this->this$0->make)->QualIdent(enumerator)), ordinalMethod))))));
				$var($JCTree$JCExpression, assign, $$nc($nc(this->this$0->make)->Assign(var$2, $(this->this$0->make->Literal(mappedValue))))->setType(this->this$0->syms->intType));
				$var($JCTree$JCStatement, exec, $nc(this->this$0->make)->Exec(assign));
				$var($JCTree$JCStatement, _try$, $nc(this->this$0->make)->Try($($nc(this->this$0->make)->Block(0, $($List::of(exec)))), catcher, nullptr));
				stmts->append(_try$);
			}
		}
	}
	$set($nc(owner), defs, $$nc($nc($nc(owner)->defs)->prepend($($nc(this->this$0->make)->Block(8, $(stmts->toList())))))->prepend($($nc(this->this$0->make)->VarDef(this->mapVar, mapVarInit))));
}

Lower$EnumMapping::Lower$EnumMapping() {
}

$Class* Lower$EnumMapping::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/comp/Lower;", nullptr, $FINAL | $SYNTHETIC, $field(Lower$EnumMapping, this$0)},
		{"pos", "Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;", nullptr, 0, $field(Lower$EnumMapping, pos)},
		{"next", "I", nullptr, 0, $field(Lower$EnumMapping, next)},
		{"forEnum", "Lcom/sun/tools/javac/code/Symbol$TypeSymbol;", nullptr, $FINAL, $field(Lower$EnumMapping, forEnum)},
		{"mapVar", "Lcom/sun/tools/javac/code/Symbol$VarSymbol;", nullptr, $FINAL, $field(Lower$EnumMapping, mapVar)},
		{"values", "Ljava/util/Map;", "Ljava/util/Map<Lcom/sun/tools/javac/code/Symbol$VarSymbol;Ljava/lang/Integer;>;", $FINAL, $field(Lower$EnumMapping, values)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/comp/Lower;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol$TypeSymbol;)V", nullptr, 0, $method(Lower$EnumMapping, init$, void, $Lower*, $JCDiagnostic$DiagnosticPosition*, $Symbol$TypeSymbol*)},
		{"forConstant", "(Lcom/sun/tools/javac/code/Symbol$VarSymbol;)Lcom/sun/tools/javac/tree/JCTree$JCLiteral;", nullptr, 0, $virtualMethod(Lower$EnumMapping, forConstant, $JCTree$JCLiteral*, $Symbol$VarSymbol*)},
		{"translate", "()V", nullptr, 0, $virtualMethod(Lower$EnumMapping, translate, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.Lower$EnumMapping", "com.sun.tools.javac.comp.Lower", "EnumMapping", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.comp.Lower$EnumMapping",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.comp.Lower"
	};
	$loadClass(Lower$EnumMapping, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Lower$EnumMapping);
	});
	return class$;
}

$Class* Lower$EnumMapping::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com