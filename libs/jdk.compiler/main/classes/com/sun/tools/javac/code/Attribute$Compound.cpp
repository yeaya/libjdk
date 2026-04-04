#include <com/sun/tools/javac/code/Attribute$Compound.h>
#include <com/sun/tools/javac/code/Attribute$Array.h>
#include <com/sun/tools/javac/code/Attribute$TypeCompound.h>
#include <com/sun/tools/javac/code/Attribute$Visitor.h>
#include <com/sun/tools/javac/code/Attribute.h>
#include <com/sun/tools/javac/code/Symbol$MethodSymbol.h>
#include <com/sun/tools/javac/code/TargetType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeAnnotationPosition.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Name$Table.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/javac/util/Names.h>
#include <com/sun/tools/javac/util/Pair.h>
#include <java/lang/CharSequence.h>
#include <java/util/Iterator.h>
#include <java/util/LinkedHashMap.h>
#include <java/util/Map.h>
#include <javax/lang/model/element/AnnotationValueVisitor.h>
#include <javax/lang/model/element/Name.h>
#include <javax/lang/model/type/DeclaredType.h>
#include <jcpp.h>

#undef UNKNOWN

using $Attribute = ::com::sun::tools::javac::code::Attribute;
using $Attribute$Array = ::com::sun::tools::javac::code::Attribute$Array;
using $Attribute$TypeCompound = ::com::sun::tools::javac::code::Attribute$TypeCompound;
using $Attribute$Visitor = ::com::sun::tools::javac::code::Attribute$Visitor;
using $Symbol$MethodSymbol = ::com::sun::tools::javac::code::Symbol$MethodSymbol;
using $TargetType = ::com::sun::tools::javac::code::TargetType;
using $Type = ::com::sun::tools::javac::code::Type;
using $TypeAnnotationPosition = ::com::sun::tools::javac::code::TypeAnnotationPosition;
using $List = ::com::sun::tools::javac::util::List;
using $Name = ::com::sun::tools::javac::util::Name;
using $Pair = ::com::sun::tools::javac::util::Pair;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $LinkedHashMap = ::java::util::LinkedHashMap;
using $Map = ::java::util::Map;
using $AnnotationValueVisitor = ::javax::lang::model::element::AnnotationValueVisitor;
using $DeclaredType = ::javax::lang::model::type::DeclaredType;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

int32_t Attribute$Compound::hashCode() {
	 return this->$Attribute::hashCode();
}

bool Attribute$Compound::equals(Object$* arg0) {
	 return this->$Attribute::equals(arg0);
}

$Object* Attribute$Compound::clone() {
	 return this->$Attribute::clone();
}

void Attribute$Compound::finalize() {
	this->$Attribute::finalize();
}

bool Attribute$Compound::isSynthesized() {
	return this->synthesized;
}

void Attribute$Compound::setSynthesized(bool synthesized) {
	this->synthesized = synthesized;
}

void Attribute$Compound::init$($Type* type, $List* values, $TypeAnnotationPosition* position) {
	$Attribute::init$(type);
	this->synthesized = false;
	$set(this, values, values);
	$set(this, position, position);
}

void Attribute$Compound::init$($Type* type, $List* values) {
	Attribute$Compound::init$(type, values, nullptr);
}

$TypeAnnotationPosition* Attribute$Compound::getPosition() {
	$useLocalObjectStack();
	if (hasUnknownPosition()) {
		if ($nc(this->values)->size() != 0) {
			$var($Name, valueName, $nc($nc($nc($nc(($cast($Symbol$MethodSymbol, $nc(($cast($Pair, this->values->head)))->fst)))->name)->table)->names)->value);
			$var($Pair, res, getElemPair(valueName));
			$set(this, position, res == nullptr ? ($TypeAnnotationPosition*)nullptr : $nc($cast($Attribute, res->snd))->getPosition());
		}
	}
	return this->position;
}

bool Attribute$Compound::isContainerTypeCompound() {
	bool var$0 = isSynthesized();
	if (var$0 && $nc(this->values)->size() == 1) {
		return getFirstEmbeddedTC() != nullptr;
	}
	return false;
}

Attribute$Compound* Attribute$Compound::getFirstEmbeddedTC() {
	$useLocalObjectStack();
	if ($nc(this->values)->size() == 1) {
		$var($Pair, val, $cast($Pair, this->values->get(0)));
		{
			$var($Attribute$Array, arr, nullptr);
			$var($Attribute$TypeCompound, compound, nullptr);
			bool var$1 = $$sure($Name, $nc($cast($Symbol$MethodSymbol, $nc(val)->fst))->getSimpleName())->contentEquals("value"_s);
			if (var$1) {
				$var($Object, patt7548$temp, val->snd);
				bool var$2 = $instanceOf($Attribute$Array, patt7548$temp);
				if (var$2) {
					$assign(arr, $cast($Attribute$Array, patt7548$temp));
					var$2 = true;
				}
				var$1 = var$2;
			}
			bool var$0 = var$1 && $nc($nc(arr)->values)->length != 0;
			if (var$0) {
				$var($Attribute, patt7660$temp, arr->values->get(0));
				bool var$3 = $instanceOf($Attribute$TypeCompound, patt7660$temp);
				if (var$3) {
					$assign(compound, $cast($Attribute$TypeCompound, patt7660$temp));
					var$3 = true;
				}
				var$0 = var$3;
			}
			if (var$0) {
				return compound;
			}
		}
	}
	return nullptr;
}

bool Attribute$Compound::tryFixPosition() {
	if (!isContainerTypeCompound()) {
		return false;
	}
	$var(Attribute$Compound, from, getFirstEmbeddedTC());
	$init($TargetType);
	if (from != nullptr && from->position != nullptr && from->position->type != $TargetType::UNKNOWN) {
		$set(this, position, from->position);
		return true;
	}
	return false;
}

bool Attribute$Compound::hasUnknownPosition() {
	$init($TargetType);
	return $nc(this->position)->type == $TargetType::UNKNOWN;
}

void Attribute$Compound::accept($Attribute$Visitor* v) {
	$nc(v)->visitCompound(this);
}

$String* Attribute$Compound::toString() {
	$useLocalObjectStack();
	$var($StringBuilder, buf, $new($StringBuilder));
	buf->append("@"_s);
	buf->append(this->type);
	int32_t len = $nc(this->values)->length();
	if (len > 0) {
		buf->append(u'(');
		bool first = true;
		{
			$var($Iterator, i$, this->values->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Pair, value, $cast($Pair, i$->next()));
				{
					if (!first) {
						buf->append(", "_s);
					}
					first = false;
					$var($Name, name, $nc(($cast($Symbol$MethodSymbol, $nc(value)->fst)))->name);
					if (len > 1 || name != $nc($nc($nc(name)->table)->names)->value) {
						buf->append(name);
						buf->append(u'=');
					}
					buf->append(value->snd);
				}
			}
		}
		buf->append(u')');
	}
	return buf->toString();
}

$Attribute* Attribute$Compound::member($Name* member) {
	$var($Pair, res, getElemPair(member));
	return res == nullptr ? ($Attribute*)nullptr : $cast($Attribute, res->snd);
}

$Pair* Attribute$Compound::getElemPair($Name* member) {
	$useLocalObjectStack();
	$var($Iterator, i$, $nc(this->values)->iterator());
	for (; $nc(i$)->hasNext();) {
		$var($Pair, pair, $cast($Pair, i$->next()));
		if ($nc(($cast($Symbol$MethodSymbol, $nc(pair)->fst)))->name == member) {
			return pair;
		}
	}
	return nullptr;
}

$Object* Attribute$Compound::getValue() {
	return $of(this);
}

$Object* Attribute$Compound::accept($AnnotationValueVisitor* v, Object$* p) {
	return $nc(v)->visitAnnotation(this, p);
}

$DeclaredType* Attribute$Compound::getAnnotationType() {
	return $cast($DeclaredType, this->type);
}

$Map* Attribute$Compound::getElementValues() {
	$useLocalObjectStack();
	$var($Map, valmap, $new($LinkedHashMap));
	{
		$var($Iterator, i$, $nc(this->values)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Pair, value, $cast($Pair, i$->next()));
			valmap->put($cast($Symbol$MethodSymbol, $nc(value)->fst), $cast($Attribute, $nc(value)->snd));
		}
	}
	return valmap;
}

Attribute$Compound::Attribute$Compound() {
}

$Class* Attribute$Compound::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"values", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/util/Pair<Lcom/sun/tools/javac/code/Symbol$MethodSymbol;Lcom/sun/tools/javac/code/Attribute;>;>;", $PUBLIC | $FINAL, $field(Attribute$Compound, values)},
		{"position", "Lcom/sun/tools/javac/code/TypeAnnotationPosition;", nullptr, $PUBLIC, $field(Attribute$Compound, position)},
		{"synthesized", "Z", nullptr, $PRIVATE, $field(Attribute$Compound, synthesized)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/code/TypeAnnotationPosition;)V", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/util/Pair<Lcom/sun/tools/javac/code/Symbol$MethodSymbol;Lcom/sun/tools/javac/code/Attribute;>;>;Lcom/sun/tools/javac/code/TypeAnnotationPosition;)V", $PUBLIC, $method(Attribute$Compound, init$, void, $Type*, $List*, $TypeAnnotationPosition*)},
		{"<init>", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List;)V", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/util/Pair<Lcom/sun/tools/javac/code/Symbol$MethodSymbol;Lcom/sun/tools/javac/code/Attribute;>;>;)V", $PUBLIC, $method(Attribute$Compound, init$, void, $Type*, $List*)},
		{"accept", "(Lcom/sun/tools/javac/code/Attribute$Visitor;)V", nullptr, $PUBLIC, $virtualMethod(Attribute$Compound, accept, void, $Attribute$Visitor*)},
		{"accept", "(Ljavax/lang/model/element/AnnotationValueVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;P:Ljava/lang/Object;>(Ljavax/lang/model/element/AnnotationValueVisitor<TR;TP;>;TP;)TR;", $PUBLIC, $virtualMethod(Attribute$Compound, accept, $Object*, $AnnotationValueVisitor*, Object$*)},
		{"getAnnotationType", "()Ljavax/lang/model/type/DeclaredType;", nullptr, $PUBLIC, $virtualMethod(Attribute$Compound, getAnnotationType, $DeclaredType*)},
		{"getElemPair", "(Lcom/sun/tools/javac/util/Name;)Lcom/sun/tools/javac/util/Pair;", "(Lcom/sun/tools/javac/util/Name;)Lcom/sun/tools/javac/util/Pair<Lcom/sun/tools/javac/code/Symbol$MethodSymbol;Lcom/sun/tools/javac/code/Attribute;>;", $PRIVATE, $method(Attribute$Compound, getElemPair, $Pair*, $Name*)},
		{"getElementValues", "()Ljava/util/Map;", "()Ljava/util/Map<Lcom/sun/tools/javac/code/Symbol$MethodSymbol;Lcom/sun/tools/javac/code/Attribute;>;", $PUBLIC, $virtualMethod(Attribute$Compound, getElementValues, $Map*)},
		{"getFirstEmbeddedTC", "()Lcom/sun/tools/javac/code/Attribute$Compound;", nullptr, $PRIVATE, $method(Attribute$Compound, getFirstEmbeddedTC, Attribute$Compound*)},
		{"getPosition", "()Lcom/sun/tools/javac/code/TypeAnnotationPosition;", nullptr, $PUBLIC, $virtualMethod(Attribute$Compound, getPosition, $TypeAnnotationPosition*)},
		{"getValue", "()Lcom/sun/tools/javac/code/Attribute$Compound;", nullptr, $PUBLIC, $virtualMethod(Attribute$Compound, getValue, $Object*)},
		{"hasUnknownPosition", "()Z", nullptr, $PUBLIC, $virtualMethod(Attribute$Compound, hasUnknownPosition, bool)},
		{"isContainerTypeCompound", "()Z", nullptr, $PUBLIC, $virtualMethod(Attribute$Compound, isContainerTypeCompound, bool)},
		{"isSynthesized", "()Z", nullptr, $PUBLIC, $virtualMethod(Attribute$Compound, isSynthesized, bool)},
		{"member", "(Lcom/sun/tools/javac/util/Name;)Lcom/sun/tools/javac/code/Attribute;", nullptr, $PUBLIC, $virtualMethod(Attribute$Compound, member, $Attribute*, $Name*)},
		{"setSynthesized", "(Z)V", nullptr, $PUBLIC, $virtualMethod(Attribute$Compound, setSynthesized, void, bool)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Attribute$Compound, toString, $String*)},
		{"tryFixPosition", "()Z", nullptr, $PUBLIC, $virtualMethod(Attribute$Compound, tryFixPosition, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.code.Attribute$Compound", "com.sun.tools.javac.code.Attribute", "Compound", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.tools.javac.code.Attribute$Compound",
		"com.sun.tools.javac.code.Attribute",
		"javax.lang.model.element.AnnotationMirror",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.code.Attribute"
	};
	$loadClass(Attribute$Compound, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Attribute$Compound));
	});
	return class$;
}

$Class* Attribute$Compound::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com