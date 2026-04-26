#include <com/sun/tools/javac/code/Types$SignatureGenerator.h>
#include <com/sun/tools/javac/code/BoundKind.h>
#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type$ArrayType.h>
#include <com/sun/tools/javac/code/Type$ClassType.h>
#include <com/sun/tools/javac/code/Type$ForAll.h>
#include <com/sun/tools/javac/code/Type$MethodType.h>
#include <com/sun/tools/javac/code/Type$TypeVar.h>
#include <com/sun/tools/javac/code/Type$WildcardType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/code/Types$25.h>
#include <com/sun/tools/javac/code/Types$SignatureGenerator$InvalidSignatureException.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/jvm/ClassFile.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/javac/util/Names.h>
#include <java/lang/AssertionError.h>
#include <jcpp.h>

#undef MTH
#undef TYPEVAR

using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$ArrayType = ::com::sun::tools::javac::code::Type$ArrayType;
using $Type$ClassType = ::com::sun::tools::javac::code::Type$ClassType;
using $Type$ForAll = ::com::sun::tools::javac::code::Type$ForAll;
using $Type$MethodType = ::com::sun::tools::javac::code::Type$MethodType;
using $Type$TypeVar = ::com::sun::tools::javac::code::Type$TypeVar;
using $Type$WildcardType = ::com::sun::tools::javac::code::Type$WildcardType;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $Types = ::com::sun::tools::javac::code::Types;
using $Types$25 = ::com::sun::tools::javac::code::Types$25;
using $Types$SignatureGenerator$InvalidSignatureException = ::com::sun::tools::javac::code::Types$SignatureGenerator$InvalidSignatureException;
using $ClassFile = ::com::sun::tools::javac::jvm::ClassFile;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $List = ::com::sun::tools::javac::util::List;
using $Name = ::com::sun::tools::javac::util::Name;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

void Types$SignatureGenerator::classReference($Symbol$ClassSymbol* c) {
}

void Types$SignatureGenerator::init$($Types* types) {
	$set(this, types, types);
}

void Types$SignatureGenerator::reportIllegalSignature($Type* t) {
	$throwNew($Types$SignatureGenerator$InvalidSignatureException, t);
}

void Types$SignatureGenerator::assembleSig($Type* type) {
	$useLocalObjectStack();
	$init($Types$25);
	$var($Type$ArrayType, at, nullptr);
	$var($Type$MethodType, mt, nullptr);
	$var($Type$ForAll, ft, nullptr);
	switch ($nc($Types$25::$SwitchMap$com$sun$tools$javac$code$TypeTag)->get(($$nc($nc(type)->getTag()))->ordinal())) {
	case 3:
		append(u'B');
		break;
	case 5:
		append(u'S');
		break;
	case 4:
		append(u'C');
		break;
	case 6:
		append(u'I');
		break;
	case 7:
		append(u'J');
		break;
	case 8:
		append(u'F');
		break;
	case 9:
		append(u'D');
		break;
	case 10:
		append(u'Z');
		break;
	case 11:
		append(u'V');
		break;
	case 2:
		if (type->isCompound()) {
			reportIllegalSignature(type);
		}
		append(u'L');
		assembleClassSig(type);
		append(u';');
		break;
	case 1:
		$assign(at, $cast($Type$ArrayType, type));
		append(u'[');
		assembleSig(at->elemtype);
		break;
	case 19:
		$assign(mt, $cast($Type$MethodType, type));
		append(u'(');
		assembleSig(mt->argtypes$);
		append(u')');
		assembleSig(mt->restype);
		if (hasTypeVar(mt->thrown)) {
			$var($List, l, mt->thrown);
			for (; $nc(l)->nonEmpty(); $assign(l, l->tail)) {
				append(u'^');
				assembleSig($cast($Type, l->head));
			}
		}
		break;
	case 14:
		{
			$var($Type$WildcardType, ta, $cast($Type$WildcardType, type));
			switch ($nc($Types$25::$SwitchMap$com$sun$tools$javac$code$BoundKind)->get($nc((ta->kind))->ordinal())) {
			case 2:
				append(u'-');
				assembleSig(ta->type);
				break;
			case 1:
				append(u'+');
				assembleSig(ta->type);
				break;
			case 3:
				append(u'*');
				break;
			default:
				$throwNew($AssertionError, ta->kind);
			}
			break;
		}
	case 12:
		if ($cast($Type$TypeVar, type)->isCaptured()) {
			reportIllegalSignature(type);
		}
		append(u'T');
		append($nc(type->tsym)->name);
		append(u';');
		break;
	case 18:
		$assign(ft, $cast($Type$ForAll, type));
		assembleParamsSig(ft->tvars);
		assembleSig(ft->qtype);
		break;
	default:
		$throwNew($AssertionError, $$of($str({"typeSig "_s, $(type->getTag())})));
	}
}

bool Types$SignatureGenerator::hasTypeVar($List* l$renamed) {
	$var($List, l, l$renamed);
	while ($nc(l)->nonEmpty()) {
		$init($TypeTag);
		if ($nc($cast($Type, l->head))->hasTag($TypeTag::TYPEVAR)) {
			return true;
		}
		$assign(l, l->tail);
	}
	return false;
}

void Types$SignatureGenerator::assembleClassSig($Type* type) {
	$useLocalObjectStack();
	$var($Type$ClassType, ct, $cast($Type$ClassType, type));
	$var($Symbol$ClassSymbol, c, $cast($Symbol$ClassSymbol, $nc(ct)->tsym));
	classReference(c);
	$var($Type, outer, ct->getEnclosingType());
	if ($$nc($nc(outer)->allparams())->nonEmpty()) {
		$init($Kinds$Kind);
		bool rawOuter = $nc($nc(c)->owner)->kind == $Kinds$Kind::MTH || c->name == $nc($nc(this->types)->names)->empty;
		assembleClassSig(rawOuter ? $($nc(this->types)->erasure(outer)) : outer);
		append(rawOuter ? u'$' : u'.');
		$Assert::check($nc(c->flatname)->startsWith($nc($($nc(c->owner)->enclClass()))->flatname));
		$var($Name, var$0, nullptr);
		if (rawOuter) {
			int32_t var$1 = $nc($nc($($nc(c->owner)->enclClass()))->flatname)->getByteLength() + 1;
			$assign(var$0, $nc(c->flatname)->subName(var$1, $nc(c->flatname)->getByteLength()));
		} else {
			$assign(var$0, c->name);
		}
		append(var$0);
	} else {
		append($($ClassFile::externalize($nc(c)->flatname)));
	}
	if ($$nc(ct->getTypeArguments())->nonEmpty()) {
		append(u'<');
		assembleSig($(ct->getTypeArguments()));
		append(u'>');
	}
}

void Types$SignatureGenerator::assembleParamsSig($List* typarams) {
	$useLocalObjectStack();
	append(u'<');
	{
		$var($List, ts, typarams);
		for (; $nc(ts)->nonEmpty(); $assign(ts, ts->tail)) {
			$var($Type$TypeVar, tvar, $cast($Type$TypeVar, ts->head));
			append($nc($nc(tvar)->tsym)->name);
			$var($List, bounds, $nc(this->types)->getBounds(tvar));
			if (($nc($nc(($cast($Type, $nc(bounds)->head)))->tsym)->flags() & 0x0200) != 0) {
				append(u':');
			}
			{
				$var($List, l, bounds);
				for (; $nc(l)->nonEmpty(); $assign(l, l->tail)) {
					append(u':');
					assembleSig($cast($Type, l->head));
				}
			}
		}
	}
	append(u'>');
}

void Types$SignatureGenerator::assembleSig($List* types) {
	$var($List, ts, types);
	for (; $nc(ts)->nonEmpty(); $assign(ts, ts->tail)) {
		assembleSig($cast($Type, ts->head));
	}
}

Types$SignatureGenerator::Types$SignatureGenerator() {
}

$Class* Types$SignatureGenerator::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"types", "Lcom/sun/tools/javac/code/Types;", nullptr, $PRIVATE | $FINAL, $field(Types$SignatureGenerator, types)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/code/Types;)V", nullptr, $PROTECTED, $method(Types$SignatureGenerator, init$, void, $Types*)},
		{"append", "(C)V", nullptr, $PROTECTED | $ABSTRACT, $virtualMethod(Types$SignatureGenerator, append, void, char16_t)},
		{"append", "([B)V", nullptr, $PROTECTED | $ABSTRACT, $virtualMethod(Types$SignatureGenerator, append, void, $bytes*)},
		{"append", "(Lcom/sun/tools/javac/util/Name;)V", nullptr, $PROTECTED | $ABSTRACT, $virtualMethod(Types$SignatureGenerator, append, void, $Name*)},
		{"assembleClassSig", "(Lcom/sun/tools/javac/code/Type;)V", nullptr, $PUBLIC, $virtualMethod(Types$SignatureGenerator, assembleClassSig, void, $Type*)},
		{"assembleParamsSig", "(Lcom/sun/tools/javac/util/List;)V", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)V", $PUBLIC, $virtualMethod(Types$SignatureGenerator, assembleParamsSig, void, $List*)},
		{"assembleSig", "(Lcom/sun/tools/javac/code/Type;)V", nullptr, $PUBLIC, $virtualMethod(Types$SignatureGenerator, assembleSig, void, $Type*)},
		{"assembleSig", "(Lcom/sun/tools/javac/util/List;)V", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)V", $PUBLIC, $virtualMethod(Types$SignatureGenerator, assembleSig, void, $List*)},
		{"classReference", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;)V", nullptr, $PROTECTED, $virtualMethod(Types$SignatureGenerator, classReference, void, $Symbol$ClassSymbol*)},
		{"hasTypeVar", "(Lcom/sun/tools/javac/util/List;)Z", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)Z", $PUBLIC, $virtualMethod(Types$SignatureGenerator, hasTypeVar, bool, $List*)},
		{"reportIllegalSignature", "(Lcom/sun/tools/javac/code/Type;)V", nullptr, $PROTECTED, $virtualMethod(Types$SignatureGenerator, reportIllegalSignature, void, $Type*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.code.Types$SignatureGenerator", "com.sun.tools.javac.code.Types", "SignatureGenerator", $PUBLIC | $STATIC | $ABSTRACT},
		{"com.sun.tools.javac.code.Types$SignatureGenerator$InvalidSignatureException", "com.sun.tools.javac.code.Types$SignatureGenerator", "InvalidSignatureException", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"com.sun.tools.javac.code.Types$SignatureGenerator",
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
		"com.sun.tools.javac.code.Types"
	};
	$loadClass(Types$SignatureGenerator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Types$SignatureGenerator);
	});
	return class$;
}

$Class* Types$SignatureGenerator::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com