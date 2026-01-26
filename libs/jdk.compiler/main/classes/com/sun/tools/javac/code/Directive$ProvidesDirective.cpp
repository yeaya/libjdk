#include <com/sun/tools/javac/code/Directive$ProvidesDirective.h>

#include <com/sun/tools/javac/code/Directive.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/util/List.h>
#include <java/util/List.h>
#include <javax/lang/model/element/ModuleElement$DirectiveKind.h>
#include <javax/lang/model/element/ModuleElement$DirectiveVisitor.h>
#include <javax/lang/model/element/ModuleElement$ProvidesDirective.h>
#include <javax/lang/model/element/TypeElement.h>
#include <jcpp.h>

#undef PROVIDES

using $Directive = ::com::sun::tools::javac::code::Directive;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $List = ::com::sun::tools::javac::util::List;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $1List = ::java::util::List;
using $ModuleElement$DirectiveKind = ::javax::lang::model::element::ModuleElement$DirectiveKind;
using $ModuleElement$DirectiveVisitor = ::javax::lang::model::element::ModuleElement$DirectiveVisitor;
using $ModuleElement$ProvidesDirective = ::javax::lang::model::element::ModuleElement$ProvidesDirective;
using $TypeElement = ::javax::lang::model::element::TypeElement;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$FieldInfo _Directive$ProvidesDirective_FieldInfo_[] = {
	{"service", "Lcom/sun/tools/javac/code/Symbol$ClassSymbol;", nullptr, $PUBLIC | $FINAL, $field(Directive$ProvidesDirective, service)},
	{"impls", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Symbol$ClassSymbol;>;", $PUBLIC | $FINAL, $field(Directive$ProvidesDirective, impls)},
	{}
};

$MethodInfo _Directive$ProvidesDirective_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"<init>", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;Lcom/sun/tools/javac/util/List;)V", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Symbol$ClassSymbol;>;)V", $PUBLIC, $method(Directive$ProvidesDirective, init$, void, $Symbol$ClassSymbol*, $List*)},
	{"accept", "(Ljavax/lang/model/element/ModuleElement$DirectiveVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;P:Ljava/lang/Object;>(Ljavax/lang/model/element/ModuleElement$DirectiveVisitor<TR;TP;>;TP;)TR;", $PUBLIC, $virtualMethod(Directive$ProvidesDirective, accept, $Object*, $ModuleElement$DirectiveVisitor*, Object$*)},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(Directive$ProvidesDirective, equals, bool, Object$*)},
	{"getImplementations", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Symbol$ClassSymbol;>;", $PUBLIC, $virtualMethod(Directive$ProvidesDirective, getImplementations, $1List*)},
	{"getKind", "()Ljavax/lang/model/element/ModuleElement$DirectiveKind;", nullptr, $PUBLIC, $virtualMethod(Directive$ProvidesDirective, getKind, $ModuleElement$DirectiveKind*)},
	{"getService", "()Lcom/sun/tools/javac/code/Symbol$ClassSymbol;", nullptr, $PUBLIC, $virtualMethod(Directive$ProvidesDirective, getService, $TypeElement*)},
	{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(Directive$ProvidesDirective, hashCode, int32_t)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Directive$ProvidesDirective, toString, $String*)},
	{}
};

$InnerClassInfo _Directive$ProvidesDirective_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Directive$ProvidesDirective", "com.sun.tools.javac.code.Directive", "ProvidesDirective", $PUBLIC | $STATIC},
	{"javax.lang.model.element.ModuleElement$ProvidesDirective", "javax.lang.model.element.ModuleElement", "ProvidesDirective", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Directive$ProvidesDirective_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.code.Directive$ProvidesDirective",
	"com.sun.tools.javac.code.Directive",
	"javax.lang.model.element.ModuleElement$ProvidesDirective",
	_Directive$ProvidesDirective_FieldInfo_,
	_Directive$ProvidesDirective_MethodInfo_,
	nullptr,
	nullptr,
	_Directive$ProvidesDirective_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Directive"
};

$Object* allocate$Directive$ProvidesDirective($Class* clazz) {
	return $of($alloc(Directive$ProvidesDirective));
}

$Object* Directive$ProvidesDirective::clone() {
	 return this->$Directive::clone();
}

void Directive$ProvidesDirective::finalize() {
	this->$Directive::finalize();
}

void Directive$ProvidesDirective::init$($Symbol$ClassSymbol* service, $List* impls) {
	$Directive::init$();
	$set(this, service, service);
	$set(this, impls, impls);
}

$ModuleElement$DirectiveKind* Directive$ProvidesDirective::getKind() {
	$init($ModuleElement$DirectiveKind);
	return $ModuleElement$DirectiveKind::PROVIDES;
}

$TypeElement* Directive$ProvidesDirective::getService() {
	return $as($TypeElement, this->service);
}

$1List* Directive$ProvidesDirective::getImplementations() {
	return this->impls;
}

$String* Directive$ProvidesDirective::toString() {
	return $str({"Provides["_s, this->service, ","_s, this->impls, "]"_s});
}

$Object* Directive$ProvidesDirective::accept($ModuleElement$DirectiveVisitor* v, Object$* p) {
	return $of($nc(v)->visitProvides(this, p));
}

bool Directive$ProvidesDirective::equals(Object$* obj) {
	$var(Directive$ProvidesDirective, directive, nullptr);
	bool var$2 = $instanceOf(Directive$ProvidesDirective, obj);
	if (var$2) {
		$assign(directive, $cast(Directive$ProvidesDirective, obj));
		var$2 = true;
	}
	bool var$1 = (var$2);
	bool var$0 = var$1 && this->service == $nc(directive)->service;
	return var$0 && $nc(this->impls)->equals(directive->impls);
}

int32_t Directive$ProvidesDirective::hashCode() {
	int32_t var$0 = $nc($of(this->service))->hashCode() * 31;
	return var$0 + $nc(this->impls)->hashCode() * 37;
}

Directive$ProvidesDirective::Directive$ProvidesDirective() {
}

$Class* Directive$ProvidesDirective::load$($String* name, bool initialize) {
	$loadClass(Directive$ProvidesDirective, name, initialize, &_Directive$ProvidesDirective_ClassInfo_, allocate$Directive$ProvidesDirective);
	return class$;
}

$Class* Directive$ProvidesDirective::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com