#include <com/sun/tools/javac/comp/Attr$TypeAnnotationsValidator.h>
#include <com/sun/source/tree/ExpressionTree.h>
#include <com/sun/source/tree/Tree$Kind.h>
#include <com/sun/tools/javac/code/Attribute$Compound.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol$VarSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeAnnotations$AnnotationType.h>
#include <com/sun/tools/javac/code/TypeAnnotations.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/comp/Attr.h>
#include <com/sun/tools/javac/comp/Check.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Errors.h>
#include <com/sun/tools/javac/tree/JCTree$JCAnnotatedType.h>
#include <com/sun/tools/javac/tree/JCTree$JCAnnotation.h>
#include <com/sun/tools/javac/tree/JCTree$JCArrayTypeTree.h>
#include <com/sun/tools/javac/tree/JCTree$JCBlock.h>
#include <com/sun/tools/javac/tree/JCTree$JCClassDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCFieldAccess.h>
#include <com/sun/tools/javac/tree/JCTree$JCInstanceOf.h>
#include <com/sun/tools/javac/tree/JCTree$JCMethodDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCModifiers.h>
#include <com/sun/tools/javac/tree/JCTree$JCNewArray.h>
#include <com/sun/tools/javac/tree/JCTree$JCNewClass.h>
#include <com/sun/tools/javac/tree/JCTree$JCPattern.h>
#include <com/sun/tools/javac/tree/JCTree$JCTypeApply.h>
#include <com/sun/tools/javac/tree/JCTree$JCTypeCast.h>
#include <com/sun/tools/javac/tree/JCTree$JCTypeIntersection.h>
#include <com/sun/tools/javac/tree/JCTree$JCTypeParameter.h>
#include <com/sun/tools/javac/tree/JCTree$JCTypeUnion.h>
#include <com/sun/tools/javac/tree/JCTree$JCVariableDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCWildcard.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/tree/TreeScanner.h>
#include <com/sun/tools/javac/util/AbstractLog.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Error.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/ListBuffer.h>
#include <com/sun/tools/javac/util/Log.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef ANNOTATED_TYPE
#undef CLASSDEF
#undef DECLARATION
#undef ERRONEOUS
#undef EXTENDS_WILDCARD
#undef IDENT
#undef NONE
#undef PRIMITIVE_TYPE
#undef SELECT
#undef SUPER_WILDCARD
#undef TYPEAPPLY
#undef TYPEARRAY
#undef TYPEINTERSECTION
#undef TYPEUNION
#undef WILDCARD

using $Tree$Kind = ::com::sun::source::tree::Tree$Kind;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $TypeAnnotations$AnnotationType = ::com::sun::tools::javac::code::TypeAnnotations$AnnotationType;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $Attr = ::com::sun::tools::javac::comp::Attr;
using $CompilerProperties$Errors = ::com::sun::tools::javac::resources::CompilerProperties$Errors;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCAnnotatedType = ::com::sun::tools::javac::tree::JCTree$JCAnnotatedType;
using $JCTree$JCAnnotation = ::com::sun::tools::javac::tree::JCTree$JCAnnotation;
using $JCTree$JCArrayTypeTree = ::com::sun::tools::javac::tree::JCTree$JCArrayTypeTree;
using $JCTree$JCBlock = ::com::sun::tools::javac::tree::JCTree$JCBlock;
using $JCTree$JCClassDecl = ::com::sun::tools::javac::tree::JCTree$JCClassDecl;
using $JCTree$JCFieldAccess = ::com::sun::tools::javac::tree::JCTree$JCFieldAccess;
using $JCTree$JCInstanceOf = ::com::sun::tools::javac::tree::JCTree$JCInstanceOf;
using $JCTree$JCMethodDecl = ::com::sun::tools::javac::tree::JCTree$JCMethodDecl;
using $JCTree$JCNewArray = ::com::sun::tools::javac::tree::JCTree$JCNewArray;
using $JCTree$JCNewClass = ::com::sun::tools::javac::tree::JCTree$JCNewClass;
using $JCTree$JCPattern = ::com::sun::tools::javac::tree::JCTree$JCPattern;
using $JCTree$JCTypeApply = ::com::sun::tools::javac::tree::JCTree$JCTypeApply;
using $JCTree$JCTypeCast = ::com::sun::tools::javac::tree::JCTree$JCTypeCast;
using $JCTree$JCTypeIntersection = ::com::sun::tools::javac::tree::JCTree$JCTypeIntersection;
using $JCTree$JCTypeParameter = ::com::sun::tools::javac::tree::JCTree$JCTypeParameter;
using $JCTree$JCTypeUnion = ::com::sun::tools::javac::tree::JCTree$JCTypeUnion;
using $JCTree$JCVariableDecl = ::com::sun::tools::javac::tree::JCTree$JCVariableDecl;
using $JCTree$JCWildcard = ::com::sun::tools::javac::tree::JCTree$JCWildcard;
using $JCTree$Tag = ::com::sun::tools::javac::tree::JCTree$Tag;
using $TreeScanner = ::com::sun::tools::javac::tree::TreeScanner;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $JCDiagnostic$DiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition;
using $List = ::com::sun::tools::javac::util::List;
using $ListBuffer = ::com::sun::tools::javac::util::ListBuffer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

void Attr$TypeAnnotationsValidator::init$($Attr* this$0, bool sigOnly) {
	$set(this, this$0, this$0);
	$TreeScanner::init$();
	this->sigOnly = sigOnly;
}

void Attr$TypeAnnotationsValidator::visitAnnotation($JCTree$JCAnnotation* tree) {
	$nc(this->this$0->chk)->validateTypeAnnotation(tree, false);
	$TreeScanner::visitAnnotation(tree);
}

void Attr$TypeAnnotationsValidator::visitAnnotatedType($JCTree$JCAnnotatedType* tree) {
	if (!$nc($nc($nc(tree)->underlyingType)->type)->isErroneous()) {
		$TreeScanner::visitAnnotatedType(tree);
	}
}

void Attr$TypeAnnotationsValidator::visitTypeParameter($JCTree$JCTypeParameter* tree) {
	$nc(this->this$0->chk)->validateTypeAnnotations($nc(tree)->annotations, true);
	scan(tree->bounds);
}

void Attr$TypeAnnotationsValidator::visitMethodDef($JCTree$JCMethodDecl* tree) {
	if ($nc(tree)->recvparam != nullptr && !$nc($nc(tree->recvparam->vartype)->type)->isErroneous()) {
		checkForDeclarationAnnotations($nc(tree->recvparam->mods)->annotations, tree->recvparam->sym);
	}
	if (tree->restype != nullptr && tree->restype->type != nullptr) {
		validateAnnotatedType(tree->restype, tree->restype->type);
	}
	if (this->sigOnly) {
		scan(tree->mods);
		scan(tree->restype);
		scan(tree->typarams);
		scan(tree->recvparam);
		scan(tree->params);
		scan(tree->thrown);
	} else {
		scan(tree->defaultValue);
		scan(tree->body);
	}
}

void Attr$TypeAnnotationsValidator::visitVarDef($JCTree$JCVariableDecl* tree) {
	if ($nc(tree)->sym != nullptr && tree->sym->type != nullptr && !tree->isImplicitlyTyped()) {
		validateAnnotatedType(tree->vartype, tree->sym->type);
	}
	scan(tree->mods);
	scan(tree->vartype);
	if (!this->sigOnly) {
		scan(tree->init);
	}
}

void Attr$TypeAnnotationsValidator::visitTypeCast($JCTree$JCTypeCast* tree) {
	if ($nc(tree)->clazz != nullptr && tree->clazz->type != nullptr) {
		validateAnnotatedType(tree->clazz, tree->clazz->type);
	}
	$TreeScanner::visitTypeCast(tree);
}

void Attr$TypeAnnotationsValidator::visitTypeTest($JCTree$JCInstanceOf* tree) {
	if ($nc(tree)->pattern != nullptr && !($instanceOf($JCTree$JCPattern, tree->pattern)) && tree->pattern->type != nullptr) {
		validateAnnotatedType(tree->pattern, tree->pattern->type);
	}
	$TreeScanner::visitTypeTest(tree);
}

void Attr$TypeAnnotationsValidator::visitNewClass($JCTree$JCNewClass* tree) {
	if ($nc(tree)->clazz != nullptr && tree->clazz->type != nullptr) {
		$init($JCTree$Tag);
		if (tree->clazz->hasTag($JCTree$Tag::ANNOTATED_TYPE)) {
			checkForDeclarationAnnotations($nc($cast($JCTree$JCAnnotatedType, tree->clazz))->annotations, $nc($nc(tree->clazz)->type)->tsym);
		}
		if (tree->def != nullptr) {
			checkForDeclarationAnnotations($nc(tree->def->mods)->annotations, $nc($nc(tree->clazz)->type)->tsym);
		}
		validateAnnotatedType(tree->clazz, $nc(tree->clazz)->type);
	}
	$TreeScanner::visitNewClass(tree);
}

void Attr$TypeAnnotationsValidator::visitNewArray($JCTree$JCNewArray* tree) {
	if ($nc(tree)->elemtype != nullptr && tree->elemtype->type != nullptr) {
		$init($JCTree$Tag);
		if (tree->elemtype->hasTag($JCTree$Tag::ANNOTATED_TYPE)) {
			checkForDeclarationAnnotations($nc($cast($JCTree$JCAnnotatedType, tree->elemtype))->annotations, $nc($nc(tree->elemtype)->type)->tsym);
		}
		validateAnnotatedType(tree->elemtype, $nc(tree->elemtype)->type);
	}
	$TreeScanner::visitNewArray(tree);
}

void Attr$TypeAnnotationsValidator::visitClassDef($JCTree$JCClassDecl* tree) {
	$useLocalObjectStack();
	if (this->sigOnly) {
		scan($nc(tree)->mods);
		scan(tree->typarams);
		scan(tree->extending);
		scan(tree->implementing);
	}
	{
		$var($Iterator, i$, $nc($nc(tree)->defs)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($JCTree, member, $cast($JCTree, i$->next()));
			{
				$init($JCTree$Tag);
				if ($nc(member)->hasTag($JCTree$Tag::CLASSDEF)) {
					continue;
				}
				scan(member);
			}
		}
	}
}

void Attr$TypeAnnotationsValidator::visitBlock($JCTree$JCBlock* tree) {
	if (!this->sigOnly) {
		scan($nc(tree)->stats);
	}
}

void Attr$TypeAnnotationsValidator::validateAnnotatedType($JCTree* errtree, $Type* type) {
	$useLocalObjectStack();
	if ($nc(type)->isPrimitiveOrVoid()) {
		return;
	}
	$var($JCTree, enclTr, errtree);
	$var($Type, enclTy, type);
	bool repeat = true;
	while (repeat) {
		$init($JCTree$Tag);
		if ($nc(enclTr)->hasTag($JCTree$Tag::TYPEAPPLY)) {
			$var($List, tyargs, $nc(enclTy)->getTypeArguments());
			$var($List, trargs, $cast($List, $cast($JCTree$JCTypeApply, enclTr)->getTypeArguments()));
			if ($nc(trargs)->length() > 0) {
				int32_t var$0 = $nc(tyargs)->length();
				if (var$0 == trargs->length()) {
					for (int32_t i = 0; i < tyargs->length(); ++i) {
						$var($JCTree, var$1, $cast($JCTree, trargs->get(i)));
						validateAnnotatedType(var$1, $$cast($Type, tyargs->get(i)));
					}
				}
			}
			$assign(enclTr, $cast($JCTree$JCTypeApply, enclTr)->clazz);
		}
		if ($nc(enclTr)->hasTag($JCTree$Tag::SELECT)) {
			$assign(enclTr, $cast($JCTree, $cast($JCTree$JCFieldAccess, enclTr)->getExpression()));
			$init($TypeTag);
			if (enclTy != nullptr && !enclTy->hasTag($TypeTag::NONE)) {
				$assign(enclTy, enclTy->getEnclosingType());
			}
		} else if (enclTr->hasTag($JCTree$Tag::ANNOTATED_TYPE)) {
			$var($JCTree$JCAnnotatedType, at, $cast($JCTree$JCAnnotatedType, enclTr));
			$init($TypeTag);
			if (enclTy == nullptr || enclTy->hasTag($TypeTag::NONE)) {
				if ($$sure($List, at->getAnnotations())->size() == 1) {
					$var($JCDiagnostic$DiagnosticPosition, var$2, $nc(at->underlyingType)->pos());
					$nc(this->this$0->log)->error(var$2, $($CompilerProperties$Errors::CantTypeAnnotateScoping1($nc(($cast($JCTree$JCAnnotation, $nc($$cast($List, at->getAnnotations()))->head)))->attribute)));
				} else {
					$var($ListBuffer, comps, $new($ListBuffer));
					{
						$var($Iterator, i$, $$sure($List, at->getAnnotations())->iterator());
						for (; $nc(i$)->hasNext();) {
							$var($JCTree$JCAnnotation, an, $cast($JCTree$JCAnnotation, i$->next()));
							{
								comps->add($nc(an)->attribute);
							}
						}
					}
					$var($JCDiagnostic$DiagnosticPosition, var$3, $nc(at->underlyingType)->pos());
					$nc(this->this$0->log)->error(var$3, $($CompilerProperties$Errors::CantTypeAnnotateScoping($(comps->toList()))));
				}
				repeat = false;
			}
			$assign(enclTr, at->underlyingType);
		} else if (enclTr->hasTag($JCTree$Tag::IDENT)) {
			repeat = false;
		} else if (enclTr->hasTag($JCTree$Tag::WILDCARD)) {
			$var($JCTree$JCWildcard, wc, $cast($JCTree$JCWildcard, enclTr));
			$init($Tree$Kind);
			bool var$4 = wc->getKind() == $Tree$Kind::EXTENDS_WILDCARD;
			if (var$4 || wc->getKind() == $Tree$Kind::SUPER_WILDCARD) {
				$var($JCTree, var$5, wc->getBound());
				validateAnnotatedType(var$5, $nc($(wc->getBound()))->type);
			} else {
			}
			repeat = false;
		} else if (enclTr->hasTag($JCTree$Tag::TYPEARRAY)) {
			$var($JCTree$JCArrayTypeTree, art, $cast($JCTree$JCArrayTypeTree, enclTr));
			validateAnnotatedType($(art->getType()), $nc(art->elemtype)->type);
			repeat = false;
		} else if (enclTr->hasTag($JCTree$Tag::TYPEUNION)) {
			$var($JCTree$JCTypeUnion, ut, $cast($JCTree$JCTypeUnion, enclTr));
			{
				$var($Iterator, i$, $$sure($List, ut->getTypeAlternatives())->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($JCTree, t, $cast($JCTree, i$->next()));
					{
						validateAnnotatedType(t, $nc(t)->type);
					}
				}
			}
			repeat = false;
		} else if (enclTr->hasTag($JCTree$Tag::TYPEINTERSECTION)) {
			$var($JCTree$JCTypeIntersection, it, $cast($JCTree$JCTypeIntersection, enclTr));
			{
				$var($Iterator, i$, $$sure($List, it->getBounds())->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($JCTree, t, $cast($JCTree, i$->next()));
					{
						validateAnnotatedType(t, $nc(t)->type);
					}
				}
			}
			repeat = false;
		} else {
			$init($Tree$Kind);
			bool var$6 = enclTr->getKind() == $Tree$Kind::PRIMITIVE_TYPE;
			if (var$6 || enclTr->getKind() == $Tree$Kind::ERRONEOUS) {
				repeat = false;
			} else {
				$var($StringBuilder, var$7, $new($StringBuilder));
				var$7->append("Unexpected tree: "_s);
				var$7->append(enclTr);
				var$7->append(" with kind: "_s);
				var$7->append($(enclTr->getKind()));
				var$7->append(" within: "_s);
				var$7->append(errtree);
				var$7->append(" with kind: "_s);
				var$7->append($($nc(errtree)->getKind()));
				$Assert::error($$str(var$7));
			}
		}
	}
}

void Attr$TypeAnnotationsValidator::checkForDeclarationAnnotations($List* annotations, $Symbol* sym) {
	$useLocalObjectStack();
	$var($Iterator, i$, $nc(annotations)->iterator());
	for (; $nc(i$)->hasNext();) {
		$var($JCTree$JCAnnotation, ai, $cast($JCTree$JCAnnotation, i$->next()));
		{
			bool var$0 = !$nc($nc(ai)->type)->isErroneous();
			$init($TypeAnnotations$AnnotationType);
			if (var$0 && $nc(this->this$0->typeAnnotations)->annotationTargetType(ai->attribute, sym) == $TypeAnnotations$AnnotationType::DECLARATION) {
				$var($JCDiagnostic$DiagnosticPosition, var$1, ai->pos());
				$nc(this->this$0->log)->error(var$1, $($CompilerProperties$Errors::AnnotationTypeNotApplicableToType(ai->type)));
			}
		}
	}
}

Attr$TypeAnnotationsValidator::Attr$TypeAnnotationsValidator() {
}

$Class* Attr$TypeAnnotationsValidator::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/comp/Attr;", nullptr, $FINAL | $SYNTHETIC, $field(Attr$TypeAnnotationsValidator, this$0)},
		{"sigOnly", "Z", nullptr, $PRIVATE | $FINAL, $field(Attr$TypeAnnotationsValidator, sigOnly)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/comp/Attr;Z)V", nullptr, $PUBLIC, $method(Attr$TypeAnnotationsValidator, init$, void, $Attr*, bool)},
		{"checkForDeclarationAnnotations", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/code/Symbol;)V", "(Lcom/sun/tools/javac/util/List<+Lcom/sun/tools/javac/tree/JCTree$JCAnnotation;>;Lcom/sun/tools/javac/code/Symbol;)V", $PRIVATE, $method(Attr$TypeAnnotationsValidator, checkForDeclarationAnnotations, void, $List*, $Symbol*)},
		{"validateAnnotatedType", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/code/Type;)V", nullptr, $PRIVATE, $method(Attr$TypeAnnotationsValidator, validateAnnotatedType, void, $JCTree*, $Type*)},
		{"visitAnnotatedType", "(Lcom/sun/tools/javac/tree/JCTree$JCAnnotatedType;)V", nullptr, $PUBLIC, $virtualMethod(Attr$TypeAnnotationsValidator, visitAnnotatedType, void, $JCTree$JCAnnotatedType*)},
		{"visitAnnotation", "(Lcom/sun/tools/javac/tree/JCTree$JCAnnotation;)V", nullptr, $PUBLIC, $virtualMethod(Attr$TypeAnnotationsValidator, visitAnnotation, void, $JCTree$JCAnnotation*)},
		{"visitBlock", "(Lcom/sun/tools/javac/tree/JCTree$JCBlock;)V", nullptr, $PUBLIC, $virtualMethod(Attr$TypeAnnotationsValidator, visitBlock, void, $JCTree$JCBlock*)},
		{"visitClassDef", "(Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;)V", nullptr, $PUBLIC, $virtualMethod(Attr$TypeAnnotationsValidator, visitClassDef, void, $JCTree$JCClassDecl*)},
		{"visitMethodDef", "(Lcom/sun/tools/javac/tree/JCTree$JCMethodDecl;)V", nullptr, $PUBLIC, $virtualMethod(Attr$TypeAnnotationsValidator, visitMethodDef, void, $JCTree$JCMethodDecl*)},
		{"visitNewArray", "(Lcom/sun/tools/javac/tree/JCTree$JCNewArray;)V", nullptr, $PUBLIC, $virtualMethod(Attr$TypeAnnotationsValidator, visitNewArray, void, $JCTree$JCNewArray*)},
		{"visitNewClass", "(Lcom/sun/tools/javac/tree/JCTree$JCNewClass;)V", nullptr, $PUBLIC, $virtualMethod(Attr$TypeAnnotationsValidator, visitNewClass, void, $JCTree$JCNewClass*)},
		{"visitTypeCast", "(Lcom/sun/tools/javac/tree/JCTree$JCTypeCast;)V", nullptr, $PUBLIC, $virtualMethod(Attr$TypeAnnotationsValidator, visitTypeCast, void, $JCTree$JCTypeCast*)},
		{"visitTypeParameter", "(Lcom/sun/tools/javac/tree/JCTree$JCTypeParameter;)V", nullptr, $PUBLIC, $virtualMethod(Attr$TypeAnnotationsValidator, visitTypeParameter, void, $JCTree$JCTypeParameter*)},
		{"visitTypeTest", "(Lcom/sun/tools/javac/tree/JCTree$JCInstanceOf;)V", nullptr, $PUBLIC, $virtualMethod(Attr$TypeAnnotationsValidator, visitTypeTest, void, $JCTree$JCInstanceOf*)},
		{"visitVarDef", "(Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;)V", nullptr, $PUBLIC, $virtualMethod(Attr$TypeAnnotationsValidator, visitVarDef, void, $JCTree$JCVariableDecl*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.Attr$TypeAnnotationsValidator", "com.sun.tools.javac.comp.Attr", "TypeAnnotationsValidator", $PRIVATE | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"com.sun.tools.javac.comp.Attr$TypeAnnotationsValidator",
		"com.sun.tools.javac.tree.TreeScanner",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.comp.Attr"
	};
	$loadClass(Attr$TypeAnnotationsValidator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Attr$TypeAnnotationsValidator);
	});
	return class$;
}

$Class* Attr$TypeAnnotationsValidator::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com