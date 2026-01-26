#include <com/sun/tools/javac/resources/CompilerProperties$Errors.h>

#include <com/sun/tools/javac/code/Attribute$Compound.h>
#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Kinds$KindName.h>
#include <com/sun/tools/javac/code/Source.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/jvm/Target.h>
#include <com/sun/tools/javac/main/Option.h>
#include <com/sun/tools/javac/parser/Tokens$TokenKind.h>
#include <com/sun/tools/javac/resources/CompilerProperties.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Error.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Fragment.h>
#include <com/sun/tools/javac/util/JCDiagnostic.h>
#include <com/sun/tools/javac/util/Name.h>
#include <java/io/File.h>
#include <java/net/URL.h>
#include <java/nio/file/Path.h>
#include <java/util/Collection.h>
#include <java/util/List.h>
#include <java/util/Set.h>
#include <javax/tools/JavaFileObject.h>
#include <jcpp.h>

using $Attribute$Compound = ::com::sun::tools::javac::code::Attribute$Compound;
using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $Kinds$KindName = ::com::sun::tools::javac::code::Kinds$KindName;
using $Source = ::com::sun::tools::javac::code::Source;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Target = ::com::sun::tools::javac::jvm::Target;
using $Option = ::com::sun::tools::javac::main::Option;
using $Tokens$TokenKind = ::com::sun::tools::javac::parser::Tokens$TokenKind;
using $JCDiagnostic = ::com::sun::tools::javac::util::JCDiagnostic;
using $JCDiagnostic$Error = ::com::sun::tools::javac::util::JCDiagnostic$Error;
using $JCDiagnostic$Fragment = ::com::sun::tools::javac::util::JCDiagnostic$Fragment;
using $Name = ::com::sun::tools::javac::util::Name;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $URL = ::java::net::URL;
using $Path = ::java::nio::file::Path;
using $Collection = ::java::util::Collection;
using $List = ::java::util::List;
using $Set = ::java::util::Set;
using $JavaFileObject = ::javax::tools::JavaFileObject;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace resources {

$FieldInfo _CompilerProperties$Errors_FieldInfo_[] = {
	{"AbstractMethCantHaveBody", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, AbstractMethCantHaveBody)},
	{"AddmodsAllModulePathInvalid", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, AddmodsAllModulePathInvalid)},
	{"AnnotationDeclNotAllowedHere", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, AnnotationDeclNotAllowedHere)},
	{"AnnotationTypeNotApplicable", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, AnnotationTypeNotApplicable)},
	{"AnnotationValueMustBeAnnotation", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, AnnotationValueMustBeAnnotation)},
	{"AnnotationValueMustBeClassLiteral", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, AnnotationValueMustBeClassLiteral)},
	{"AnnotationValueMustBeNameValue", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, AnnotationValueMustBeNameValue)},
	{"AnnotationValueNotAllowableType", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, AnnotationValueNotAllowableType)},
	{"AnonClassImplIntfNoArgs", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, AnonClassImplIntfNoArgs)},
	{"AnonClassImplIntfNoQualForNew", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, AnonClassImplIntfNoQualForNew)},
	{"AnonClassImplIntfNoTypeargs", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, AnonClassImplIntfNoTypeargs)},
	{"ArrayAndReceiver", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, ArrayAndReceiver)},
	{"ArrayDimensionMissing", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, ArrayDimensionMissing)},
	{"AssertAsIdentifier", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, AssertAsIdentifier)},
	{"AttributeValueMustBeConstant", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, AttributeValueMustBeConstant)},
	{"BadFunctionalIntfAnno", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, BadFunctionalIntfAnno)},
	{"BreakOutsideSwitchExpression", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, BreakOutsideSwitchExpression)},
	{"BreakOutsideSwitchLoop", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, BreakOutsideSwitchLoop)},
	{"CannotCreateArrayWithDiamond", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, CannotCreateArrayWithDiamond)},
	{"CannotCreateArrayWithTypeArguments", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, CannotCreateArrayWithTypeArguments)},
	{"CantAssignValToThis", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, CantAssignValToThis)},
	{"CantExtendIntfAnnotation", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, CantExtendIntfAnnotation)},
	{"CantInheritFromAnon", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, CantInheritFromAnon)},
	{"CantReadFile", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, CantReadFile)},
	{"CantSelectStaticClassFromParamType", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, CantSelectStaticClassFromParamType)},
	{"CatchWithoutTry", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, CatchWithoutTry)},
	{"ClassNotAllowed", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, ClassNotAllowed)},
	{"ConstExprReq", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, ConstExprReq)},
	{"ContOutsideLoop", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, ContOutsideLoop)},
	{"ContinueOutsideSwitchExpression", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, ContinueOutsideSwitchExpression)},
	{"DcBadEntity", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, DcBadEntity)},
	{"DcBadInlineTag", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, DcBadInlineTag)},
	{"DcGtExpected", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, DcGtExpected)},
	{"DcIdentifierExpected", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, DcIdentifierExpected)},
	{"DcMalformedHtml", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, DcMalformedHtml)},
	{"DcMissingSemicolon", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, DcMissingSemicolon)},
	{"DcNoContent", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, DcNoContent)},
	{"DcNoTagName", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, DcNoTagName)},
	{"DcRefBadParens", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, DcRefBadParens)},
	{"DcRefSyntaxError", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, DcRefSyntaxError)},
	{"DcRefUnexpectedInput", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, DcRefUnexpectedInput)},
	{"DcUnexpectedContent", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, DcUnexpectedContent)},
	{"DcUnterminatedInlineTag", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, DcUnterminatedInlineTag)},
	{"DcUnterminatedSignature", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, DcUnterminatedSignature)},
	{"DcUnterminatedString", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, DcUnterminatedString)},
	{"DefaultAllowedInIntfAnnotationMember", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, DefaultAllowedInIntfAnnotationMember)},
	{"DotClassExpected", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, DotClassExpected)},
	{"DuplicateCaseLabel", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, DuplicateCaseLabel)},
	{"DuplicateDefaultLabel", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, DuplicateDefaultLabel)},
	{"DuplicateTotalPattern", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, DuplicateTotalPattern)},
	{"ElseWithoutIf", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, ElseWithoutIf)},
	{"EmptyAArgument", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, EmptyAArgument)},
	{"EmptyCharLit", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, EmptyCharLit)},
	{"EnumAnnotationMustBeEnumConstant", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, EnumAnnotationMustBeEnumConstant)},
	{"EnumAsIdentifier", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, EnumAsIdentifier)},
	{"EnumCantBeInstantiated", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, EnumCantBeInstantiated)},
	{"EnumConstantExpected", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, EnumConstantExpected)},
	{"EnumConstantNotExpected", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, EnumConstantNotExpected)},
	{"EnumLabelMustBeUnqualifiedEnum", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, EnumLabelMustBeUnqualifiedEnum)},
	{"EnumNoFinalize", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, EnumNoFinalize)},
	{"EnumNoSubclassing", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, EnumNoSubclassing)},
	{"EnumTypesNotExtensible", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, EnumTypesNotExtensible)},
	{"Error", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, Error)},
	{"ExpectedModule", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, ExpectedModule)},
	{"ExpectedModuleOrOpen", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, ExpectedModuleOrOpen)},
	{"ExpressionNotAllowableAsAnnotationValue", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, ExpressionNotAllowableAsAnnotationValue)},
	{"FileSbOnSourceOrPatchPathForModule", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, FileSbOnSourceOrPatchPathForModule)},
	{"FinallyWithoutTry", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, FinallyWithoutTry)},
	{"FlowsThroughFromPattern", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, FlowsThroughFromPattern)},
	{"FlowsThroughToPattern", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, FlowsThroughToPattern)},
	{"FpNumberTooLarge", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, FpNumberTooLarge)},
	{"FpNumberTooSmall", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, FpNumberTooSmall)},
	{"GenericArrayCreation", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, GenericArrayCreation)},
	{"GenericThrowable", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, GenericThrowable)},
	{"IllegalArrayCreationBothDimensionAndInitialization", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, IllegalArrayCreationBothDimensionAndInitialization)},
	{"IllegalDot", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, IllegalDot)},
	{"IllegalEnumStaticRef", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, IllegalEnumStaticRef)},
	{"IllegalEscChar", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, IllegalEscChar)},
	{"IllegalForwardRef", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, IllegalForwardRef)},
	{"IllegalLineEndInCharLit", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, IllegalLineEndInCharLit)},
	{"IllegalNonasciiDigit", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, IllegalNonasciiDigit)},
	{"IllegalParenthesizedExpression", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, IllegalParenthesizedExpression)},
	{"IllegalSelfRef", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, IllegalSelfRef)},
	{"IllegalStartOfExpr", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, IllegalStartOfExpr)},
	{"IllegalStartOfStmt", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, IllegalStartOfStmt)},
	{"IllegalStartOfType", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, IllegalStartOfType)},
	{"IllegalTextBlockOpen", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, IllegalTextBlockOpen)},
	{"IllegalUnderscore", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, IllegalUnderscore)},
	{"IllegalUnicodeEsc", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, IllegalUnicodeEsc)},
	{"ImproperlyFormedTypeInnerRawParam", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, ImproperlyFormedTypeInnerRawParam)},
	{"ImproperlyFormedTypeParamMissing", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, ImproperlyFormedTypeParamMissing)},
	{"InitializerMustBeAbleToCompleteNormally", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, InitializerMustBeAbleToCompleteNormally)},
	{"InitializerNotAllowed", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, InitializerNotAllowed)},
	{"InstanceInitializerNotAllowedInRecords", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, InstanceInitializerNotAllowedInRecords)},
	{"IntfAnnotationMembersCantHaveParams", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, IntfAnnotationMembersCantHaveParams)},
	{"IntfAnnotationMembersCantHaveTypeParams", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, IntfAnnotationMembersCantHaveTypeParams)},
	{"IntfExpectedHere", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, IntfExpectedHere)},
	{"IntfMethCantHaveBody", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, IntfMethCantHaveBody)},
	{"IntfNotAllowedHere", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, IntfNotAllowedHere)},
	{"InvalidAnnotationMemberType", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, InvalidAnnotationMemberType)},
	{"InvalidBinaryNumber", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, InvalidBinaryNumber)},
	{"InvalidHexNumber", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, InvalidHexNumber)},
	{"InvalidMethDeclRetTypeReq", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, InvalidMethDeclRetTypeReq)},
	{"InvalidModuleDirective", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, InvalidModuleDirective)},
	{"InvalidYield", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, InvalidYield)},
	{"IoException", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, IoException)},
	{"LambdaBodyNeitherValueNorVoidCompatible", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, LambdaBodyNeitherValueNorVoidCompatible)},
	{"LimitCode", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, LimitCode)},
	{"LimitCodeTooLargeForTryStmt", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, LimitCodeTooLargeForTryStmt)},
	{"LimitDimensions", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, LimitDimensions)},
	{"LimitLocals", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, LimitLocals)},
	{"LimitParameters", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, LimitParameters)},
	{"LimitPool", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, LimitPool)},
	{"LimitPoolInClass", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, LimitPoolInClass)},
	{"LimitStack", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, LimitStack)},
	{"LimitString", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, LimitString)},
	{"LocalEnum", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, LocalEnum)},
	{"MalformedFpLit", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, MalformedFpLit)},
	{"MatchBindingExists", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, MatchBindingExists)},
	{"MethodDoesNotOverrideSuperclass", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, MethodDoesNotOverrideSuperclass)},
	{"MissingMethBodyOrDeclAbstract", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, MissingMethBodyOrDeclAbstract)},
	{"MissingRetStmt", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, MissingRetStmt)},
	{"ModuleDeclSbInModuleInfoJava", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, ModuleDeclSbInModuleInfoJava)},
	{"ModuleNotFoundOnModuleSourcePath", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, ModuleNotFoundOnModuleSourcePath)},
	{"ModulesourcepathMustBeSpecifiedWithDashMOption", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, ModulesourcepathMustBeSpecifiedWithDashMOption)},
	{"MultipleValuesForModuleSourcePath", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, MultipleValuesForModuleSourcePath)},
	{"NameReservedForInternalUse", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, NameReservedForInternalUse)},
	{"NativeMethCantHaveBody", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, NativeMethCantHaveBody)},
	{"NewNotAllowedInAnnotation", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, NewNotAllowedInAnnotation)},
	{"NoAnnotationsOnDotClass", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, NoAnnotationsOnDotClass)},
	{"NoIntfExpectedHere", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, NoIntfExpectedHere)},
	{"NoMatchEntry", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, NoMatchEntry)},
	{"NoOpensUnlessStrong", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, NoOpensUnlessStrong)},
	{"NoOutputDir", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, NoOutputDir)},
	{"NoPkgInModuleInfoJava", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, NoPkgInModuleInfoJava)},
	{"NoSourceFiles", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, NoSourceFiles)},
	{"NoSourceFilesClasses", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, NoSourceFilesClasses)},
	{"NoSwitchExpression", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, NoSwitchExpression)},
	{"NoSwitchExpressionQualify", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, NoSwitchExpressionQualify)},
	{"NonSealedOrSealedExpected", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, NonSealedOrSealedExpected)},
	{"NonSealedSealedOrFinalExpected", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, NonSealedSealedOrFinalExpected)},
	{"NotExhaustive", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, NotExhaustive)},
	{"NotExhaustiveStatement", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, NotExhaustiveStatement)},
	{"NotInModuleOnModuleSourcePath", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, NotInModuleOnModuleSourcePath)},
	{"NotStmt", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, NotStmt)},
	{"OutputDirMustBeSpecifiedWithDashMOption", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, OutputDirMustBeSpecifiedWithDashMOption)},
	{"PatternDominated", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, PatternDominated)},
	{"PatternExpected", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, PatternExpected)},
	{"PkgAnnotationsSbInPackageInfoJava", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, PkgAnnotationsSbInPackageInfoJava)},
	{"PrematureEof", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, PrematureEof)},
	{"PreviewWithoutSourceOrRelease", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, PreviewWithoutSourceOrRelease)},
	{"ProcCantCreateLoader", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, ProcCantCreateLoader)},
	{"ProcNoService", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, ProcNoService)},
	{"ProcServiceProblem", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, ProcServiceProblem)},
	{"ProcessorpathNoProcessormodulepath", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, ProcessorpathNoProcessormodulepath)},
	{"ProfileBootclasspathConflict", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, ProfileBootclasspathConflict)},
	{"ReceiverParameterNotApplicableConstructorToplevelClass", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, ReceiverParameterNotApplicableConstructorToplevelClass)},
	{"RecordCannotDeclareInstanceFields", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, RecordCannotDeclareInstanceFields)},
	{"RecordCantDeclareFieldModifiers", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, RecordCantDeclareFieldModifiers)},
	{"RecordComponentAndOldArraySyntax", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, RecordComponentAndOldArraySyntax)},
	{"RecordHeaderExpected", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, RecordHeaderExpected)},
	{"RecursiveCtorInvocation", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, RecursiveCtorInvocation)},
	{"RepeatedAnnotationTarget", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, RepeatedAnnotationTarget)},
	{"RepeatedInterface", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, RepeatedInterface)},
	{"RepeatedModifier", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, RepeatedModifier)},
	{"RetOutsideMeth", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, RetOutsideMeth)},
	{"ReturnOutsideSwitchExpression", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, ReturnOutsideSwitchExpression)},
	{"RuleCompletesNormally", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, RuleCompletesNormally)},
	{"SealedClassMustHaveSubclasses", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, SealedClassMustHaveSubclasses)},
	{"SealedOrNonSealedLocalClassesNotAllowed", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, SealedOrNonSealedLocalClassesNotAllowed)},
	{"ServiceImplementationMustBeSubtypeOfServiceInterface", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, ServiceImplementationMustBeSubtypeOfServiceInterface)},
	{"ServiceImplementationProviderReturnMustBeSubtypeOfServiceInterface", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, ServiceImplementationProviderReturnMustBeSubtypeOfServiceInterface)},
	{"SignatureDoesntMatchIntf", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, SignatureDoesntMatchIntf)},
	{"SignatureDoesntMatchSupertype", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, SignatureDoesntMatchSupertype)},
	{"SourcepathModulesourcepathConflict", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, SourcepathModulesourcepathConflict)},
	{"StaticDeclarationNotAllowedInInnerClasses", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, StaticDeclarationNotAllowedInInnerClasses)},
	{"StaticImpOnlyClassesAndInterfaces", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, StaticImpOnlyClassesAndInterfaces)},
	{"StaticMethodsCannotBeAnnotatedWithOverride", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, StaticMethodsCannotBeAnnotatedWithOverride)},
	{"StringConstReq", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, StringConstReq)},
	{"SwitchCaseUnexpectedStatement", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, SwitchCaseUnexpectedStatement)},
	{"SwitchExpressionCompletesNormally", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, SwitchExpressionCompletesNormally)},
	{"SwitchExpressionEmpty", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, SwitchExpressionEmpty)},
	{"SwitchExpressionNoResultExpressions", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, SwitchExpressionNoResultExpressions)},
	{"SwitchMixingCaseTypes", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, SwitchMixingCaseTypes)},
	{"ThisAsIdentifier", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, ThisAsIdentifier)},
	{"ThrowsNotAllowedInIntfAnnotation", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, ThrowsNotAllowedInIntfAnnotation)},
	{"TooManyModules", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, TooManyModules)},
	{"TotalPatternAndDefault", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, TotalPatternAndDefault)},
	{"TryWithResourcesExprNeedsVar", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, TryWithResourcesExprNeedsVar)},
	{"TryWithoutCatchFinallyOrResourceDecls", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, TryWithoutCatchFinallyOrResourceDecls)},
	{"TwoClassLoaders1", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, TwoClassLoaders1)},
	{"TypeVarCantBeDeref", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, TypeVarCantBeDeref)},
	{"TypeVarMayNotBeFollowedByOtherBounds", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, TypeVarMayNotBeFollowedByOtherBounds)},
	{"TypeVarMoreThanOnce", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, TypeVarMoreThanOnce)},
	{"TypeVarMoreThanOnceInResult", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, TypeVarMoreThanOnceInResult)},
	{"UnclosedCharLit", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, UnclosedCharLit)},
	{"UnclosedComment", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, UnclosedComment)},
	{"UnclosedStrLit", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, UnclosedStrLit)},
	{"UnclosedTextBlock", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, UnclosedTextBlock)},
	{"UnderscoreAsIdentifier", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, UnderscoreAsIdentifier)},
	{"UnderscoreAsIdentifierInLambda", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, UnderscoreAsIdentifierInLambda)},
	{"UnexpectedLambda", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, UnexpectedLambda)},
	{"UnexpectedMref", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, UnexpectedMref)},
	{"UnnamedPkgNotAllowedNamedModules", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, UnnamedPkgNotAllowedNamedModules)},
	{"UnreachableStmt", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, UnreachableStmt)},
	{"VarargsAndOldArraySyntax", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, VarargsAndOldArraySyntax)},
	{"VarargsAndReceiver", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, VarargsAndReceiver)},
	{"VarargsMustBeLast", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, VarargsMustBeLast)},
	{"VariableNotAllowed", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, VariableNotAllowed)},
	{"VoidNotAllowedHere", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, VoidNotAllowedHere)},
	{"WarningsAndWerror", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, WarningsAndWerror)},
	{"WrongReceiver", "Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Errors, WrongReceiver)},
	{}
};

$MethodInfo _CompilerProperties$Errors_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CompilerProperties$Errors, init$, void)},
	{"AbstractCantBeAccessedDirectly", "(Lcom/sun/tools/javac/code/Kinds$KindName;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, AbstractCantBeAccessedDirectly, $JCDiagnostic$Error*, $Kinds$KindName*, $Symbol*, $Symbol*)},
	{"AbstractCantBeInstantiated", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, AbstractCantBeInstantiated, $JCDiagnostic$Error*, $Symbol*)},
	{"AddExportsWithRelease", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, AddExportsWithRelease, $JCDiagnostic$Error*, $Symbol*)},
	{"AddReadsWithRelease", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, AddReadsWithRelease, $JCDiagnostic$Error*, $Symbol*)},
	{"AlreadyAnnotated", "(Lcom/sun/tools/javac/code/Kinds$KindName;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, AlreadyAnnotated, $JCDiagnostic$Error*, $Kinds$KindName*, $Symbol*)},
	{"AlreadyDefined", "(Lcom/sun/tools/javac/code/Kinds$KindName;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Kinds$KindName;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, AlreadyDefined, $JCDiagnostic$Error*, $Kinds$KindName*, $Symbol*, $Kinds$KindName*, $Symbol*)},
	{"AlreadyDefinedInClinit", "(Lcom/sun/tools/javac/code/Kinds$KindName;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Kinds$KindName;Lcom/sun/tools/javac/code/Kinds$KindName;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, AlreadyDefinedInClinit, $JCDiagnostic$Error*, $Kinds$KindName*, $Symbol*, $Kinds$KindName*, $Kinds$KindName*, $Symbol*)},
	{"AlreadyDefinedSingleImport", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, AlreadyDefinedSingleImport, $JCDiagnostic$Error*, $Symbol*)},
	{"AlreadyDefinedStaticSingleImport", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, AlreadyDefinedStaticSingleImport, $JCDiagnostic$Error*, $Symbol*)},
	{"AlreadyDefinedThisUnit", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, AlreadyDefinedThisUnit, $JCDiagnostic$Error*, $Symbol*)},
	{"AnnotationMissingDefaultValue", "(Lcom/sun/tools/javac/code/Type;Ljava/util/List;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", "(Lcom/sun/tools/javac/code/Type;Ljava/util/List<+Lcom/sun/tools/javac/util/Name;>;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, AnnotationMissingDefaultValue, $JCDiagnostic$Error*, $Type*, $List*)},
	{"AnnotationMissingDefaultValue1", "(Lcom/sun/tools/javac/code/Type;Ljava/util/List;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", "(Lcom/sun/tools/javac/code/Type;Ljava/util/List<+Lcom/sun/tools/javac/util/Name;>;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, AnnotationMissingDefaultValue1, $JCDiagnostic$Error*, $Type*, $List*)},
	{"AnnotationNotValidForType", "(Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, AnnotationNotValidForType, $JCDiagnostic$Error*, $Type*)},
	{"AnnotationTypeNotApplicableToType", "(Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, AnnotationTypeNotApplicableToType, $JCDiagnostic$Error*, $Type*)},
	{"AnonymousDiamondMethodDoesNotOverrideSuperclass", "(Lcom/sun/tools/javac/util/JCDiagnostic;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, AnonymousDiamondMethodDoesNotOverrideSuperclass, $JCDiagnostic$Error*, $JCDiagnostic*)},
	{"AnonymousDiamondMethodDoesNotOverrideSuperclass", "(Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, AnonymousDiamondMethodDoesNotOverrideSuperclass, $JCDiagnostic$Error*, $JCDiagnostic$Fragment*)},
	{"ArrayAndVarargs", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, ArrayAndVarargs, $JCDiagnostic$Error*, $Symbol*, $Symbol*, $Symbol*)},
	{"ArrayReqButFound", "(Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, ArrayReqButFound, $JCDiagnostic$Error*, $Type*)},
	{"BadFunctionalIntfAnno1", "(Lcom/sun/tools/javac/util/JCDiagnostic;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, BadFunctionalIntfAnno1, $JCDiagnostic$Error*, $JCDiagnostic*)},
	{"BadFunctionalIntfAnno1", "(Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, BadFunctionalIntfAnno1, $JCDiagnostic$Error*, $JCDiagnostic$Fragment*)},
	{"BadInitializer", "(Ljava/lang/String;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, BadInitializer, $JCDiagnostic$Error*, $String*)},
	{"BadNameForOption", "(Lcom/sun/tools/javac/main/Option;Ljava/lang/String;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, BadNameForOption, $JCDiagnostic$Error*, $Option*, $String*)},
	{"BadValueForOption", "(Ljava/lang/String;Ljava/lang/String;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, BadValueForOption, $JCDiagnostic$Error*, $String*, $String*)},
	{"CallMustBeFirstStmtInCtor", "(Lcom/sun/tools/javac/util/Name;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, CallMustBeFirstStmtInCtor, $JCDiagnostic$Error*, $Name*)},
	{"CallToSuperNotAllowedInEnumCtor", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, CallToSuperNotAllowedInEnumCtor, $JCDiagnostic$Error*, $Symbol*)},
	{"CannotGenerateClass", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, CannotGenerateClass, $JCDiagnostic$Error*, $Symbol*, $JCDiagnostic$Fragment*)},
	{"CantAccess", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/util/JCDiagnostic;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, CantAccess, $JCDiagnostic$Error*, $Symbol*, $JCDiagnostic*)},
	{"CantAccess", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, CantAccess, $JCDiagnostic$Error*, $Symbol*, $JCDiagnostic$Fragment*)},
	{"CantApplyDiamond", "(Lcom/sun/tools/javac/util/JCDiagnostic;Ljava/lang/Void;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, CantApplyDiamond, $JCDiagnostic$Error*, $JCDiagnostic*, $Void*)},
	{"CantApplyDiamond", "(Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;Ljava/lang/Void;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, CantApplyDiamond, $JCDiagnostic$Error*, $JCDiagnostic$Fragment*, $Void*)},
	{"CantApplyDiamond1", "(Lcom/sun/tools/javac/util/JCDiagnostic;Lcom/sun/tools/javac/util/JCDiagnostic;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, CantApplyDiamond1, $JCDiagnostic$Error*, $JCDiagnostic*, $JCDiagnostic*)},
	{"CantApplyDiamond1", "(Lcom/sun/tools/javac/util/JCDiagnostic;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, CantApplyDiamond1, $JCDiagnostic$Error*, $JCDiagnostic*, $JCDiagnostic$Fragment*)},
	{"CantApplyDiamond1", "(Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;Lcom/sun/tools/javac/util/JCDiagnostic;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, CantApplyDiamond1, $JCDiagnostic$Error*, $JCDiagnostic$Fragment*, $JCDiagnostic*)},
	{"CantApplyDiamond1", "(Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, CantApplyDiamond1, $JCDiagnostic$Error*, $JCDiagnostic$Fragment*, $JCDiagnostic$Fragment*)},
	{"CantApplyDiamond1", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/JCDiagnostic;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, CantApplyDiamond1, $JCDiagnostic$Error*, $Type*, $JCDiagnostic*)},
	{"CantApplyDiamond1", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, CantApplyDiamond1, $JCDiagnostic$Error*, $Type*, $JCDiagnostic$Fragment*)},
	{"CantApplySymbol", "(Lcom/sun/tools/javac/code/Kinds$Kind;Lcom/sun/tools/javac/util/Name;Ljava/util/List;Ljava/util/List;Lcom/sun/tools/javac/code/Kinds$Kind;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/JCDiagnostic;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", "(Lcom/sun/tools/javac/code/Kinds$Kind;Lcom/sun/tools/javac/util/Name;Ljava/util/List<+Lcom/sun/tools/javac/code/Type;>;Ljava/util/List<+Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/code/Kinds$Kind;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/JCDiagnostic;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, CantApplySymbol, $JCDiagnostic$Error*, $Kinds$Kind*, $Name*, $List*, $List*, $Kinds$Kind*, $Type*, $JCDiagnostic*)},
	{"CantApplySymbol", "(Lcom/sun/tools/javac/code/Kinds$Kind;Lcom/sun/tools/javac/util/Name;Ljava/util/List;Ljava/util/List;Lcom/sun/tools/javac/code/Kinds$Kind;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", "(Lcom/sun/tools/javac/code/Kinds$Kind;Lcom/sun/tools/javac/util/Name;Ljava/util/List<+Lcom/sun/tools/javac/code/Type;>;Ljava/util/List<+Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/code/Kinds$Kind;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, CantApplySymbol, $JCDiagnostic$Error*, $Kinds$Kind*, $Name*, $List*, $List*, $Kinds$Kind*, $Type*, $JCDiagnostic$Fragment*)},
	{"CantApplySymbol", "(Lcom/sun/tools/javac/code/Kinds$Kind;Lcom/sun/tools/javac/util/Name;Ljava/util/List;Lcom/sun/tools/javac/util/JCDiagnostic;Lcom/sun/tools/javac/code/Kinds$Kind;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/JCDiagnostic;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", "(Lcom/sun/tools/javac/code/Kinds$Kind;Lcom/sun/tools/javac/util/Name;Ljava/util/List<+Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/util/JCDiagnostic;Lcom/sun/tools/javac/code/Kinds$Kind;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/JCDiagnostic;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, CantApplySymbol, $JCDiagnostic$Error*, $Kinds$Kind*, $Name*, $List*, $JCDiagnostic*, $Kinds$Kind*, $Type*, $JCDiagnostic*)},
	{"CantApplySymbol", "(Lcom/sun/tools/javac/code/Kinds$Kind;Lcom/sun/tools/javac/util/Name;Ljava/util/List;Lcom/sun/tools/javac/util/JCDiagnostic;Lcom/sun/tools/javac/code/Kinds$Kind;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", "(Lcom/sun/tools/javac/code/Kinds$Kind;Lcom/sun/tools/javac/util/Name;Ljava/util/List<+Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/util/JCDiagnostic;Lcom/sun/tools/javac/code/Kinds$Kind;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, CantApplySymbol, $JCDiagnostic$Error*, $Kinds$Kind*, $Name*, $List*, $JCDiagnostic*, $Kinds$Kind*, $Type*, $JCDiagnostic$Fragment*)},
	{"CantApplySymbol", "(Lcom/sun/tools/javac/code/Kinds$Kind;Lcom/sun/tools/javac/util/Name;Ljava/util/List;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;Lcom/sun/tools/javac/code/Kinds$Kind;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/JCDiagnostic;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", "(Lcom/sun/tools/javac/code/Kinds$Kind;Lcom/sun/tools/javac/util/Name;Ljava/util/List<+Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;Lcom/sun/tools/javac/code/Kinds$Kind;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/JCDiagnostic;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, CantApplySymbol, $JCDiagnostic$Error*, $Kinds$Kind*, $Name*, $List*, $JCDiagnostic$Fragment*, $Kinds$Kind*, $Type*, $JCDiagnostic*)},
	{"CantApplySymbol", "(Lcom/sun/tools/javac/code/Kinds$Kind;Lcom/sun/tools/javac/util/Name;Ljava/util/List;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;Lcom/sun/tools/javac/code/Kinds$Kind;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", "(Lcom/sun/tools/javac/code/Kinds$Kind;Lcom/sun/tools/javac/util/Name;Ljava/util/List<+Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;Lcom/sun/tools/javac/code/Kinds$Kind;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, CantApplySymbol, $JCDiagnostic$Error*, $Kinds$Kind*, $Name*, $List*, $JCDiagnostic$Fragment*, $Kinds$Kind*, $Type*, $JCDiagnostic$Fragment*)},
	{"CantApplySymbol", "(Lcom/sun/tools/javac/code/Kinds$Kind;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/JCDiagnostic;Ljava/util/List;Lcom/sun/tools/javac/code/Kinds$Kind;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/JCDiagnostic;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", "(Lcom/sun/tools/javac/code/Kinds$Kind;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/JCDiagnostic;Ljava/util/List<+Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/code/Kinds$Kind;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/JCDiagnostic;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, CantApplySymbol, $JCDiagnostic$Error*, $Kinds$Kind*, $Name*, $JCDiagnostic*, $List*, $Kinds$Kind*, $Type*, $JCDiagnostic*)},
	{"CantApplySymbol", "(Lcom/sun/tools/javac/code/Kinds$Kind;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/JCDiagnostic;Ljava/util/List;Lcom/sun/tools/javac/code/Kinds$Kind;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", "(Lcom/sun/tools/javac/code/Kinds$Kind;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/JCDiagnostic;Ljava/util/List<+Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/code/Kinds$Kind;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, CantApplySymbol, $JCDiagnostic$Error*, $Kinds$Kind*, $Name*, $JCDiagnostic*, $List*, $Kinds$Kind*, $Type*, $JCDiagnostic$Fragment*)},
	{"CantApplySymbol", "(Lcom/sun/tools/javac/code/Kinds$Kind;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/JCDiagnostic;Lcom/sun/tools/javac/util/JCDiagnostic;Lcom/sun/tools/javac/code/Kinds$Kind;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/JCDiagnostic;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, CantApplySymbol, $JCDiagnostic$Error*, $Kinds$Kind*, $Name*, $JCDiagnostic*, $JCDiagnostic*, $Kinds$Kind*, $Type*, $JCDiagnostic*)},
	{"CantApplySymbol", "(Lcom/sun/tools/javac/code/Kinds$Kind;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/JCDiagnostic;Lcom/sun/tools/javac/util/JCDiagnostic;Lcom/sun/tools/javac/code/Kinds$Kind;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, CantApplySymbol, $JCDiagnostic$Error*, $Kinds$Kind*, $Name*, $JCDiagnostic*, $JCDiagnostic*, $Kinds$Kind*, $Type*, $JCDiagnostic$Fragment*)},
	{"CantApplySymbol", "(Lcom/sun/tools/javac/code/Kinds$Kind;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/JCDiagnostic;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;Lcom/sun/tools/javac/code/Kinds$Kind;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/JCDiagnostic;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, CantApplySymbol, $JCDiagnostic$Error*, $Kinds$Kind*, $Name*, $JCDiagnostic*, $JCDiagnostic$Fragment*, $Kinds$Kind*, $Type*, $JCDiagnostic*)},
	{"CantApplySymbol", "(Lcom/sun/tools/javac/code/Kinds$Kind;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/JCDiagnostic;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;Lcom/sun/tools/javac/code/Kinds$Kind;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, CantApplySymbol, $JCDiagnostic$Error*, $Kinds$Kind*, $Name*, $JCDiagnostic*, $JCDiagnostic$Fragment*, $Kinds$Kind*, $Type*, $JCDiagnostic$Fragment*)},
	{"CantApplySymbol", "(Lcom/sun/tools/javac/code/Kinds$Kind;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;Ljava/util/List;Lcom/sun/tools/javac/code/Kinds$Kind;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/JCDiagnostic;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", "(Lcom/sun/tools/javac/code/Kinds$Kind;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;Ljava/util/List<+Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/code/Kinds$Kind;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/JCDiagnostic;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, CantApplySymbol, $JCDiagnostic$Error*, $Kinds$Kind*, $Name*, $JCDiagnostic$Fragment*, $List*, $Kinds$Kind*, $Type*, $JCDiagnostic*)},
	{"CantApplySymbol", "(Lcom/sun/tools/javac/code/Kinds$Kind;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;Ljava/util/List;Lcom/sun/tools/javac/code/Kinds$Kind;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", "(Lcom/sun/tools/javac/code/Kinds$Kind;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;Ljava/util/List<+Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/code/Kinds$Kind;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, CantApplySymbol, $JCDiagnostic$Error*, $Kinds$Kind*, $Name*, $JCDiagnostic$Fragment*, $List*, $Kinds$Kind*, $Type*, $JCDiagnostic$Fragment*)},
	{"CantApplySymbol", "(Lcom/sun/tools/javac/code/Kinds$Kind;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;Lcom/sun/tools/javac/util/JCDiagnostic;Lcom/sun/tools/javac/code/Kinds$Kind;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/JCDiagnostic;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, CantApplySymbol, $JCDiagnostic$Error*, $Kinds$Kind*, $Name*, $JCDiagnostic$Fragment*, $JCDiagnostic*, $Kinds$Kind*, $Type*, $JCDiagnostic*)},
	{"CantApplySymbol", "(Lcom/sun/tools/javac/code/Kinds$Kind;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;Lcom/sun/tools/javac/util/JCDiagnostic;Lcom/sun/tools/javac/code/Kinds$Kind;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, CantApplySymbol, $JCDiagnostic$Error*, $Kinds$Kind*, $Name*, $JCDiagnostic$Fragment*, $JCDiagnostic*, $Kinds$Kind*, $Type*, $JCDiagnostic$Fragment*)},
	{"CantApplySymbol", "(Lcom/sun/tools/javac/code/Kinds$Kind;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;Lcom/sun/tools/javac/code/Kinds$Kind;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/JCDiagnostic;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, CantApplySymbol, $JCDiagnostic$Error*, $Kinds$Kind*, $Name*, $JCDiagnostic$Fragment*, $JCDiagnostic$Fragment*, $Kinds$Kind*, $Type*, $JCDiagnostic*)},
	{"CantApplySymbol", "(Lcom/sun/tools/javac/code/Kinds$Kind;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;Lcom/sun/tools/javac/code/Kinds$Kind;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, CantApplySymbol, $JCDiagnostic$Error*, $Kinds$Kind*, $Name*, $JCDiagnostic$Fragment*, $JCDiagnostic$Fragment*, $Kinds$Kind*, $Type*, $JCDiagnostic$Fragment*)},
	{"CantApplySymbols", "(Lcom/sun/tools/javac/code/Kinds$Kind;Lcom/sun/tools/javac/util/Name;Ljava/util/List;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", "(Lcom/sun/tools/javac/code/Kinds$Kind;Lcom/sun/tools/javac/util/Name;Ljava/util/List<+Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, CantApplySymbols, $JCDiagnostic$Error*, $Kinds$Kind*, $Name*, $List*)},
	{"CantAssignValToFinalVar", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, CantAssignValToFinalVar, $JCDiagnostic$Error*, $Symbol*)},
	{"CantDeref", "(Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, CantDeref, $JCDiagnostic$Error*, $Type*)},
	{"CantInferLocalVarType", "(Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/JCDiagnostic;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, CantInferLocalVarType, $JCDiagnostic$Error*, $Name*, $JCDiagnostic*)},
	{"CantInferLocalVarType", "(Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, CantInferLocalVarType, $JCDiagnostic$Error*, $Name*, $JCDiagnostic$Fragment*)},
	{"CantInheritDiffArg", "(Lcom/sun/tools/javac/code/Symbol;Ljava/lang/String;Ljava/lang/String;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, CantInheritDiffArg, $JCDiagnostic$Error*, $Symbol*, $String*, $String*)},
	{"CantInheritFromFinal", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, CantInheritFromFinal, $JCDiagnostic$Error*, $Symbol*)},
	{"CantInheritFromSealed", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, CantInheritFromSealed, $JCDiagnostic$Error*, $Symbol*)},
	{"CantRefBeforeCtorCalled", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, CantRefBeforeCtorCalled, $JCDiagnostic$Error*, $Symbol*)},
	{"CantRefBeforeCtorCalled", "(Ljava/lang/String;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, CantRefBeforeCtorCalled, $JCDiagnostic$Error*, $String*)},
	{"CantRefNonEffectivelyFinalVar", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/util/JCDiagnostic;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, CantRefNonEffectivelyFinalVar, $JCDiagnostic$Error*, $Symbol*, $JCDiagnostic*)},
	{"CantRefNonEffectivelyFinalVar", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, CantRefNonEffectivelyFinalVar, $JCDiagnostic$Error*, $Symbol*, $JCDiagnostic$Fragment*)},
	{"CantResolve", "(Lcom/sun/tools/javac/code/Kinds$KindName;Lcom/sun/tools/javac/util/Name;Ljava/lang/Void;Ljava/lang/Void;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, CantResolve, $JCDiagnostic$Error*, $Kinds$KindName*, $Name*, $Void*, $Void*)},
	{"CantResolveArgs", "(Lcom/sun/tools/javac/code/Kinds$KindName;Lcom/sun/tools/javac/util/Name;Ljava/lang/Void;Ljava/util/List;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", "(Lcom/sun/tools/javac/code/Kinds$KindName;Lcom/sun/tools/javac/util/Name;Ljava/lang/Void;Ljava/util/List<+Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, CantResolveArgs, $JCDiagnostic$Error*, $Kinds$KindName*, $Name*, $Void*, $List*)},
	{"CantResolveArgsParams", "(Lcom/sun/tools/javac/code/Kinds$KindName;Lcom/sun/tools/javac/util/Name;Ljava/util/List;Ljava/util/List;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", "(Lcom/sun/tools/javac/code/Kinds$KindName;Lcom/sun/tools/javac/util/Name;Ljava/util/List<+Lcom/sun/tools/javac/code/Type;>;Ljava/util/List<+Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, CantResolveArgsParams, $JCDiagnostic$Error*, $Kinds$KindName*, $Name*, $List*, $List*)},
	{"CantResolveLocation", "(Lcom/sun/tools/javac/code/Kinds$KindName;Lcom/sun/tools/javac/util/Name;Ljava/lang/Void;Ljava/lang/Void;Lcom/sun/tools/javac/util/JCDiagnostic;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, CantResolveLocation, $JCDiagnostic$Error*, $Kinds$KindName*, $Name*, $Void*, $Void*, $JCDiagnostic*)},
	{"CantResolveLocation", "(Lcom/sun/tools/javac/code/Kinds$KindName;Lcom/sun/tools/javac/util/Name;Ljava/lang/Void;Ljava/lang/Void;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, CantResolveLocation, $JCDiagnostic$Error*, $Kinds$KindName*, $Name*, $Void*, $Void*, $JCDiagnostic$Fragment*)},
	{"CantResolveLocationArgs", "(Lcom/sun/tools/javac/code/Kinds$KindName;Lcom/sun/tools/javac/util/Name;Ljava/lang/Void;Ljava/util/List;Lcom/sun/tools/javac/util/JCDiagnostic;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", "(Lcom/sun/tools/javac/code/Kinds$KindName;Lcom/sun/tools/javac/util/Name;Ljava/lang/Void;Ljava/util/List<+Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/util/JCDiagnostic;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, CantResolveLocationArgs, $JCDiagnostic$Error*, $Kinds$KindName*, $Name*, $Void*, $List*, $JCDiagnostic*)},
	{"CantResolveLocationArgs", "(Lcom/sun/tools/javac/code/Kinds$KindName;Lcom/sun/tools/javac/util/Name;Ljava/lang/Void;Ljava/util/List;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", "(Lcom/sun/tools/javac/code/Kinds$KindName;Lcom/sun/tools/javac/util/Name;Ljava/lang/Void;Ljava/util/List<+Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, CantResolveLocationArgs, $JCDiagnostic$Error*, $Kinds$KindName*, $Name*, $Void*, $List*, $JCDiagnostic$Fragment*)},
	{"CantResolveLocationArgsParams", "(Lcom/sun/tools/javac/code/Kinds$KindName;Lcom/sun/tools/javac/util/Name;Ljava/util/List;Ljava/util/List;Lcom/sun/tools/javac/util/JCDiagnostic;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", "(Lcom/sun/tools/javac/code/Kinds$KindName;Lcom/sun/tools/javac/util/Name;Ljava/util/List<+Lcom/sun/tools/javac/code/Type;>;Ljava/util/List;Lcom/sun/tools/javac/util/JCDiagnostic;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, CantResolveLocationArgsParams, $JCDiagnostic$Error*, $Kinds$KindName*, $Name*, $List*, $List*, $JCDiagnostic*)},
	{"CantResolveLocationArgsParams", "(Lcom/sun/tools/javac/code/Kinds$KindName;Lcom/sun/tools/javac/util/Name;Ljava/util/List;Ljava/util/List;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", "(Lcom/sun/tools/javac/code/Kinds$KindName;Lcom/sun/tools/javac/util/Name;Ljava/util/List<+Lcom/sun/tools/javac/code/Type;>;Ljava/util/List;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, CantResolveLocationArgsParams, $JCDiagnostic$Error*, $Kinds$KindName*, $Name*, $List*, $List*, $JCDiagnostic$Fragment*)},
	{"CantTypeAnnotateScoping", "(Ljava/util/List;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", "(Ljava/util/List<+Lcom/sun/tools/javac/code/Attribute$Compound;>;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, CantTypeAnnotateScoping, $JCDiagnostic$Error*, $List*)},
	{"CantTypeAnnotateScoping1", "(Lcom/sun/tools/javac/code/Attribute$Compound;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, CantTypeAnnotateScoping1, $JCDiagnostic$Error*, $Attribute$Compound*)},
	{"ClashWithPkgOfSameName", "(Lcom/sun/tools/javac/code/Kinds$KindName;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, ClashWithPkgOfSameName, $JCDiagnostic$Error*, $Kinds$KindName*, $Symbol*)},
	{"ClassCantWrite", "(Lcom/sun/tools/javac/code/Symbol;Ljava/lang/String;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, ClassCantWrite, $JCDiagnostic$Error*, $Symbol*, $String*)},
	{"ClassInModuleCantExtendSealedInDiffModule", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, ClassInModuleCantExtendSealedInDiffModule, $JCDiagnostic$Error*, $Symbol*, $Symbol*)},
	{"ClassInUnnamedModuleCantExtendSealedInDiffPackage", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, ClassInUnnamedModuleCantExtendSealedInDiffPackage, $JCDiagnostic$Error*, $Symbol*)},
	{"ClassPublicShouldBeInFile", "(Lcom/sun/tools/javac/code/Kinds$KindName;Lcom/sun/tools/javac/util/Name;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, ClassPublicShouldBeInFile, $JCDiagnostic$Error*, $Kinds$KindName*, $Name*)},
	{"ConcreteInheritanceConflict", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, ConcreteInheritanceConflict, $JCDiagnostic$Error*, $Symbol*, $Type*, $Symbol*, $Type*, $Type*)},
	{"ConflictingExports", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, ConflictingExports, $JCDiagnostic$Error*, $Symbol*)},
	{"ConflictingExportsToModule", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, ConflictingExportsToModule, $JCDiagnostic$Error*, $Symbol*)},
	{"ConflictingOpens", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, ConflictingOpens, $JCDiagnostic$Error*, $Symbol*)},
	{"ConflictingOpensToModule", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, ConflictingOpensToModule, $JCDiagnostic$Error*, $Symbol*)},
	{"ConstantLabelNotCompatible", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, ConstantLabelNotCompatible, $JCDiagnostic$Error*, $Type*, $Type*)},
	{"CyclicAnnotationElement", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, CyclicAnnotationElement, $JCDiagnostic$Error*, $Symbol*)},
	{"CyclicInheritance", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, CyclicInheritance, $JCDiagnostic$Error*, $Symbol*)},
	{"CyclicInheritance", "(Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, CyclicInheritance, $JCDiagnostic$Error*, $Type*)},
	{"CyclicRequires", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, CyclicRequires, $JCDiagnostic$Error*, $Symbol*)},
	{"DefaultOverridesObjectMember", "(Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Kinds$KindName;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, DefaultOverridesObjectMember, $JCDiagnostic$Error*, $Name*, $Kinds$KindName*, $Symbol*)},
	{"DoesNotOverrideAbstract", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, DoesNotOverrideAbstract, $JCDiagnostic$Error*, $Symbol*, $Symbol*, $Symbol*)},
	{"DoesntExist", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, DoesntExist, $JCDiagnostic$Error*, $Symbol*)},
	{"DuplicateAnnotationInvalidRepeated", "(Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, DuplicateAnnotationInvalidRepeated, $JCDiagnostic$Error*, $Type*)},
	{"DuplicateAnnotationMemberValue", "(Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, DuplicateAnnotationMemberValue, $JCDiagnostic$Error*, $Name*, $Type*)},
	{"DuplicateAnnotationMissingContainer", "(Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, DuplicateAnnotationMissingContainer, $JCDiagnostic$Error*, $Type*)},
	{"DuplicateClass", "(Lcom/sun/tools/javac/util/Name;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, DuplicateClass, $JCDiagnostic$Error*, $Name*)},
	{"DuplicateModule", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, DuplicateModule, $JCDiagnostic$Error*, $Symbol*)},
	{"DuplicateModuleOnPath", "(Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;Lcom/sun/tools/javac/util/Name;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, DuplicateModuleOnPath, $JCDiagnostic$Error*, $JCDiagnostic$Fragment*, $Name*)},
	{"DuplicateProvides", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, DuplicateProvides, $JCDiagnostic$Error*, $Symbol*, $Symbol*)},
	{"DuplicateRequires", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, DuplicateRequires, $JCDiagnostic$Error*, $Symbol*)},
	{"DuplicateUses", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, DuplicateUses, $JCDiagnostic$Error*, $Symbol*)},
	{"EnclClassRequired", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, EnclClassRequired, $JCDiagnostic$Error*, $Symbol*)},
	{"ErrorReadingFile", "(Ljava/io/File;Ljava/lang/String;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, ErrorReadingFile, $JCDiagnostic$Error*, $File*, $String*)},
	{"ErrorReadingFile", "(Ljavax/tools/JavaFileObject;Ljava/lang/String;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, ErrorReadingFile, $JCDiagnostic$Error*, $JavaFileObject*, $String*)},
	{"ErrorReadingFile", "(Ljava/nio/file/Path;Ljava/lang/String;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, ErrorReadingFile, $JCDiagnostic$Error*, $Path*, $String*)},
	{"ErrorWritingFile", "(Ljava/lang/String;Ljava/lang/String;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, ErrorWritingFile, $JCDiagnostic$Error*, $String*, $String*)},
	{"ExceptAlreadyCaught", "(Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, ExceptAlreadyCaught, $JCDiagnostic$Error*, $Type*)},
	{"ExceptNeverThrownInTry", "(Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, ExceptNeverThrownInTry, $JCDiagnostic$Error*, $Type*)},
	{"Expected", "(Lcom/sun/tools/javac/parser/Tokens$TokenKind;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, Expected, $JCDiagnostic$Error*, $Tokens$TokenKind*)},
	{"Expected2", "(Lcom/sun/tools/javac/parser/Tokens$TokenKind;Lcom/sun/tools/javac/parser/Tokens$TokenKind;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, Expected2, $JCDiagnostic$Error*, $Tokens$TokenKind*, $Tokens$TokenKind*)},
	{"Expected3", "(Lcom/sun/tools/javac/parser/Tokens$TokenKind;Lcom/sun/tools/javac/parser/Tokens$TokenKind;Lcom/sun/tools/javac/parser/Tokens$TokenKind;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, Expected3, $JCDiagnostic$Error*, $Tokens$TokenKind*, $Tokens$TokenKind*, $Tokens$TokenKind*)},
	{"Expected4", "(Lcom/sun/tools/javac/parser/Tokens$TokenKind;Lcom/sun/tools/javac/parser/Tokens$TokenKind;Lcom/sun/tools/javac/parser/Tokens$TokenKind;Ljava/lang/String;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, Expected4, $JCDiagnostic$Error*, $Tokens$TokenKind*, $Tokens$TokenKind*, $Tokens$TokenKind*, $String*)},
	{"ExpectedStr", "(Ljava/lang/String;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, ExpectedStr, $JCDiagnostic$Error*, $String*)},
	{"FeatureNotSupportedInSource", "(Lcom/sun/tools/javac/util/JCDiagnostic;Ljava/lang/String;Ljava/lang/String;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, FeatureNotSupportedInSource, $JCDiagnostic$Error*, $JCDiagnostic*, $String*, $String*)},
	{"FeatureNotSupportedInSource", "(Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;Ljava/lang/String;Ljava/lang/String;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, FeatureNotSupportedInSource, $JCDiagnostic$Error*, $JCDiagnostic$Fragment*, $String*, $String*)},
	{"FeatureNotSupportedInSourcePlural", "(Lcom/sun/tools/javac/util/JCDiagnostic;Ljava/lang/String;Ljava/lang/String;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, FeatureNotSupportedInSourcePlural, $JCDiagnostic$Error*, $JCDiagnostic*, $String*, $String*)},
	{"FeatureNotSupportedInSourcePlural", "(Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;Ljava/lang/String;Ljava/lang/String;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, FeatureNotSupportedInSourcePlural, $JCDiagnostic$Error*, $JCDiagnostic$Fragment*, $String*, $String*)},
	{"FileNotDirectory", "(Ljava/lang/String;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, FileNotDirectory, $JCDiagnostic$Error*, $String*)},
	{"FileNotFile", "(Ljava/lang/Object;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, FileNotFile, $JCDiagnostic$Error*, Object$*)},
	{"FileNotFound", "(Ljava/lang/String;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, FileNotFound, $JCDiagnostic$Error*, $String*)},
	{"FilePatchedAndMsp", "(Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/Name;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, FilePatchedAndMsp, $JCDiagnostic$Error*, $Name*, $Name*)},
	{"FinalParameterMayNotBeAssigned", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, FinalParameterMayNotBeAssigned, $JCDiagnostic$Error*, $Symbol*)},
	{"FirstStatementMustBeCallToAnotherConstructor", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, FirstStatementMustBeCallToAnotherConstructor, $JCDiagnostic$Error*, $Symbol*)},
	{"ForeachNotApplicableToType", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/JCDiagnostic;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, ForeachNotApplicableToType, $JCDiagnostic$Error*, $Type*, $JCDiagnostic*)},
	{"ForeachNotApplicableToType", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, ForeachNotApplicableToType, $JCDiagnostic$Error*, $Type*, $JCDiagnostic$Fragment*)},
	{"IclsCantHaveStaticDecl", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, IclsCantHaveStaticDecl, $JCDiagnostic$Error*, $Symbol*)},
	{"IllegalArgumentForOption", "(Ljava/lang/String;Ljava/lang/String;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, IllegalArgumentForOption, $JCDiagnostic$Error*, $String*, $String*)},
	{"IllegalChar", "(Ljava/lang/String;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, IllegalChar, $JCDiagnostic$Error*, $String*)},
	{"IllegalCharForEncoding", "(Ljava/lang/String;Ljava/lang/String;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, IllegalCharForEncoding, $JCDiagnostic$Error*, $String*, $String*)},
	{"IllegalCombinationOfModifiers", "(Ljava/util/Set;Ljava/util/Set;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", "(Ljava/util/Set<+Lcom/sun/tools/javac/code/Flags$Flag;>;Ljava/util/Set<+Lcom/sun/tools/javac/code/Flags$Flag;>;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, IllegalCombinationOfModifiers, $JCDiagnostic$Error*, $Set*, $Set*)},
	{"IllegalDefaultSuperCall", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/util/JCDiagnostic;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, IllegalDefaultSuperCall, $JCDiagnostic$Error*, $Symbol*, $JCDiagnostic*)},
	{"IllegalDefaultSuperCall", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, IllegalDefaultSuperCall, $JCDiagnostic$Error*, $Symbol*, $JCDiagnostic$Fragment*)},
	{"IllegalDefaultSuperCall", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/JCDiagnostic;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, IllegalDefaultSuperCall, $JCDiagnostic$Error*, $Type*, $JCDiagnostic*)},
	{"IllegalDefaultSuperCall", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, IllegalDefaultSuperCall, $JCDiagnostic$Error*, $Type*, $JCDiagnostic$Fragment*)},
	{"IllegalInitializerForType", "(Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, IllegalInitializerForType, $JCDiagnostic$Error*, $Type*)},
	{"IllegalQualNotIcls", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, IllegalQualNotIcls, $JCDiagnostic$Error*, $Symbol*)},
	{"IllegalRecordComponentName", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, IllegalRecordComponentName, $JCDiagnostic$Error*, $Symbol*)},
	{"IllegalRefToRestrictedType", "(Lcom/sun/tools/javac/util/Name;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, IllegalRefToRestrictedType, $JCDiagnostic$Error*, $Name*)},
	{"IllegalStaticIntfMethCall", "(Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, IllegalStaticIntfMethCall, $JCDiagnostic$Error*, $Type*)},
	{"ImportRequiresCanonical", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, ImportRequiresCanonical, $JCDiagnostic$Error*, $Symbol*)},
	{"IncomparableTypes", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, IncomparableTypes, $JCDiagnostic$Error*, $Type*, $Type*)},
	{"IncompatibleThrownTypesInMref", "(Ljava/util/List;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", "(Ljava/util/List<+Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, IncompatibleThrownTypesInMref, $JCDiagnostic$Error*, $List*)},
	{"IncorrectConstructorReceiverName", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, IncorrectConstructorReceiverName, $JCDiagnostic$Error*, $Type*, $Type*)},
	{"IncorrectConstructorReceiverType", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, IncorrectConstructorReceiverType, $JCDiagnostic$Error*, $Type*, $Type*)},
	{"IncorrectReceiverName", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, IncorrectReceiverName, $JCDiagnostic$Error*, $Type*, $Type*)},
	{"IncorrectReceiverType", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, IncorrectReceiverType, $JCDiagnostic$Error*, $Type*, $Type*)},
	{"InstanceofPatternNoSubtype", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, InstanceofPatternNoSubtype, $JCDiagnostic$Error*, $Type*, $Type*)},
	{"InstanceofReifiableNotSafe", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, InstanceofReifiableNotSafe, $JCDiagnostic$Error*, $Type*, $Type*)},
	{"IntNumberTooLarge", "(Ljava/lang/String;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, IntNumberTooLarge, $JCDiagnostic$Error*, $String*)},
	{"IntfAnnotationCantHaveTypeParams", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, IntfAnnotationCantHaveTypeParams, $JCDiagnostic$Error*, $Symbol*)},
	{"IntfAnnotationMemberClash", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, IntfAnnotationMemberClash, $JCDiagnostic$Error*, $Symbol*, $Type*)},
	{"InvalidAKey", "(Ljava/lang/String;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, InvalidAKey, $JCDiagnostic$Error*, $String*)},
	{"InvalidAccessorMethodInRecord", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, InvalidAccessorMethodInRecord, $JCDiagnostic$Error*, $Symbol*, $JCDiagnostic$Fragment*)},
	{"InvalidCanonicalConstructorInRecord", "(Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, InvalidCanonicalConstructorInRecord, $JCDiagnostic$Error*, $JCDiagnostic$Fragment*, $Name*, $JCDiagnostic$Fragment*)},
	{"InvalidFlag", "(Ljava/lang/String;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, InvalidFlag, $JCDiagnostic$Error*, $String*)},
	{"InvalidLambdaParameterDeclaration", "(Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, InvalidLambdaParameterDeclaration, $JCDiagnostic$Error*, $JCDiagnostic$Fragment*)},
	{"InvalidModuleSpecifier", "(Ljava/lang/String;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, InvalidModuleSpecifier, $JCDiagnostic$Error*, $String*)},
	{"InvalidMref", "(Lcom/sun/tools/javac/code/Kinds$KindName;Lcom/sun/tools/javac/util/JCDiagnostic;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, InvalidMref, $JCDiagnostic$Error*, $Kinds$KindName*, $JCDiagnostic*)},
	{"InvalidMref", "(Lcom/sun/tools/javac/code/Kinds$KindName;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, InvalidMref, $JCDiagnostic$Error*, $Kinds$KindName*, $JCDiagnostic$Fragment*)},
	{"InvalidPath", "(Ljava/lang/String;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, InvalidPath, $JCDiagnostic$Error*, $String*)},
	{"InvalidPermitsClause", "(Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, InvalidPermitsClause, $JCDiagnostic$Error*, $JCDiagnostic$Fragment*)},
	{"InvalidProfile", "(Ljava/lang/String;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, InvalidProfile, $JCDiagnostic$Error*, $String*)},
	{"InvalidRepeatableAnnotation", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, InvalidRepeatableAnnotation, $JCDiagnostic$Error*, $Symbol*)},
	{"InvalidRepeatableAnnotationElemNondefault", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, InvalidRepeatableAnnotationElemNondefault, $JCDiagnostic$Error*, $Symbol*, $Symbol*)},
	{"InvalidRepeatableAnnotationElemNondefault", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, InvalidRepeatableAnnotationElemNondefault, $JCDiagnostic$Error*, $Type*, $Symbol*)},
	{"InvalidRepeatableAnnotationIncompatibleTarget", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, InvalidRepeatableAnnotationIncompatibleTarget, $JCDiagnostic$Error*, $Symbol*, $Symbol*)},
	{"InvalidRepeatableAnnotationInvalidValue", "(Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, InvalidRepeatableAnnotationInvalidValue, $JCDiagnostic$Error*, $Type*)},
	{"InvalidRepeatableAnnotationMultipleValues", "(Lcom/sun/tools/javac/code/Type;I)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, InvalidRepeatableAnnotationMultipleValues, $JCDiagnostic$Error*, $Type*, int32_t)},
	{"InvalidRepeatableAnnotationNoValue", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, InvalidRepeatableAnnotationNoValue, $JCDiagnostic$Error*, $Symbol*)},
	{"InvalidRepeatableAnnotationNoValue", "(Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, InvalidRepeatableAnnotationNoValue, $JCDiagnostic$Error*, $Type*)},
	{"InvalidRepeatableAnnotationNotApplicable", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, InvalidRepeatableAnnotationNotApplicable, $JCDiagnostic$Error*, $Type*, $Symbol*)},
	{"InvalidRepeatableAnnotationNotApplicableInContext", "(Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, InvalidRepeatableAnnotationNotApplicableInContext, $JCDiagnostic$Error*, $Type*)},
	{"InvalidRepeatableAnnotationNotDocumented", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, InvalidRepeatableAnnotationNotDocumented, $JCDiagnostic$Error*, $Symbol*, $Symbol*)},
	{"InvalidRepeatableAnnotationNotInherited", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, InvalidRepeatableAnnotationNotInherited, $JCDiagnostic$Error*, $Symbol*, $Symbol*)},
	{"InvalidRepeatableAnnotationRepeatedAndContainerPresent", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, InvalidRepeatableAnnotationRepeatedAndContainerPresent, $JCDiagnostic$Error*, $Symbol*)},
	{"InvalidRepeatableAnnotationRetention", "(Lcom/sun/tools/javac/code/Symbol;Ljava/lang/String;Lcom/sun/tools/javac/code/Symbol;Ljava/lang/String;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, InvalidRepeatableAnnotationRetention, $JCDiagnostic$Error*, $Symbol*, $String*, $Symbol*, $String*)},
	{"InvalidRepeatableAnnotationValueReturn", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, InvalidRepeatableAnnotationValueReturn, $JCDiagnostic$Error*, $Symbol*, $Type*, $Type*)},
	{"InvalidRepeatableAnnotationValueReturn", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, InvalidRepeatableAnnotationValueReturn, $JCDiagnostic$Error*, $Type*, $Type*, $Type*)},
	{"InvalidSource", "(Ljava/lang/String;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, InvalidSource, $JCDiagnostic$Error*, $String*)},
	{"InvalidSupertypeRecord", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, InvalidSupertypeRecord, $JCDiagnostic$Error*, $Symbol*)},
	{"InvalidTarget", "(Ljava/lang/String;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, InvalidTarget, $JCDiagnostic$Error*, $String*)},
	{"IsPreview", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, IsPreview, $JCDiagnostic$Error*, $Symbol*)},
	{"LabelAlreadyInUse", "(Lcom/sun/tools/javac/util/Name;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, LabelAlreadyInUse, $JCDiagnostic$Error*, $Name*)},
	{"LimitStringOverflow", "(Ljava/lang/String;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, LimitStringOverflow, $JCDiagnostic$Error*, $String*)},
	{"LocalClassesCantExtendSealed", "(Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, LocalClassesCantExtendSealed, $JCDiagnostic$Error*, $JCDiagnostic$Fragment*)},
	{"LocalVarAccessedFromIclsNeedsFinal", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, LocalVarAccessedFromIclsNeedsFinal, $JCDiagnostic$Error*, $Symbol*)},
	{"LocnBadModuleInfo", "(Ljava/nio/file/Path;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, LocnBadModuleInfo, $JCDiagnostic$Error*, $Path*)},
	{"LocnCantGetModuleNameForJar", "(Ljava/nio/file/Path;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, LocnCantGetModuleNameForJar, $JCDiagnostic$Error*, $Path*)},
	{"LocnCantReadDirectory", "(Ljava/nio/file/Path;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, LocnCantReadDirectory, $JCDiagnostic$Error*, $Path*)},
	{"LocnCantReadFile", "(Ljava/nio/file/Path;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, LocnCantReadFile, $JCDiagnostic$Error*, $Path*)},
	{"LocnInvalidArgForXpatch", "(Ljava/lang/String;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, LocnInvalidArgForXpatch, $JCDiagnostic$Error*, $String*)},
	{"LocnModuleInfoNotAllowedOnPatchPath", "(Ljavax/tools/JavaFileObject;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, LocnModuleInfoNotAllowedOnPatchPath, $JCDiagnostic$Error*, $JavaFileObject*)},
	{"ModNotAllowedHere", "(Ljava/util/Set;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", "(Ljava/util/Set<+Lcom/sun/tools/javac/code/Flags$Flag;>;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, ModNotAllowedHere, $JCDiagnostic$Error*, $Set*)},
	{"ModifierNotAllowedHere", "(Lcom/sun/tools/javac/util/Name;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, ModifierNotAllowedHere, $JCDiagnostic$Error*, $Name*)},
	{"ModuleNameMismatch", "(Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/Name;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, ModuleNameMismatch, $JCDiagnostic$Error*, $Name*, $Name*)},
	{"ModuleNonZeroOpens", "(Lcom/sun/tools/javac/util/Name;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, ModuleNonZeroOpens, $JCDiagnostic$Error*, $Name*)},
	{"ModuleNotFound", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, ModuleNotFound, $JCDiagnostic$Error*, $Symbol*)},
	{"ModuleNotFoundInModuleSourcePath", "(Ljava/lang/String;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, ModuleNotFoundInModuleSourcePath, $JCDiagnostic$Error*, $String*)},
	{"MultiModuleOutdirCannotBeExplodedModule", "(Ljava/nio/file/Path;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, MultiModuleOutdirCannotBeExplodedModule, $JCDiagnostic$Error*, $Path*)},
	{"MulticatchParameterMayNotBeAssigned", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, MulticatchParameterMayNotBeAssigned, $JCDiagnostic$Error*, $Symbol*)},
	{"MulticatchTypesMustBeDisjoint", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, MulticatchTypesMustBeDisjoint, $JCDiagnostic$Error*, $Type*, $Type*)},
	{"NameClashSameErasure", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, NameClashSameErasure, $JCDiagnostic$Error*, $Symbol*, $Symbol*)},
	{"NameClashSameErasureNoHide", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, NameClashSameErasureNoHide, $JCDiagnostic$Error*, $Symbol*, $Symbol*, $Symbol*, $Symbol*)},
	{"NameClashSameErasureNoOverride", "(Lcom/sun/tools/javac/util/Name;Ljava/util/List;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/util/Name;Ljava/util/List;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", "(Lcom/sun/tools/javac/util/Name;Ljava/util/List<+Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/util/Name;Ljava/util/List<+Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, NameClashSameErasureNoOverride, $JCDiagnostic$Error*, $Name*, $List*, $Symbol*, $Name*, $List*, $Symbol*)},
	{"NameClashSameErasureNoOverride1", "(Ljava/lang/String;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/Name;Ljava/util/List;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/util/Name;Ljava/util/List;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", "(Ljava/lang/String;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/Name;Ljava/util/List<+Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/util/Name;Ljava/util/List<+Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, NameClashSameErasureNoOverride1, $JCDiagnostic$Error*, $String*, $Name*, $Name*, $List*, $Symbol*, $Name*, $List*, $Symbol*)},
	{"NoAnnotationMember", "(Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, NoAnnotationMember, $JCDiagnostic$Error*, $Name*, $Type*)},
	{"NoEnclInstanceOfTypeInScope", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, NoEnclInstanceOfTypeInScope, $JCDiagnostic$Error*, $Symbol*)},
	{"NoSuperclass", "(Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, NoSuperclass, $JCDiagnostic$Error*, $Type*)},
	{"NoValueForOption", "(Ljava/lang/String;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, NoValueForOption, $JCDiagnostic$Error*, $String*)},
	{"NoZipfsForArchive", "(Ljava/nio/file/Path;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, NoZipfsForArchive, $JCDiagnostic$Error*, $Path*)},
	{"NonSealedWithNoSealedSupertype", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, NonSealedWithNoSealedSupertype, $JCDiagnostic$Error*, $Symbol*)},
	{"NonStaticCantBeRef", "(Lcom/sun/tools/javac/code/Kinds$Kind;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, NonStaticCantBeRef, $JCDiagnostic$Error*, $Kinds$Kind*, $Symbol*)},
	{"NotAnnotationType", "(Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, NotAnnotationType, $JCDiagnostic$Error*, $Type*)},
	{"NotDefAccessClassIntfCantAccess", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, NotDefAccessClassIntfCantAccess, $JCDiagnostic$Error*, $Symbol*, $Symbol*)},
	{"NotDefAccessClassIntfCantAccessReason", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/util/JCDiagnostic;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, NotDefAccessClassIntfCantAccessReason, $JCDiagnostic$Error*, $Symbol*, $Symbol*, $Symbol*, $JCDiagnostic*)},
	{"NotDefAccessClassIntfCantAccessReason", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, NotDefAccessClassIntfCantAccessReason, $JCDiagnostic$Error*, $Symbol*, $Symbol*, $Symbol*, $JCDiagnostic$Fragment*)},
	{"NotDefAccessPackageCantAccess", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/util/JCDiagnostic;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, NotDefAccessPackageCantAccess, $JCDiagnostic$Error*, $Symbol*, $Symbol*, $JCDiagnostic*)},
	{"NotDefAccessPackageCantAccess", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, NotDefAccessPackageCantAccess, $JCDiagnostic$Error*, $Symbol*, $Symbol*, $JCDiagnostic$Fragment*)},
	{"NotDefPublic", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, NotDefPublic, $JCDiagnostic$Error*, $Symbol*, $Symbol*)},
	{"NotDefPublicCantAccess", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, NotDefPublicCantAccess, $JCDiagnostic$Error*, $Symbol*, $Symbol*)},
	{"NotEnclClass", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, NotEnclClass, $JCDiagnostic$Error*, $Symbol*)},
	{"NotInProfile", "(Lcom/sun/tools/javac/code/Symbol;Ljava/lang/Object;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, NotInProfile, $JCDiagnostic$Error*, $Symbol*, Object$*)},
	{"NotLoopLabel", "(Lcom/sun/tools/javac/util/Name;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, NotLoopLabel, $JCDiagnostic$Error*, $Name*)},
	{"NotWithinBounds", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, NotWithinBounds, $JCDiagnostic$Error*, $Type*, $Type*)},
	{"NotWithinBounds", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, NotWithinBounds, $JCDiagnostic$Error*, $Type*, $Symbol*)},
	{"OperatorCantBeApplied", "(Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, OperatorCantBeApplied, $JCDiagnostic$Error*, $Name*, $Type*)},
	{"OperatorCantBeApplied1", "(Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, OperatorCantBeApplied1, $JCDiagnostic$Error*, $Name*, $Type*, $Type*)},
	{"OptionNotAllowedWithTarget", "(Lcom/sun/tools/javac/main/Option;Lcom/sun/tools/javac/jvm/Target;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, OptionNotAllowedWithTarget, $JCDiagnostic$Error*, $Option*, $Target*)},
	{"OptionRemovedSource", "(Ljava/lang/String;Ljava/lang/String;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, OptionRemovedSource, $JCDiagnostic$Error*, $String*, $String*)},
	{"OptionRemovedTarget", "(Lcom/sun/tools/javac/jvm/Target;Lcom/sun/tools/javac/jvm/Target;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, OptionRemovedTarget, $JCDiagnostic$Error*, $Target*, $Target*)},
	{"OptionTooMany", "(Ljava/lang/String;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, OptionTooMany, $JCDiagnostic$Error*, $String*)},
	{"Orphaned", "(Lcom/sun/tools/javac/parser/Tokens$TokenKind;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, Orphaned, $JCDiagnostic$Error*, $Tokens$TokenKind*)},
	{"OverrideIncompatibleRet", "(Lcom/sun/tools/javac/util/JCDiagnostic;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, OverrideIncompatibleRet, $JCDiagnostic$Error*, $JCDiagnostic*, $Type*, $Type*)},
	{"OverrideIncompatibleRet", "(Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, OverrideIncompatibleRet, $JCDiagnostic$Error*, $JCDiagnostic$Fragment*, $Type*, $Type*)},
	{"OverrideMeth", "(Lcom/sun/tools/javac/util/JCDiagnostic;Ljava/util/Set;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", "(Lcom/sun/tools/javac/util/JCDiagnostic;Ljava/util/Set<+Lcom/sun/tools/javac/code/Flags$Flag;>;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, OverrideMeth, $JCDiagnostic$Error*, $JCDiagnostic*, $Set*)},
	{"OverrideMeth", "(Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;Ljava/util/Set;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", "(Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;Ljava/util/Set<+Lcom/sun/tools/javac/code/Flags$Flag;>;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, OverrideMeth, $JCDiagnostic$Error*, $JCDiagnostic$Fragment*, $Set*)},
	{"OverrideMethDoesntThrow", "(Lcom/sun/tools/javac/util/JCDiagnostic;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, OverrideMethDoesntThrow, $JCDiagnostic$Error*, $JCDiagnostic*, $Type*)},
	{"OverrideMethDoesntThrow", "(Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, OverrideMethDoesntThrow, $JCDiagnostic$Error*, $JCDiagnostic$Fragment*, $Type*)},
	{"OverrideStatic", "(Lcom/sun/tools/javac/util/JCDiagnostic;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, OverrideStatic, $JCDiagnostic$Error*, $JCDiagnostic*)},
	{"OverrideStatic", "(Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, OverrideStatic, $JCDiagnostic$Error*, $JCDiagnostic$Fragment*)},
	{"OverrideWeakerAccess", "(Lcom/sun/tools/javac/util/JCDiagnostic;Ljava/util/Set;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", "(Lcom/sun/tools/javac/util/JCDiagnostic;Ljava/util/Set<+Lcom/sun/tools/javac/code/Flags$Flag;>;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, OverrideWeakerAccess, $JCDiagnostic$Error*, $JCDiagnostic*, $Set*)},
	{"OverrideWeakerAccess", "(Lcom/sun/tools/javac/util/JCDiagnostic;Ljava/lang/String;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, OverrideWeakerAccess, $JCDiagnostic$Error*, $JCDiagnostic*, $String*)},
	{"OverrideWeakerAccess", "(Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;Ljava/util/Set;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", "(Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;Ljava/util/Set<+Lcom/sun/tools/javac/code/Flags$Flag;>;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, OverrideWeakerAccess, $JCDiagnostic$Error*, $JCDiagnostic$Fragment*, $Set*)},
	{"OverrideWeakerAccess", "(Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;Ljava/lang/String;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, OverrideWeakerAccess, $JCDiagnostic$Error*, $JCDiagnostic$Fragment*, $String*)},
	{"PackageClashFromRequires", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, PackageClashFromRequires, $JCDiagnostic$Error*, $Symbol*, $Name*, $Symbol*, $Symbol*)},
	{"PackageClashFromRequiresInUnnamed", "(Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, PackageClashFromRequiresInUnnamed, $JCDiagnostic$Error*, $Name*, $Symbol*, $Symbol*)},
	{"PackageEmptyOrNotFound", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, PackageEmptyOrNotFound, $JCDiagnostic$Error*, $Symbol*)},
	{"PackageInOtherModule", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, PackageInOtherModule, $JCDiagnostic$Error*, $Symbol*)},
	{"PackageNotVisible", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/util/JCDiagnostic;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, PackageNotVisible, $JCDiagnostic$Error*, $Symbol*, $JCDiagnostic*)},
	{"PackageNotVisible", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, PackageNotVisible, $JCDiagnostic$Error*, $Symbol*, $JCDiagnostic$Fragment*)},
	{"PkgClashesWithClassOfSameName", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, PkgClashesWithClassOfSameName, $JCDiagnostic$Error*, $Symbol*)},
	{"PluginNotFound", "(Ljava/lang/String;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, PluginNotFound, $JCDiagnostic$Error*, $String*)},
	{"PreviewFeatureDisabled", "(Lcom/sun/tools/javac/util/JCDiagnostic;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, PreviewFeatureDisabled, $JCDiagnostic$Error*, $JCDiagnostic*)},
	{"PreviewFeatureDisabled", "(Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, PreviewFeatureDisabled, $JCDiagnostic$Error*, $JCDiagnostic$Fragment*)},
	{"PreviewFeatureDisabledClassfile", "(Ljavax/tools/JavaFileObject;Ljava/lang/String;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, PreviewFeatureDisabledClassfile, $JCDiagnostic$Error*, $JavaFileObject*, $String*)},
	{"PreviewFeatureDisabledPlural", "(Lcom/sun/tools/javac/util/JCDiagnostic;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, PreviewFeatureDisabledPlural, $JCDiagnostic$Error*, $JCDiagnostic*)},
	{"PreviewFeatureDisabledPlural", "(Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, PreviewFeatureDisabledPlural, $JCDiagnostic$Error*, $JCDiagnostic$Fragment*)},
	{"PreviewNotLatest", "(Ljava/lang/String;Lcom/sun/tools/javac/code/Source;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, PreviewNotLatest, $JCDiagnostic$Error*, $String*, $Source*)},
	{"ProbFoundReq", "(Lcom/sun/tools/javac/util/JCDiagnostic;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, ProbFoundReq, $JCDiagnostic$Error*, $JCDiagnostic*)},
	{"ProbFoundReq", "(Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, ProbFoundReq, $JCDiagnostic$Error*, $JCDiagnostic$Fragment*)},
	{"ProcBadConfigFile", "(Ljava/lang/String;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, ProcBadConfigFile, $JCDiagnostic$Error*, $String*)},
	{"ProcCantAccess", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/util/JCDiagnostic;Ljava/lang/String;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, ProcCantAccess, $JCDiagnostic$Error*, $Symbol*, $JCDiagnostic*, $String*)},
	{"ProcCantAccess", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;Ljava/lang/String;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, ProcCantAccess, $JCDiagnostic$Error*, $Symbol*, $JCDiagnostic$Fragment*, $String*)},
	{"ProcCantAccess1", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/util/JCDiagnostic;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, ProcCantAccess1, $JCDiagnostic$Error*, $Symbol*, $JCDiagnostic*)},
	{"ProcCantAccess1", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, ProcCantAccess1, $JCDiagnostic$Error*, $Symbol*, $JCDiagnostic$Fragment*)},
	{"ProcCantFindClass", "(Ljava/lang/String;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, ProcCantFindClass, $JCDiagnostic$Error*, $String*)},
	{"ProcCantLoadClass", "(Ljava/lang/String;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, ProcCantLoadClass, $JCDiagnostic$Error*, $String*)},
	{"ProcMessager", "(Ljava/lang/String;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, ProcMessager, $JCDiagnostic$Error*, $String*)},
	{"ProcNoExplicitAnnotationProcessingRequested", "(Ljava/util/Collection;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", "(Ljava/util/Collection<+Ljava/lang/String;>;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, ProcNoExplicitAnnotationProcessingRequested, $JCDiagnostic$Error*, $Collection*)},
	{"ProcProcessorBadOptionName", "(Ljava/lang/String;Ljava/lang/String;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, ProcProcessorBadOptionName, $JCDiagnostic$Error*, $String*, $String*)},
	{"ProcProcessorCantInstantiate", "(Ljava/lang/String;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, ProcProcessorCantInstantiate, $JCDiagnostic$Error*, $String*)},
	{"ProcProcessorNotFound", "(Ljava/lang/String;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, ProcProcessorNotFound, $JCDiagnostic$Error*, $String*)},
	{"ProcProcessorWrongType", "(Ljava/lang/String;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, ProcProcessorWrongType, $JCDiagnostic$Error*, $String*)},
	{"QualifiedNewOfStaticClass", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, QualifiedNewOfStaticClass, $JCDiagnostic$Error*, $Symbol*)},
	{"RefAmbiguous", "(Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Kinds$Kind;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Kinds$Kind;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, RefAmbiguous, $JCDiagnostic$Error*, $Name*, $Kinds$Kind*, $Symbol*, $Symbol*, $Kinds$Kind*, $Symbol*, $Symbol*)},
	{"ReleaseBootclasspathConflict", "(Lcom/sun/tools/javac/main/Option;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, ReleaseBootclasspathConflict, $JCDiagnostic$Error*, $Option*)},
	{"RepeatedProvidesForService", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, RepeatedProvidesForService, $JCDiagnostic$Error*, $Symbol*)},
	{"RepeatedValueForModuleSourcePath", "(Ljava/lang/String;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, RepeatedValueForModuleSourcePath, $JCDiagnostic$Error*, $String*)},
	{"RepeatedValueForPatchModule", "(Ljava/lang/String;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, RepeatedValueForPatchModule, $JCDiagnostic$Error*, $String*)},
	{"ReportAccess", "(Lcom/sun/tools/javac/code/Symbol;Ljava/util/Set;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", "(Lcom/sun/tools/javac/code/Symbol;Ljava/util/Set<+Ljavax/lang/model/element/Modifier;>;Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, ReportAccess, $JCDiagnostic$Error*, $Symbol*, $Set*, $Symbol*)},
	{"ReqArg", "(Ljava/lang/String;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, ReqArg, $JCDiagnostic$Error*, $String*)},
	{"RestrictedTypeNotAllowed", "(Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Source;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, RestrictedTypeNotAllowed, $JCDiagnostic$Error*, $Name*, $Source*)},
	{"RestrictedTypeNotAllowedArray", "(Lcom/sun/tools/javac/util/Name;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, RestrictedTypeNotAllowedArray, $JCDiagnostic$Error*, $Name*)},
	{"RestrictedTypeNotAllowedCompound", "(Lcom/sun/tools/javac/util/Name;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, RestrictedTypeNotAllowedCompound, $JCDiagnostic$Error*, $Name*)},
	{"RestrictedTypeNotAllowedHere", "(Lcom/sun/tools/javac/util/Name;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, RestrictedTypeNotAllowedHere, $JCDiagnostic$Error*, $Name*)},
	{"SameBinaryName", "(Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/Name;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, SameBinaryName, $JCDiagnostic$Error*, $Name*, $Name*)},
	{"ServiceDefinitionIsEnum", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, ServiceDefinitionIsEnum, $JCDiagnostic$Error*, $Symbol*)},
	{"ServiceImplementationDoesntHaveANoArgsConstructor", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, ServiceImplementationDoesntHaveANoArgsConstructor, $JCDiagnostic$Error*, $Symbol*)},
	{"ServiceImplementationIsAbstract", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, ServiceImplementationIsAbstract, $JCDiagnostic$Error*, $Symbol*)},
	{"ServiceImplementationIsInner", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, ServiceImplementationIsInner, $JCDiagnostic$Error*, $Symbol*)},
	{"ServiceImplementationNoArgsConstructorNotPublic", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, ServiceImplementationNoArgsConstructorNotPublic, $JCDiagnostic$Error*, $Symbol*)},
	{"ServiceImplementationNotInRightModule", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, ServiceImplementationNotInRightModule, $JCDiagnostic$Error*, $Symbol*)},
	{"SourceCantOverwriteInputFile", "(Ljavax/tools/JavaFileObject;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, SourceCantOverwriteInputFile, $JCDiagnostic$Error*, $JavaFileObject*)},
	{"StackSimError", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, StackSimError, $JCDiagnostic$Error*, $Symbol*)},
	{"TooManyPatchedModules", "(Ljava/util/Set;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", "(Ljava/util/Set<+Ljava/lang/String;>;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, TooManyPatchedModules, $JCDiagnostic$Error*, $Set*)},
	{"TryResourceMayNotBeAssigned", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, TryResourceMayNotBeAssigned, $JCDiagnostic$Error*, $Symbol*)},
	{"TryWithResourcesExprEffectivelyFinalVar", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, TryWithResourcesExprEffectivelyFinalVar, $JCDiagnostic$Error*, $Symbol*)},
	{"TwoClassLoaders2", "(Ljava/net/URL;Ljava/net/URL;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, TwoClassLoaders2, $JCDiagnostic$Error*, $URL*, $URL*)},
	{"TypeDoesntTakeParams", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, TypeDoesntTakeParams, $JCDiagnostic$Error*, $Symbol*)},
	{"TypeFoundReq", "(Ljava/lang/Object;Lcom/sun/tools/javac/util/JCDiagnostic;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, TypeFoundReq, $JCDiagnostic$Error*, Object$*, $JCDiagnostic*)},
	{"TypeFoundReq", "(Ljava/lang/Object;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, TypeFoundReq, $JCDiagnostic$Error*, Object$*, $JCDiagnostic$Fragment*)},
	{"TypesIncompatible", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, TypesIncompatible, $JCDiagnostic$Error*, $Type*, $Type*, $JCDiagnostic$Fragment*)},
	{"UndefLabel", "(Lcom/sun/tools/javac/util/Name;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, UndefLabel, $JCDiagnostic$Error*, $Name*)},
	{"UnexpectedType", "(Ljava/util/Set;Ljava/util/Set;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", "(Ljava/util/Set<+Lcom/sun/tools/javac/code/Kinds$KindName;>;Ljava/util/Set<+Lcom/sun/tools/javac/code/Kinds$KindName;>;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, UnexpectedType, $JCDiagnostic$Error*, $Set*, $Set*)},
	{"UnmatchedQuote", "(Ljava/lang/String;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, UnmatchedQuote, $JCDiagnostic$Error*, $String*)},
	{"UnreportedExceptionDefaultConstructor", "(Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, UnreportedExceptionDefaultConstructor, $JCDiagnostic$Error*, $Type*)},
	{"UnreportedExceptionImplicitClose", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/Name;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, UnreportedExceptionImplicitClose, $JCDiagnostic$Error*, $Type*, $Name*)},
	{"UnreportedExceptionNeedToCatchOrThrow", "(Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, UnreportedExceptionNeedToCatchOrThrow, $JCDiagnostic$Error*, $Type*)},
	{"UnsupportedEncoding", "(Ljava/lang/String;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, UnsupportedEncoding, $JCDiagnostic$Error*, $String*)},
	{"UnsupportedReleaseVersion", "(Ljava/lang/String;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, UnsupportedReleaseVersion, $JCDiagnostic$Error*, $String*)},
	{"VarMightAlreadyBeAssigned", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, VarMightAlreadyBeAssigned, $JCDiagnostic$Error*, $Symbol*)},
	{"VarMightBeAssignedInLoop", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, VarMightBeAssignedInLoop, $JCDiagnostic$Error*, $Symbol*)},
	{"VarMightNotHaveBeenInitialized", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, VarMightNotHaveBeenInitialized, $JCDiagnostic$Error*, $Symbol*)},
	{"VarNotInitializedInDefaultConstructor", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, VarNotInitializedInDefaultConstructor, $JCDiagnostic$Error*, $Symbol*)},
	{"VarargsInvalidTrustmeAnno", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/util/JCDiagnostic;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, VarargsInvalidTrustmeAnno, $JCDiagnostic$Error*, $Symbol*, $JCDiagnostic*)},
	{"VarargsInvalidTrustmeAnno", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, VarargsInvalidTrustmeAnno, $JCDiagnostic$Error*, $Symbol*, $JCDiagnostic$Fragment*)},
	{"WrongNumberTypeArgs", "(Ljava/lang/String;)Lcom/sun/tools/javac/util/JCDiagnostic$Error;", nullptr, $PUBLIC | $STATIC, $staticMethod(CompilerProperties$Errors, WrongNumberTypeArgs, $JCDiagnostic$Error*, $String*)},
	{}
};

$InnerClassInfo _CompilerProperties$Errors_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.resources.CompilerProperties$Errors", "com.sun.tools.javac.resources.CompilerProperties", "Errors", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _CompilerProperties$Errors_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.resources.CompilerProperties$Errors",
	"java.lang.Object",
	nullptr,
	_CompilerProperties$Errors_FieldInfo_,
	_CompilerProperties$Errors_MethodInfo_,
	nullptr,
	nullptr,
	_CompilerProperties$Errors_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.resources.CompilerProperties"
};

$Object* allocate$CompilerProperties$Errors($Class* clazz) {
	return $of($alloc(CompilerProperties$Errors));
}

$JCDiagnostic$Error* CompilerProperties$Errors::AbstractMethCantHaveBody = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::AddmodsAllModulePathInvalid = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::AnnotationDeclNotAllowedHere = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::AnnotationTypeNotApplicable = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::AnnotationValueMustBeAnnotation = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::AnnotationValueMustBeClassLiteral = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::AnnotationValueMustBeNameValue = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::AnnotationValueNotAllowableType = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::AnonClassImplIntfNoArgs = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::AnonClassImplIntfNoQualForNew = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::AnonClassImplIntfNoTypeargs = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::ArrayAndReceiver = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::ArrayDimensionMissing = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::AssertAsIdentifier = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::AttributeValueMustBeConstant = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::BadFunctionalIntfAnno = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::BreakOutsideSwitchExpression = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::BreakOutsideSwitchLoop = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::CannotCreateArrayWithDiamond = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::CannotCreateArrayWithTypeArguments = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::CantAssignValToThis = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::CantExtendIntfAnnotation = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::CantInheritFromAnon = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::CantReadFile = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::CantSelectStaticClassFromParamType = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::CatchWithoutTry = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::ClassNotAllowed = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::ConstExprReq = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::ContOutsideLoop = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::ContinueOutsideSwitchExpression = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::DcBadEntity = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::DcBadInlineTag = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::DcGtExpected = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::DcIdentifierExpected = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::DcMalformedHtml = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::DcMissingSemicolon = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::DcNoContent = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::DcNoTagName = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::DcRefBadParens = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::DcRefSyntaxError = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::DcRefUnexpectedInput = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::DcUnexpectedContent = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::DcUnterminatedInlineTag = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::DcUnterminatedSignature = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::DcUnterminatedString = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::DefaultAllowedInIntfAnnotationMember = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::DotClassExpected = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::DuplicateCaseLabel = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::DuplicateDefaultLabel = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::DuplicateTotalPattern = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::ElseWithoutIf = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::EmptyAArgument = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::EmptyCharLit = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::EnumAnnotationMustBeEnumConstant = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::EnumAsIdentifier = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::EnumCantBeInstantiated = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::EnumConstantExpected = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::EnumConstantNotExpected = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::EnumLabelMustBeUnqualifiedEnum = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::EnumNoFinalize = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::EnumNoSubclassing = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::EnumTypesNotExtensible = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::Error = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::ExpectedModule = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::ExpectedModuleOrOpen = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::ExpressionNotAllowableAsAnnotationValue = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::FileSbOnSourceOrPatchPathForModule = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::FinallyWithoutTry = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::FlowsThroughFromPattern = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::FlowsThroughToPattern = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::FpNumberTooLarge = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::FpNumberTooSmall = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::GenericArrayCreation = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::GenericThrowable = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::IllegalArrayCreationBothDimensionAndInitialization = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::IllegalDot = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::IllegalEnumStaticRef = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::IllegalEscChar = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::IllegalForwardRef = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::IllegalLineEndInCharLit = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::IllegalNonasciiDigit = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::IllegalParenthesizedExpression = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::IllegalSelfRef = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::IllegalStartOfExpr = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::IllegalStartOfStmt = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::IllegalStartOfType = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::IllegalTextBlockOpen = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::IllegalUnderscore = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::IllegalUnicodeEsc = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::ImproperlyFormedTypeInnerRawParam = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::ImproperlyFormedTypeParamMissing = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::InitializerMustBeAbleToCompleteNormally = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::InitializerNotAllowed = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::InstanceInitializerNotAllowedInRecords = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::IntfAnnotationMembersCantHaveParams = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::IntfAnnotationMembersCantHaveTypeParams = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::IntfExpectedHere = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::IntfMethCantHaveBody = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::IntfNotAllowedHere = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::InvalidAnnotationMemberType = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::InvalidBinaryNumber = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::InvalidHexNumber = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::InvalidMethDeclRetTypeReq = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::InvalidModuleDirective = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::InvalidYield = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::IoException = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::LambdaBodyNeitherValueNorVoidCompatible = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::LimitCode = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::LimitCodeTooLargeForTryStmt = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::LimitDimensions = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::LimitLocals = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::LimitParameters = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::LimitPool = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::LimitPoolInClass = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::LimitStack = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::LimitString = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::LocalEnum = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::MalformedFpLit = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::MatchBindingExists = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::MethodDoesNotOverrideSuperclass = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::MissingMethBodyOrDeclAbstract = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::MissingRetStmt = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::ModuleDeclSbInModuleInfoJava = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::ModuleNotFoundOnModuleSourcePath = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::ModulesourcepathMustBeSpecifiedWithDashMOption = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::MultipleValuesForModuleSourcePath = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::NameReservedForInternalUse = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::NativeMethCantHaveBody = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::NewNotAllowedInAnnotation = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::NoAnnotationsOnDotClass = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::NoIntfExpectedHere = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::NoMatchEntry = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::NoOpensUnlessStrong = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::NoOutputDir = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::NoPkgInModuleInfoJava = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::NoSourceFiles = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::NoSourceFilesClasses = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::NoSwitchExpression = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::NoSwitchExpressionQualify = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::NonSealedOrSealedExpected = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::NonSealedSealedOrFinalExpected = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::NotExhaustive = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::NotExhaustiveStatement = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::NotInModuleOnModuleSourcePath = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::NotStmt = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::OutputDirMustBeSpecifiedWithDashMOption = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::PatternDominated = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::PatternExpected = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::PkgAnnotationsSbInPackageInfoJava = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::PrematureEof = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::PreviewWithoutSourceOrRelease = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::ProcCantCreateLoader = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::ProcNoService = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::ProcServiceProblem = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::ProcessorpathNoProcessormodulepath = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::ProfileBootclasspathConflict = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::ReceiverParameterNotApplicableConstructorToplevelClass = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::RecordCannotDeclareInstanceFields = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::RecordCantDeclareFieldModifiers = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::RecordComponentAndOldArraySyntax = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::RecordHeaderExpected = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::RecursiveCtorInvocation = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::RepeatedAnnotationTarget = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::RepeatedInterface = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::RepeatedModifier = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::RetOutsideMeth = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::ReturnOutsideSwitchExpression = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::RuleCompletesNormally = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::SealedClassMustHaveSubclasses = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::SealedOrNonSealedLocalClassesNotAllowed = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::ServiceImplementationMustBeSubtypeOfServiceInterface = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::ServiceImplementationProviderReturnMustBeSubtypeOfServiceInterface = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::SignatureDoesntMatchIntf = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::SignatureDoesntMatchSupertype = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::SourcepathModulesourcepathConflict = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::StaticDeclarationNotAllowedInInnerClasses = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::StaticImpOnlyClassesAndInterfaces = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::StaticMethodsCannotBeAnnotatedWithOverride = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::StringConstReq = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::SwitchCaseUnexpectedStatement = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::SwitchExpressionCompletesNormally = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::SwitchExpressionEmpty = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::SwitchExpressionNoResultExpressions = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::SwitchMixingCaseTypes = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::ThisAsIdentifier = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::ThrowsNotAllowedInIntfAnnotation = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::TooManyModules = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::TotalPatternAndDefault = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::TryWithResourcesExprNeedsVar = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::TryWithoutCatchFinallyOrResourceDecls = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::TwoClassLoaders1 = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::TypeVarCantBeDeref = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::TypeVarMayNotBeFollowedByOtherBounds = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::TypeVarMoreThanOnce = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::TypeVarMoreThanOnceInResult = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::UnclosedCharLit = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::UnclosedComment = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::UnclosedStrLit = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::UnclosedTextBlock = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::UnderscoreAsIdentifier = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::UnderscoreAsIdentifierInLambda = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::UnexpectedLambda = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::UnexpectedMref = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::UnnamedPkgNotAllowedNamedModules = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::UnreachableStmt = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::VarargsAndOldArraySyntax = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::VarargsAndReceiver = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::VarargsMustBeLast = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::VariableNotAllowed = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::VoidNotAllowedHere = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::WarningsAndWerror = nullptr;
$JCDiagnostic$Error* CompilerProperties$Errors::WrongReceiver = nullptr;

void CompilerProperties$Errors::init$() {
}

$JCDiagnostic$Error* CompilerProperties$Errors::AbstractCantBeAccessedDirectly($Kinds$KindName* arg0, $Symbol* arg1, $Symbol* arg2) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "abstract.cant.be.accessed.directly"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::AbstractCantBeInstantiated($Symbol* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "abstract.cant.be.instantiated"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::AddExportsWithRelease($Symbol* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "add.exports.with.release"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::AddReadsWithRelease($Symbol* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "add.reads.with.release"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::AlreadyAnnotated($Kinds$KindName* arg0, $Symbol* arg1) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "already.annotated"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::AlreadyDefined($Kinds$KindName* arg0, $Symbol* arg1, $Kinds$KindName* arg2, $Symbol* arg3) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "already.defined"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2),
		$of(arg3)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::AlreadyDefinedInClinit($Kinds$KindName* arg0, $Symbol* arg1, $Kinds$KindName* arg2, $Kinds$KindName* arg3, $Symbol* arg4) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "already.defined.in.clinit"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2),
		$of(arg3),
		$of(arg4)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::AlreadyDefinedSingleImport($Symbol* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "already.defined.single.import"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::AlreadyDefinedStaticSingleImport($Symbol* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "already.defined.static.single.import"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::AlreadyDefinedThisUnit($Symbol* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "already.defined.this.unit"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::AnnotationMissingDefaultValue($Type* arg0, $List* arg1) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "annotation.missing.default.value"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::AnnotationMissingDefaultValue1($Type* arg0, $List* arg1) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "annotation.missing.default.value.1"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::AnnotationNotValidForType($Type* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "annotation.not.valid.for.type"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::AnnotationTypeNotApplicableToType($Type* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "annotation.type.not.applicable.to.type"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::AnonymousDiamondMethodDoesNotOverrideSuperclass($JCDiagnostic* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "anonymous.diamond.method.does.not.override.superclass"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::AnonymousDiamondMethodDoesNotOverrideSuperclass($JCDiagnostic$Fragment* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "anonymous.diamond.method.does.not.override.superclass"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::ArrayAndVarargs($Symbol* arg0, $Symbol* arg1, $Symbol* arg2) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "array.and.varargs"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::ArrayReqButFound($Type* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "array.req.but.found"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::BadFunctionalIntfAnno1($JCDiagnostic* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "bad.functional.intf.anno.1"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::BadFunctionalIntfAnno1($JCDiagnostic$Fragment* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "bad.functional.intf.anno.1"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::BadInitializer($String* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "bad.initializer"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::BadNameForOption($Option* arg0, $String* arg1) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "bad.name.for.option"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::BadValueForOption($String* arg0, $String* arg1) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "bad.value.for.option"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::CallMustBeFirstStmtInCtor($Name* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "call.must.be.first.stmt.in.ctor"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::CallToSuperNotAllowedInEnumCtor($Symbol* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "call.to.super.not.allowed.in.enum.ctor"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::CannotGenerateClass($Symbol* arg0, $JCDiagnostic$Fragment* arg1) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "cannot.generate.class"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::CantAccess($Symbol* arg0, $JCDiagnostic* arg1) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "cant.access"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::CantAccess($Symbol* arg0, $JCDiagnostic$Fragment* arg1) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "cant.access"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::CantApplyDiamond($JCDiagnostic* arg0, $Void* arg1) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "cant.apply.diamond"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::CantApplyDiamond($JCDiagnostic$Fragment* arg0, $Void* arg1) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "cant.apply.diamond"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::CantApplyDiamond1($JCDiagnostic* arg0, $JCDiagnostic* arg1) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "cant.apply.diamond.1"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::CantApplyDiamond1($JCDiagnostic* arg0, $JCDiagnostic$Fragment* arg1) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "cant.apply.diamond.1"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::CantApplyDiamond1($JCDiagnostic$Fragment* arg0, $JCDiagnostic* arg1) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "cant.apply.diamond.1"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::CantApplyDiamond1($JCDiagnostic$Fragment* arg0, $JCDiagnostic$Fragment* arg1) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "cant.apply.diamond.1"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::CantApplyDiamond1($Type* arg0, $JCDiagnostic* arg1) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "cant.apply.diamond.1"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::CantApplyDiamond1($Type* arg0, $JCDiagnostic$Fragment* arg1) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "cant.apply.diamond.1"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::CantApplySymbol($Kinds$Kind* arg0, $Name* arg1, $List* arg2, $List* arg3, $Kinds$Kind* arg4, $Type* arg5, $JCDiagnostic* arg6) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "cant.apply.symbol"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2),
		$of(arg3),
		$of(arg4),
		$of(arg5),
		$of(arg6)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::CantApplySymbol($Kinds$Kind* arg0, $Name* arg1, $List* arg2, $List* arg3, $Kinds$Kind* arg4, $Type* arg5, $JCDiagnostic$Fragment* arg6) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "cant.apply.symbol"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2),
		$of(arg3),
		$of(arg4),
		$of(arg5),
		$of(arg6)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::CantApplySymbol($Kinds$Kind* arg0, $Name* arg1, $List* arg2, $JCDiagnostic* arg3, $Kinds$Kind* arg4, $Type* arg5, $JCDiagnostic* arg6) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "cant.apply.symbol"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2),
		$of(arg3),
		$of(arg4),
		$of(arg5),
		$of(arg6)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::CantApplySymbol($Kinds$Kind* arg0, $Name* arg1, $List* arg2, $JCDiagnostic* arg3, $Kinds$Kind* arg4, $Type* arg5, $JCDiagnostic$Fragment* arg6) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "cant.apply.symbol"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2),
		$of(arg3),
		$of(arg4),
		$of(arg5),
		$of(arg6)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::CantApplySymbol($Kinds$Kind* arg0, $Name* arg1, $List* arg2, $JCDiagnostic$Fragment* arg3, $Kinds$Kind* arg4, $Type* arg5, $JCDiagnostic* arg6) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "cant.apply.symbol"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2),
		$of(arg3),
		$of(arg4),
		$of(arg5),
		$of(arg6)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::CantApplySymbol($Kinds$Kind* arg0, $Name* arg1, $List* arg2, $JCDiagnostic$Fragment* arg3, $Kinds$Kind* arg4, $Type* arg5, $JCDiagnostic$Fragment* arg6) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "cant.apply.symbol"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2),
		$of(arg3),
		$of(arg4),
		$of(arg5),
		$of(arg6)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::CantApplySymbol($Kinds$Kind* arg0, $Name* arg1, $JCDiagnostic* arg2, $List* arg3, $Kinds$Kind* arg4, $Type* arg5, $JCDiagnostic* arg6) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "cant.apply.symbol"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2),
		$of(arg3),
		$of(arg4),
		$of(arg5),
		$of(arg6)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::CantApplySymbol($Kinds$Kind* arg0, $Name* arg1, $JCDiagnostic* arg2, $List* arg3, $Kinds$Kind* arg4, $Type* arg5, $JCDiagnostic$Fragment* arg6) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "cant.apply.symbol"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2),
		$of(arg3),
		$of(arg4),
		$of(arg5),
		$of(arg6)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::CantApplySymbol($Kinds$Kind* arg0, $Name* arg1, $JCDiagnostic* arg2, $JCDiagnostic* arg3, $Kinds$Kind* arg4, $Type* arg5, $JCDiagnostic* arg6) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "cant.apply.symbol"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2),
		$of(arg3),
		$of(arg4),
		$of(arg5),
		$of(arg6)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::CantApplySymbol($Kinds$Kind* arg0, $Name* arg1, $JCDiagnostic* arg2, $JCDiagnostic* arg3, $Kinds$Kind* arg4, $Type* arg5, $JCDiagnostic$Fragment* arg6) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "cant.apply.symbol"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2),
		$of(arg3),
		$of(arg4),
		$of(arg5),
		$of(arg6)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::CantApplySymbol($Kinds$Kind* arg0, $Name* arg1, $JCDiagnostic* arg2, $JCDiagnostic$Fragment* arg3, $Kinds$Kind* arg4, $Type* arg5, $JCDiagnostic* arg6) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "cant.apply.symbol"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2),
		$of(arg3),
		$of(arg4),
		$of(arg5),
		$of(arg6)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::CantApplySymbol($Kinds$Kind* arg0, $Name* arg1, $JCDiagnostic* arg2, $JCDiagnostic$Fragment* arg3, $Kinds$Kind* arg4, $Type* arg5, $JCDiagnostic$Fragment* arg6) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "cant.apply.symbol"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2),
		$of(arg3),
		$of(arg4),
		$of(arg5),
		$of(arg6)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::CantApplySymbol($Kinds$Kind* arg0, $Name* arg1, $JCDiagnostic$Fragment* arg2, $List* arg3, $Kinds$Kind* arg4, $Type* arg5, $JCDiagnostic* arg6) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "cant.apply.symbol"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2),
		$of(arg3),
		$of(arg4),
		$of(arg5),
		$of(arg6)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::CantApplySymbol($Kinds$Kind* arg0, $Name* arg1, $JCDiagnostic$Fragment* arg2, $List* arg3, $Kinds$Kind* arg4, $Type* arg5, $JCDiagnostic$Fragment* arg6) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "cant.apply.symbol"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2),
		$of(arg3),
		$of(arg4),
		$of(arg5),
		$of(arg6)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::CantApplySymbol($Kinds$Kind* arg0, $Name* arg1, $JCDiagnostic$Fragment* arg2, $JCDiagnostic* arg3, $Kinds$Kind* arg4, $Type* arg5, $JCDiagnostic* arg6) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "cant.apply.symbol"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2),
		$of(arg3),
		$of(arg4),
		$of(arg5),
		$of(arg6)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::CantApplySymbol($Kinds$Kind* arg0, $Name* arg1, $JCDiagnostic$Fragment* arg2, $JCDiagnostic* arg3, $Kinds$Kind* arg4, $Type* arg5, $JCDiagnostic$Fragment* arg6) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "cant.apply.symbol"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2),
		$of(arg3),
		$of(arg4),
		$of(arg5),
		$of(arg6)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::CantApplySymbol($Kinds$Kind* arg0, $Name* arg1, $JCDiagnostic$Fragment* arg2, $JCDiagnostic$Fragment* arg3, $Kinds$Kind* arg4, $Type* arg5, $JCDiagnostic* arg6) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "cant.apply.symbol"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2),
		$of(arg3),
		$of(arg4),
		$of(arg5),
		$of(arg6)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::CantApplySymbol($Kinds$Kind* arg0, $Name* arg1, $JCDiagnostic$Fragment* arg2, $JCDiagnostic$Fragment* arg3, $Kinds$Kind* arg4, $Type* arg5, $JCDiagnostic$Fragment* arg6) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "cant.apply.symbol"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2),
		$of(arg3),
		$of(arg4),
		$of(arg5),
		$of(arg6)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::CantApplySymbols($Kinds$Kind* arg0, $Name* arg1, $List* arg2) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "cant.apply.symbols"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::CantAssignValToFinalVar($Symbol* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "cant.assign.val.to.final.var"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::CantDeref($Type* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "cant.deref"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::CantInferLocalVarType($Name* arg0, $JCDiagnostic* arg1) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "cant.infer.local.var.type"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::CantInferLocalVarType($Name* arg0, $JCDiagnostic$Fragment* arg1) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "cant.infer.local.var.type"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::CantInheritDiffArg($Symbol* arg0, $String* arg1, $String* arg2) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "cant.inherit.diff.arg"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::CantInheritFromFinal($Symbol* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "cant.inherit.from.final"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::CantInheritFromSealed($Symbol* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "cant.inherit.from.sealed"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::CantRefBeforeCtorCalled($Symbol* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "cant.ref.before.ctor.called"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::CantRefBeforeCtorCalled($String* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "cant.ref.before.ctor.called"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::CantRefNonEffectivelyFinalVar($Symbol* arg0, $JCDiagnostic* arg1) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "cant.ref.non.effectively.final.var"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::CantRefNonEffectivelyFinalVar($Symbol* arg0, $JCDiagnostic$Fragment* arg1) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "cant.ref.non.effectively.final.var"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::CantResolve($Kinds$KindName* arg0, $Name* arg1, $Void* arg2, $Void* arg3) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "cant.resolve"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2),
		$of(arg3)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::CantResolveArgs($Kinds$KindName* arg0, $Name* arg1, $Void* arg2, $List* arg3) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "cant.resolve.args"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2),
		$of(arg3)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::CantResolveArgsParams($Kinds$KindName* arg0, $Name* arg1, $List* arg2, $List* arg3) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "cant.resolve.args.params"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2),
		$of(arg3)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::CantResolveLocation($Kinds$KindName* arg0, $Name* arg1, $Void* arg2, $Void* arg3, $JCDiagnostic* arg4) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "cant.resolve.location"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2),
		$of(arg3),
		$of(arg4)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::CantResolveLocation($Kinds$KindName* arg0, $Name* arg1, $Void* arg2, $Void* arg3, $JCDiagnostic$Fragment* arg4) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "cant.resolve.location"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2),
		$of(arg3),
		$of(arg4)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::CantResolveLocationArgs($Kinds$KindName* arg0, $Name* arg1, $Void* arg2, $List* arg3, $JCDiagnostic* arg4) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "cant.resolve.location.args"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2),
		$of(arg3),
		$of(arg4)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::CantResolveLocationArgs($Kinds$KindName* arg0, $Name* arg1, $Void* arg2, $List* arg3, $JCDiagnostic$Fragment* arg4) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "cant.resolve.location.args"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2),
		$of(arg3),
		$of(arg4)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::CantResolveLocationArgsParams($Kinds$KindName* arg0, $Name* arg1, $List* arg2, $List* arg3, $JCDiagnostic* arg4) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "cant.resolve.location.args.params"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2),
		$of(arg3),
		$of(arg4)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::CantResolveLocationArgsParams($Kinds$KindName* arg0, $Name* arg1, $List* arg2, $List* arg3, $JCDiagnostic$Fragment* arg4) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "cant.resolve.location.args.params"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2),
		$of(arg3),
		$of(arg4)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::CantTypeAnnotateScoping($List* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "cant.type.annotate.scoping"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::CantTypeAnnotateScoping1($Attribute$Compound* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "cant.type.annotate.scoping.1"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::ClashWithPkgOfSameName($Kinds$KindName* arg0, $Symbol* arg1) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "clash.with.pkg.of.same.name"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::ClassCantWrite($Symbol* arg0, $String* arg1) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "class.cant.write"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::ClassInModuleCantExtendSealedInDiffModule($Symbol* arg0, $Symbol* arg1) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "class.in.module.cant.extend.sealed.in.diff.module"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::ClassInUnnamedModuleCantExtendSealedInDiffPackage($Symbol* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "class.in.unnamed.module.cant.extend.sealed.in.diff.package"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::ClassPublicShouldBeInFile($Kinds$KindName* arg0, $Name* arg1) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "class.public.should.be.in.file"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::ConcreteInheritanceConflict($Symbol* arg0, $Type* arg1, $Symbol* arg2, $Type* arg3, $Type* arg4) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "concrete.inheritance.conflict"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2),
		$of(arg3),
		$of(arg4)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::ConflictingExports($Symbol* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "conflicting.exports"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::ConflictingExportsToModule($Symbol* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "conflicting.exports.to.module"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::ConflictingOpens($Symbol* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "conflicting.opens"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::ConflictingOpensToModule($Symbol* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "conflicting.opens.to.module"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::ConstantLabelNotCompatible($Type* arg0, $Type* arg1) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "constant.label.not.compatible"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::CyclicAnnotationElement($Symbol* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "cyclic.annotation.element"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::CyclicInheritance($Symbol* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "cyclic.inheritance"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::CyclicInheritance($Type* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "cyclic.inheritance"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::CyclicRequires($Symbol* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "cyclic.requires"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::DefaultOverridesObjectMember($Name* arg0, $Kinds$KindName* arg1, $Symbol* arg2) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "default.overrides.object.member"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::DoesNotOverrideAbstract($Symbol* arg0, $Symbol* arg1, $Symbol* arg2) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "does.not.override.abstract"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::DoesntExist($Symbol* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "doesnt.exist"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::DuplicateAnnotationInvalidRepeated($Type* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "duplicate.annotation.invalid.repeated"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::DuplicateAnnotationMemberValue($Name* arg0, $Type* arg1) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "duplicate.annotation.member.value"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::DuplicateAnnotationMissingContainer($Type* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "duplicate.annotation.missing.container"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::DuplicateClass($Name* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "duplicate.class"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::DuplicateModule($Symbol* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "duplicate.module"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::DuplicateModuleOnPath($JCDiagnostic$Fragment* arg0, $Name* arg1) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "duplicate.module.on.path"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::DuplicateProvides($Symbol* arg0, $Symbol* arg1) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "duplicate.provides"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::DuplicateRequires($Symbol* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "duplicate.requires"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::DuplicateUses($Symbol* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "duplicate.uses"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::EnclClassRequired($Symbol* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "encl.class.required"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::ErrorReadingFile($File* arg0, $String* arg1) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "error.reading.file"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::ErrorReadingFile($JavaFileObject* arg0, $String* arg1) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "error.reading.file"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::ErrorReadingFile($Path* arg0, $String* arg1) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "error.reading.file"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::ErrorWritingFile($String* arg0, $String* arg1) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "error.writing.file"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::ExceptAlreadyCaught($Type* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "except.already.caught"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::ExceptNeverThrownInTry($Type* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "except.never.thrown.in.try"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::Expected($Tokens$TokenKind* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "expected"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::ExpectedStr($String* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "expected.str"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::Expected2($Tokens$TokenKind* arg0, $Tokens$TokenKind* arg1) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "expected2"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::Expected3($Tokens$TokenKind* arg0, $Tokens$TokenKind* arg1, $Tokens$TokenKind* arg2) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "expected3"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::Expected4($Tokens$TokenKind* arg0, $Tokens$TokenKind* arg1, $Tokens$TokenKind* arg2, $String* arg3) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "expected4"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2),
		$of(arg3)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::FeatureNotSupportedInSource($JCDiagnostic* arg0, $String* arg1, $String* arg2) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "feature.not.supported.in.source"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::FeatureNotSupportedInSource($JCDiagnostic$Fragment* arg0, $String* arg1, $String* arg2) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "feature.not.supported.in.source"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::FeatureNotSupportedInSourcePlural($JCDiagnostic* arg0, $String* arg1, $String* arg2) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "feature.not.supported.in.source.plural"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::FeatureNotSupportedInSourcePlural($JCDiagnostic$Fragment* arg0, $String* arg1, $String* arg2) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "feature.not.supported.in.source.plural"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::FileNotDirectory($String* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "file.not.directory"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::FileNotFile(Object$* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "file.not.file"_s, $$new($ObjectArray, {arg0}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::FileNotFound($String* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "file.not.found"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::FilePatchedAndMsp($Name* arg0, $Name* arg1) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "file.patched.and.msp"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::FinalParameterMayNotBeAssigned($Symbol* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "final.parameter.may.not.be.assigned"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::FirstStatementMustBeCallToAnotherConstructor($Symbol* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "first.statement.must.be.call.to.another.constructor"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::ForeachNotApplicableToType($Type* arg0, $JCDiagnostic* arg1) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "foreach.not.applicable.to.type"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::ForeachNotApplicableToType($Type* arg0, $JCDiagnostic$Fragment* arg1) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "foreach.not.applicable.to.type"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::IclsCantHaveStaticDecl($Symbol* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "icls.cant.have.static.decl"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::IllegalArgumentForOption($String* arg0, $String* arg1) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "illegal.argument.for.option"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::IllegalChar($String* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "illegal.char"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::IllegalCharForEncoding($String* arg0, $String* arg1) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "illegal.char.for.encoding"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::IllegalCombinationOfModifiers($Set* arg0, $Set* arg1) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "illegal.combination.of.modifiers"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::IllegalDefaultSuperCall($Symbol* arg0, $JCDiagnostic* arg1) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "illegal.default.super.call"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::IllegalDefaultSuperCall($Symbol* arg0, $JCDiagnostic$Fragment* arg1) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "illegal.default.super.call"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::IllegalDefaultSuperCall($Type* arg0, $JCDiagnostic* arg1) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "illegal.default.super.call"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::IllegalDefaultSuperCall($Type* arg0, $JCDiagnostic$Fragment* arg1) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "illegal.default.super.call"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::IllegalInitializerForType($Type* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "illegal.initializer.for.type"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::IllegalQualNotIcls($Symbol* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "illegal.qual.not.icls"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::IllegalRecordComponentName($Symbol* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "illegal.record.component.name"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::IllegalRefToRestrictedType($Name* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "illegal.ref.to.restricted.type"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::IllegalStaticIntfMethCall($Type* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "illegal.static.intf.meth.call"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::ImportRequiresCanonical($Symbol* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "import.requires.canonical"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::IncomparableTypes($Type* arg0, $Type* arg1) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "incomparable.types"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::IncompatibleThrownTypesInMref($List* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "incompatible.thrown.types.in.mref"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::IncorrectConstructorReceiverName($Type* arg0, $Type* arg1) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "incorrect.constructor.receiver.name"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::IncorrectConstructorReceiverType($Type* arg0, $Type* arg1) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "incorrect.constructor.receiver.type"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::IncorrectReceiverName($Type* arg0, $Type* arg1) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "incorrect.receiver.name"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::IncorrectReceiverType($Type* arg0, $Type* arg1) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "incorrect.receiver.type"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::InstanceofPatternNoSubtype($Type* arg0, $Type* arg1) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "instanceof.pattern.no.subtype"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::InstanceofReifiableNotSafe($Type* arg0, $Type* arg1) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "instanceof.reifiable.not.safe"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::IntNumberTooLarge($String* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "int.number.too.large"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::IntfAnnotationCantHaveTypeParams($Symbol* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "intf.annotation.cant.have.type.params"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::IntfAnnotationMemberClash($Symbol* arg0, $Type* arg1) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "intf.annotation.member.clash"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::InvalidAKey($String* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "invalid.A.key"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::InvalidAccessorMethodInRecord($Symbol* arg0, $JCDiagnostic$Fragment* arg1) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "invalid.accessor.method.in.record"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::InvalidCanonicalConstructorInRecord($JCDiagnostic$Fragment* arg0, $Name* arg1, $JCDiagnostic$Fragment* arg2) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "invalid.canonical.constructor.in.record"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::InvalidFlag($String* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "invalid.flag"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::InvalidLambdaParameterDeclaration($JCDiagnostic$Fragment* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "invalid.lambda.parameter.declaration"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::InvalidModuleSpecifier($String* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "invalid.module.specifier"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::InvalidMref($Kinds$KindName* arg0, $JCDiagnostic* arg1) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "invalid.mref"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::InvalidMref($Kinds$KindName* arg0, $JCDiagnostic$Fragment* arg1) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "invalid.mref"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::InvalidPath($String* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "invalid.path"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::InvalidPermitsClause($JCDiagnostic$Fragment* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "invalid.permits.clause"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::InvalidProfile($String* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "invalid.profile"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::InvalidRepeatableAnnotation($Symbol* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "invalid.repeatable.annotation"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::InvalidRepeatableAnnotationElemNondefault($Symbol* arg0, $Symbol* arg1) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "invalid.repeatable.annotation.elem.nondefault"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::InvalidRepeatableAnnotationElemNondefault($Type* arg0, $Symbol* arg1) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "invalid.repeatable.annotation.elem.nondefault"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::InvalidRepeatableAnnotationIncompatibleTarget($Symbol* arg0, $Symbol* arg1) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "invalid.repeatable.annotation.incompatible.target"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::InvalidRepeatableAnnotationInvalidValue($Type* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "invalid.repeatable.annotation.invalid.value"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::InvalidRepeatableAnnotationMultipleValues($Type* arg0, int32_t arg1) {
	$init(CompilerProperties$Errors);
	$useLocalCurrentObjectStackCache();
	return $new($JCDiagnostic$Error, "compiler"_s, "invalid.repeatable.annotation.multiple.values"_s, $$new($ObjectArray, {
		$of(arg0),
		$($of($Integer::valueOf(arg1)))
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::InvalidRepeatableAnnotationNoValue($Symbol* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "invalid.repeatable.annotation.no.value"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::InvalidRepeatableAnnotationNoValue($Type* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "invalid.repeatable.annotation.no.value"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::InvalidRepeatableAnnotationNotApplicable($Type* arg0, $Symbol* arg1) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "invalid.repeatable.annotation.not.applicable"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::InvalidRepeatableAnnotationNotApplicableInContext($Type* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "invalid.repeatable.annotation.not.applicable.in.context"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::InvalidRepeatableAnnotationNotDocumented($Symbol* arg0, $Symbol* arg1) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "invalid.repeatable.annotation.not.documented"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::InvalidRepeatableAnnotationNotInherited($Symbol* arg0, $Symbol* arg1) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "invalid.repeatable.annotation.not.inherited"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::InvalidRepeatableAnnotationRepeatedAndContainerPresent($Symbol* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "invalid.repeatable.annotation.repeated.and.container.present"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::InvalidRepeatableAnnotationRetention($Symbol* arg0, $String* arg1, $Symbol* arg2, $String* arg3) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "invalid.repeatable.annotation.retention"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2),
		$of(arg3)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::InvalidRepeatableAnnotationValueReturn($Symbol* arg0, $Type* arg1, $Type* arg2) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "invalid.repeatable.annotation.value.return"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::InvalidRepeatableAnnotationValueReturn($Type* arg0, $Type* arg1, $Type* arg2) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "invalid.repeatable.annotation.value.return"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::InvalidSource($String* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "invalid.source"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::InvalidSupertypeRecord($Symbol* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "invalid.supertype.record"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::InvalidTarget($String* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "invalid.target"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::IsPreview($Symbol* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "is.preview"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::LabelAlreadyInUse($Name* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "label.already.in.use"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::LimitStringOverflow($String* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "limit.string.overflow"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::LocalClassesCantExtendSealed($JCDiagnostic$Fragment* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "local.classes.cant.extend.sealed"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::LocalVarAccessedFromIclsNeedsFinal($Symbol* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "local.var.accessed.from.icls.needs.final"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::LocnBadModuleInfo($Path* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "locn.bad.module-info"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::LocnCantGetModuleNameForJar($Path* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "locn.cant.get.module.name.for.jar"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::LocnCantReadDirectory($Path* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "locn.cant.read.directory"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::LocnCantReadFile($Path* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "locn.cant.read.file"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::LocnInvalidArgForXpatch($String* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "locn.invalid.arg.for.xpatch"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::LocnModuleInfoNotAllowedOnPatchPath($JavaFileObject* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "locn.module-info.not.allowed.on.patch.path"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::ModNotAllowedHere($Set* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "mod.not.allowed.here"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::ModifierNotAllowedHere($Name* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "modifier.not.allowed.here"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::ModuleNameMismatch($Name* arg0, $Name* arg1) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "module.name.mismatch"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::ModuleNonZeroOpens($Name* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "module.non.zero.opens"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::ModuleNotFound($Symbol* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "module.not.found"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::ModuleNotFoundInModuleSourcePath($String* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "module.not.found.in.module.source.path"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::MultiModuleOutdirCannotBeExplodedModule($Path* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "multi-module.outdir.cannot.be.exploded.module"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::MulticatchParameterMayNotBeAssigned($Symbol* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "multicatch.parameter.may.not.be.assigned"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::MulticatchTypesMustBeDisjoint($Type* arg0, $Type* arg1) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "multicatch.types.must.be.disjoint"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::NameClashSameErasure($Symbol* arg0, $Symbol* arg1) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "name.clash.same.erasure"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::NameClashSameErasureNoHide($Symbol* arg0, $Symbol* arg1, $Symbol* arg2, $Symbol* arg3) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "name.clash.same.erasure.no.hide"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2),
		$of(arg3)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::NameClashSameErasureNoOverride($Name* arg0, $List* arg1, $Symbol* arg2, $Name* arg3, $List* arg4, $Symbol* arg5) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "name.clash.same.erasure.no.override"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2),
		$of(arg3),
		$of(arg4),
		$of(arg5)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::NameClashSameErasureNoOverride1($String* arg0, $Name* arg1, $Name* arg2, $List* arg3, $Symbol* arg4, $Name* arg5, $List* arg6, $Symbol* arg7) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "name.clash.same.erasure.no.override.1"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2),
		$of(arg3),
		$of(arg4),
		$of(arg5),
		$of(arg6),
		$of(arg7)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::NoAnnotationMember($Name* arg0, $Type* arg1) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "no.annotation.member"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::NoEnclInstanceOfTypeInScope($Symbol* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "no.encl.instance.of.type.in.scope"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::NoSuperclass($Type* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "no.superclass"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::NoValueForOption($String* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "no.value.for.option"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::NoZipfsForArchive($Path* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "no.zipfs.for.archive"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::NonStaticCantBeRef($Kinds$Kind* arg0, $Symbol* arg1) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "non-static.cant.be.ref"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::NonSealedWithNoSealedSupertype($Symbol* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "non.sealed.with.no.sealed.supertype"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::NotAnnotationType($Type* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "not.annotation.type"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::NotDefAccessClassIntfCantAccess($Symbol* arg0, $Symbol* arg1) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "not.def.access.class.intf.cant.access"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::NotDefAccessClassIntfCantAccessReason($Symbol* arg0, $Symbol* arg1, $Symbol* arg2, $JCDiagnostic* arg3) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "not.def.access.class.intf.cant.access.reason"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2),
		$of(arg3)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::NotDefAccessClassIntfCantAccessReason($Symbol* arg0, $Symbol* arg1, $Symbol* arg2, $JCDiagnostic$Fragment* arg3) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "not.def.access.class.intf.cant.access.reason"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2),
		$of(arg3)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::NotDefAccessPackageCantAccess($Symbol* arg0, $Symbol* arg1, $JCDiagnostic* arg2) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "not.def.access.package.cant.access"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::NotDefAccessPackageCantAccess($Symbol* arg0, $Symbol* arg1, $JCDiagnostic$Fragment* arg2) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "not.def.access.package.cant.access"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::NotDefPublic($Symbol* arg0, $Symbol* arg1) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "not.def.public"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::NotDefPublicCantAccess($Symbol* arg0, $Symbol* arg1) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "not.def.public.cant.access"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::NotEnclClass($Symbol* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "not.encl.class"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::NotInProfile($Symbol* arg0, Object$* arg1) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "not.in.profile"_s, $$new($ObjectArray, {
		$of(arg0),
		arg1
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::NotLoopLabel($Name* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "not.loop.label"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::NotWithinBounds($Type* arg0, $Type* arg1) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "not.within.bounds"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::NotWithinBounds($Type* arg0, $Symbol* arg1) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "not.within.bounds"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::OperatorCantBeApplied($Name* arg0, $Type* arg1) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "operator.cant.be.applied"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::OperatorCantBeApplied1($Name* arg0, $Type* arg1, $Type* arg2) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "operator.cant.be.applied.1"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::OptionNotAllowedWithTarget($Option* arg0, $Target* arg1) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "option.not.allowed.with.target"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::OptionRemovedSource($String* arg0, $String* arg1) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "option.removed.source"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::OptionRemovedTarget($Target* arg0, $Target* arg1) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "option.removed.target"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::OptionTooMany($String* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "option.too.many"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::Orphaned($Tokens$TokenKind* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "orphaned"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::OverrideIncompatibleRet($JCDiagnostic* arg0, $Type* arg1, $Type* arg2) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "override.incompatible.ret"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::OverrideIncompatibleRet($JCDiagnostic$Fragment* arg0, $Type* arg1, $Type* arg2) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "override.incompatible.ret"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::OverrideMeth($JCDiagnostic* arg0, $Set* arg1) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "override.meth"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::OverrideMeth($JCDiagnostic$Fragment* arg0, $Set* arg1) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "override.meth"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::OverrideMethDoesntThrow($JCDiagnostic* arg0, $Type* arg1) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "override.meth.doesnt.throw"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::OverrideMethDoesntThrow($JCDiagnostic$Fragment* arg0, $Type* arg1) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "override.meth.doesnt.throw"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::OverrideStatic($JCDiagnostic* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "override.static"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::OverrideStatic($JCDiagnostic$Fragment* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "override.static"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::OverrideWeakerAccess($JCDiagnostic* arg0, $Set* arg1) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "override.weaker.access"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::OverrideWeakerAccess($JCDiagnostic* arg0, $String* arg1) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "override.weaker.access"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::OverrideWeakerAccess($JCDiagnostic$Fragment* arg0, $Set* arg1) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "override.weaker.access"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::OverrideWeakerAccess($JCDiagnostic$Fragment* arg0, $String* arg1) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "override.weaker.access"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::PackageClashFromRequires($Symbol* arg0, $Name* arg1, $Symbol* arg2, $Symbol* arg3) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "package.clash.from.requires"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2),
		$of(arg3)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::PackageClashFromRequiresInUnnamed($Name* arg0, $Symbol* arg1, $Symbol* arg2) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "package.clash.from.requires.in.unnamed"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::PackageEmptyOrNotFound($Symbol* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "package.empty.or.not.found"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::PackageInOtherModule($Symbol* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "package.in.other.module"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::PackageNotVisible($Symbol* arg0, $JCDiagnostic* arg1) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "package.not.visible"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::PackageNotVisible($Symbol* arg0, $JCDiagnostic$Fragment* arg1) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "package.not.visible"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::PkgClashesWithClassOfSameName($Symbol* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "pkg.clashes.with.class.of.same.name"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::PluginNotFound($String* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "plugin.not.found"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::PreviewFeatureDisabled($JCDiagnostic* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "preview.feature.disabled"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::PreviewFeatureDisabled($JCDiagnostic$Fragment* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "preview.feature.disabled"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::PreviewFeatureDisabledClassfile($JavaFileObject* arg0, $String* arg1) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "preview.feature.disabled.classfile"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::PreviewFeatureDisabledPlural($JCDiagnostic* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "preview.feature.disabled.plural"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::PreviewFeatureDisabledPlural($JCDiagnostic$Fragment* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "preview.feature.disabled.plural"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::PreviewNotLatest($String* arg0, $Source* arg1) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "preview.not.latest"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::ProbFoundReq($JCDiagnostic* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "prob.found.req"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::ProbFoundReq($JCDiagnostic$Fragment* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "prob.found.req"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::ProcBadConfigFile($String* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "proc.bad.config.file"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::ProcCantAccess($Symbol* arg0, $JCDiagnostic* arg1, $String* arg2) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "proc.cant.access"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::ProcCantAccess($Symbol* arg0, $JCDiagnostic$Fragment* arg1, $String* arg2) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "proc.cant.access"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::ProcCantAccess1($Symbol* arg0, $JCDiagnostic* arg1) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "proc.cant.access.1"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::ProcCantAccess1($Symbol* arg0, $JCDiagnostic$Fragment* arg1) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "proc.cant.access.1"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::ProcCantFindClass($String* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "proc.cant.find.class"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::ProcCantLoadClass($String* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "proc.cant.load.class"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::ProcMessager($String* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "proc.messager"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::ProcNoExplicitAnnotationProcessingRequested($Collection* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "proc.no.explicit.annotation.processing.requested"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::ProcProcessorBadOptionName($String* arg0, $String* arg1) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "proc.processor.bad.option.name"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::ProcProcessorCantInstantiate($String* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "proc.processor.cant.instantiate"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::ProcProcessorNotFound($String* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "proc.processor.not.found"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::ProcProcessorWrongType($String* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "proc.processor.wrong.type"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::QualifiedNewOfStaticClass($Symbol* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "qualified.new.of.static.class"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::RefAmbiguous($Name* arg0, $Kinds$Kind* arg1, $Symbol* arg2, $Symbol* arg3, $Kinds$Kind* arg4, $Symbol* arg5, $Symbol* arg6) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "ref.ambiguous"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2),
		$of(arg3),
		$of(arg4),
		$of(arg5),
		$of(arg6)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::ReleaseBootclasspathConflict($Option* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "release.bootclasspath.conflict"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::RepeatedProvidesForService($Symbol* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "repeated.provides.for.service"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::RepeatedValueForModuleSourcePath($String* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "repeated.value.for.module.source.path"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::RepeatedValueForPatchModule($String* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "repeated.value.for.patch.module"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::ReportAccess($Symbol* arg0, $Set* arg1, $Symbol* arg2) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "report.access"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::ReqArg($String* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "req.arg"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::RestrictedTypeNotAllowed($Name* arg0, $Source* arg1) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "restricted.type.not.allowed"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::RestrictedTypeNotAllowedArray($Name* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "restricted.type.not.allowed.array"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::RestrictedTypeNotAllowedCompound($Name* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "restricted.type.not.allowed.compound"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::RestrictedTypeNotAllowedHere($Name* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "restricted.type.not.allowed.here"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::SameBinaryName($Name* arg0, $Name* arg1) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "same.binary.name"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::ServiceDefinitionIsEnum($Symbol* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "service.definition.is.enum"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::ServiceImplementationDoesntHaveANoArgsConstructor($Symbol* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "service.implementation.doesnt.have.a.no.args.constructor"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::ServiceImplementationIsAbstract($Symbol* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "service.implementation.is.abstract"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::ServiceImplementationIsInner($Symbol* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "service.implementation.is.inner"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::ServiceImplementationNoArgsConstructorNotPublic($Symbol* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "service.implementation.no.args.constructor.not.public"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::ServiceImplementationNotInRightModule($Symbol* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "service.implementation.not.in.right.module"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::SourceCantOverwriteInputFile($JavaFileObject* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "source.cant.overwrite.input.file"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::StackSimError($Symbol* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "stack.sim.error"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::TooManyPatchedModules($Set* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "too.many.patched.modules"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::TryResourceMayNotBeAssigned($Symbol* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "try.resource.may.not.be.assigned"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::TryWithResourcesExprEffectivelyFinalVar($Symbol* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "try.with.resources.expr.effectively.final.var"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::TwoClassLoaders2($URL* arg0, $URL* arg1) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "two.class.loaders.2"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::TypeDoesntTakeParams($Symbol* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "type.doesnt.take.params"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::TypeFoundReq(Object$* arg0, $JCDiagnostic* arg1) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "type.found.req"_s, $$new($ObjectArray, {
		arg0,
		$of(arg1)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::TypeFoundReq(Object$* arg0, $JCDiagnostic$Fragment* arg1) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "type.found.req"_s, $$new($ObjectArray, {
		arg0,
		$of(arg1)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::TypesIncompatible($Type* arg0, $Type* arg1, $JCDiagnostic$Fragment* arg2) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "types.incompatible"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::UndefLabel($Name* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "undef.label"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::UnexpectedType($Set* arg0, $Set* arg1) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "unexpected.type"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::UnmatchedQuote($String* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "unmatched.quote"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::UnreportedExceptionDefaultConstructor($Type* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "unreported.exception.default.constructor"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::UnreportedExceptionImplicitClose($Type* arg0, $Name* arg1) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "unreported.exception.implicit.close"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::UnreportedExceptionNeedToCatchOrThrow($Type* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "unreported.exception.need.to.catch.or.throw"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::UnsupportedEncoding($String* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "unsupported.encoding"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::UnsupportedReleaseVersion($String* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "unsupported.release.version"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::VarMightAlreadyBeAssigned($Symbol* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "var.might.already.be.assigned"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::VarMightBeAssignedInLoop($Symbol* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "var.might.be.assigned.in.loop"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::VarMightNotHaveBeenInitialized($Symbol* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "var.might.not.have.been.initialized"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::VarNotInitializedInDefaultConstructor($Symbol* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "var.not.initialized.in.default.constructor"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::VarargsInvalidTrustmeAnno($Symbol* arg0, $JCDiagnostic* arg1) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "varargs.invalid.trustme.anno"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::VarargsInvalidTrustmeAnno($Symbol* arg0, $JCDiagnostic$Fragment* arg1) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "varargs.invalid.trustme.anno"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Error* CompilerProperties$Errors::WrongNumberTypeArgs($String* arg0) {
	$init(CompilerProperties$Errors);
	return $new($JCDiagnostic$Error, "compiler"_s, "wrong.number.type.args"_s, $$new($ObjectArray, {$of(arg0)}));
}

void clinit$CompilerProperties$Errors($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(CompilerProperties$Errors::AbstractMethCantHaveBody, $new($JCDiagnostic$Error, "compiler"_s, "abstract.meth.cant.have.body"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::AddmodsAllModulePathInvalid, $new($JCDiagnostic$Error, "compiler"_s, "addmods.all.module.path.invalid"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::AnnotationDeclNotAllowedHere, $new($JCDiagnostic$Error, "compiler"_s, "annotation.decl.not.allowed.here"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::AnnotationTypeNotApplicable, $new($JCDiagnostic$Error, "compiler"_s, "annotation.type.not.applicable"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::AnnotationValueMustBeAnnotation, $new($JCDiagnostic$Error, "compiler"_s, "annotation.value.must.be.annotation"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::AnnotationValueMustBeClassLiteral, $new($JCDiagnostic$Error, "compiler"_s, "annotation.value.must.be.class.literal"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::AnnotationValueMustBeNameValue, $new($JCDiagnostic$Error, "compiler"_s, "annotation.value.must.be.name.value"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::AnnotationValueNotAllowableType, $new($JCDiagnostic$Error, "compiler"_s, "annotation.value.not.allowable.type"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::AnonClassImplIntfNoArgs, $new($JCDiagnostic$Error, "compiler"_s, "anon.class.impl.intf.no.args"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::AnonClassImplIntfNoQualForNew, $new($JCDiagnostic$Error, "compiler"_s, "anon.class.impl.intf.no.qual.for.new"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::AnonClassImplIntfNoTypeargs, $new($JCDiagnostic$Error, "compiler"_s, "anon.class.impl.intf.no.typeargs"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::ArrayAndReceiver, $new($JCDiagnostic$Error, "compiler"_s, "array.and.receiver"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::ArrayDimensionMissing, $new($JCDiagnostic$Error, "compiler"_s, "array.dimension.missing"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::AssertAsIdentifier, $new($JCDiagnostic$Error, "compiler"_s, "assert.as.identifier"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::AttributeValueMustBeConstant, $new($JCDiagnostic$Error, "compiler"_s, "attribute.value.must.be.constant"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::BadFunctionalIntfAnno, $new($JCDiagnostic$Error, "compiler"_s, "bad.functional.intf.anno"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::BreakOutsideSwitchExpression, $new($JCDiagnostic$Error, "compiler"_s, "break.outside.switch.expression"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::BreakOutsideSwitchLoop, $new($JCDiagnostic$Error, "compiler"_s, "break.outside.switch.loop"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::CannotCreateArrayWithDiamond, $new($JCDiagnostic$Error, "compiler"_s, "cannot.create.array.with.diamond"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::CannotCreateArrayWithTypeArguments, $new($JCDiagnostic$Error, "compiler"_s, "cannot.create.array.with.type.arguments"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::CantAssignValToThis, $new($JCDiagnostic$Error, "compiler"_s, "cant.assign.val.to.this"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::CantExtendIntfAnnotation, $new($JCDiagnostic$Error, "compiler"_s, "cant.extend.intf.annotation"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::CantInheritFromAnon, $new($JCDiagnostic$Error, "compiler"_s, "cant.inherit.from.anon"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::CantReadFile, $new($JCDiagnostic$Error, "compiler"_s, "cant.read.file"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::CantSelectStaticClassFromParamType, $new($JCDiagnostic$Error, "compiler"_s, "cant.select.static.class.from.param.type"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::CatchWithoutTry, $new($JCDiagnostic$Error, "compiler"_s, "catch.without.try"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::ClassNotAllowed, $new($JCDiagnostic$Error, "compiler"_s, "class.not.allowed"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::ConstExprReq, $new($JCDiagnostic$Error, "compiler"_s, "const.expr.req"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::ContOutsideLoop, $new($JCDiagnostic$Error, "compiler"_s, "cont.outside.loop"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::ContinueOutsideSwitchExpression, $new($JCDiagnostic$Error, "compiler"_s, "continue.outside.switch.expression"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::DcBadEntity, $new($JCDiagnostic$Error, "compiler"_s, "dc.bad.entity"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::DcBadInlineTag, $new($JCDiagnostic$Error, "compiler"_s, "dc.bad.inline.tag"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::DcGtExpected, $new($JCDiagnostic$Error, "compiler"_s, "dc.gt.expected"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::DcIdentifierExpected, $new($JCDiagnostic$Error, "compiler"_s, "dc.identifier.expected"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::DcMalformedHtml, $new($JCDiagnostic$Error, "compiler"_s, "dc.malformed.html"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::DcMissingSemicolon, $new($JCDiagnostic$Error, "compiler"_s, "dc.missing.semicolon"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::DcNoContent, $new($JCDiagnostic$Error, "compiler"_s, "dc.no.content"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::DcNoTagName, $new($JCDiagnostic$Error, "compiler"_s, "dc.no.tag.name"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::DcRefBadParens, $new($JCDiagnostic$Error, "compiler"_s, "dc.ref.bad.parens"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::DcRefSyntaxError, $new($JCDiagnostic$Error, "compiler"_s, "dc.ref.syntax.error"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::DcRefUnexpectedInput, $new($JCDiagnostic$Error, "compiler"_s, "dc.ref.unexpected.input"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::DcUnexpectedContent, $new($JCDiagnostic$Error, "compiler"_s, "dc.unexpected.content"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::DcUnterminatedInlineTag, $new($JCDiagnostic$Error, "compiler"_s, "dc.unterminated.inline.tag"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::DcUnterminatedSignature, $new($JCDiagnostic$Error, "compiler"_s, "dc.unterminated.signature"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::DcUnterminatedString, $new($JCDiagnostic$Error, "compiler"_s, "dc.unterminated.string"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::DefaultAllowedInIntfAnnotationMember, $new($JCDiagnostic$Error, "compiler"_s, "default.allowed.in.intf.annotation.member"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::DotClassExpected, $new($JCDiagnostic$Error, "compiler"_s, "dot.class.expected"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::DuplicateCaseLabel, $new($JCDiagnostic$Error, "compiler"_s, "duplicate.case.label"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::DuplicateDefaultLabel, $new($JCDiagnostic$Error, "compiler"_s, "duplicate.default.label"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::DuplicateTotalPattern, $new($JCDiagnostic$Error, "compiler"_s, "duplicate.total.pattern"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::ElseWithoutIf, $new($JCDiagnostic$Error, "compiler"_s, "else.without.if"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::EmptyAArgument, $new($JCDiagnostic$Error, "compiler"_s, "empty.A.argument"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::EmptyCharLit, $new($JCDiagnostic$Error, "compiler"_s, "empty.char.lit"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::EnumAnnotationMustBeEnumConstant, $new($JCDiagnostic$Error, "compiler"_s, "enum.annotation.must.be.enum.constant"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::EnumAsIdentifier, $new($JCDiagnostic$Error, "compiler"_s, "enum.as.identifier"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::EnumCantBeInstantiated, $new($JCDiagnostic$Error, "compiler"_s, "enum.cant.be.instantiated"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::EnumConstantExpected, $new($JCDiagnostic$Error, "compiler"_s, "enum.constant.expected"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::EnumConstantNotExpected, $new($JCDiagnostic$Error, "compiler"_s, "enum.constant.not.expected"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::EnumLabelMustBeUnqualifiedEnum, $new($JCDiagnostic$Error, "compiler"_s, "enum.label.must.be.unqualified.enum"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::EnumNoFinalize, $new($JCDiagnostic$Error, "compiler"_s, "enum.no.finalize"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::EnumNoSubclassing, $new($JCDiagnostic$Error, "compiler"_s, "enum.no.subclassing"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::EnumTypesNotExtensible, $new($JCDiagnostic$Error, "compiler"_s, "enum.types.not.extensible"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::Error, $new($JCDiagnostic$Error, "compiler"_s, "error"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::ExpectedModule, $new($JCDiagnostic$Error, "compiler"_s, "expected.module"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::ExpectedModuleOrOpen, $new($JCDiagnostic$Error, "compiler"_s, "expected.module.or.open"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::ExpressionNotAllowableAsAnnotationValue, $new($JCDiagnostic$Error, "compiler"_s, "expression.not.allowable.as.annotation.value"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::FileSbOnSourceOrPatchPathForModule, $new($JCDiagnostic$Error, "compiler"_s, "file.sb.on.source.or.patch.path.for.module"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::FinallyWithoutTry, $new($JCDiagnostic$Error, "compiler"_s, "finally.without.try"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::FlowsThroughFromPattern, $new($JCDiagnostic$Error, "compiler"_s, "flows.through.from.pattern"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::FlowsThroughToPattern, $new($JCDiagnostic$Error, "compiler"_s, "flows.through.to.pattern"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::FpNumberTooLarge, $new($JCDiagnostic$Error, "compiler"_s, "fp.number.too.large"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::FpNumberTooSmall, $new($JCDiagnostic$Error, "compiler"_s, "fp.number.too.small"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::GenericArrayCreation, $new($JCDiagnostic$Error, "compiler"_s, "generic.array.creation"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::GenericThrowable, $new($JCDiagnostic$Error, "compiler"_s, "generic.throwable"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::IllegalArrayCreationBothDimensionAndInitialization, $new($JCDiagnostic$Error, "compiler"_s, "illegal.array.creation.both.dimension.and.initialization"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::IllegalDot, $new($JCDiagnostic$Error, "compiler"_s, "illegal.dot"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::IllegalEnumStaticRef, $new($JCDiagnostic$Error, "compiler"_s, "illegal.enum.static.ref"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::IllegalEscChar, $new($JCDiagnostic$Error, "compiler"_s, "illegal.esc.char"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::IllegalForwardRef, $new($JCDiagnostic$Error, "compiler"_s, "illegal.forward.ref"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::IllegalLineEndInCharLit, $new($JCDiagnostic$Error, "compiler"_s, "illegal.line.end.in.char.lit"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::IllegalNonasciiDigit, $new($JCDiagnostic$Error, "compiler"_s, "illegal.nonascii.digit"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::IllegalParenthesizedExpression, $new($JCDiagnostic$Error, "compiler"_s, "illegal.parenthesized.expression"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::IllegalSelfRef, $new($JCDiagnostic$Error, "compiler"_s, "illegal.self.ref"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::IllegalStartOfExpr, $new($JCDiagnostic$Error, "compiler"_s, "illegal.start.of.expr"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::IllegalStartOfStmt, $new($JCDiagnostic$Error, "compiler"_s, "illegal.start.of.stmt"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::IllegalStartOfType, $new($JCDiagnostic$Error, "compiler"_s, "illegal.start.of.type"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::IllegalTextBlockOpen, $new($JCDiagnostic$Error, "compiler"_s, "illegal.text.block.open"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::IllegalUnderscore, $new($JCDiagnostic$Error, "compiler"_s, "illegal.underscore"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::IllegalUnicodeEsc, $new($JCDiagnostic$Error, "compiler"_s, "illegal.unicode.esc"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::ImproperlyFormedTypeInnerRawParam, $new($JCDiagnostic$Error, "compiler"_s, "improperly.formed.type.inner.raw.param"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::ImproperlyFormedTypeParamMissing, $new($JCDiagnostic$Error, "compiler"_s, "improperly.formed.type.param.missing"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::InitializerMustBeAbleToCompleteNormally, $new($JCDiagnostic$Error, "compiler"_s, "initializer.must.be.able.to.complete.normally"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::InitializerNotAllowed, $new($JCDiagnostic$Error, "compiler"_s, "initializer.not.allowed"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::InstanceInitializerNotAllowedInRecords, $new($JCDiagnostic$Error, "compiler"_s, "instance.initializer.not.allowed.in.records"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::IntfAnnotationMembersCantHaveParams, $new($JCDiagnostic$Error, "compiler"_s, "intf.annotation.members.cant.have.params"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::IntfAnnotationMembersCantHaveTypeParams, $new($JCDiagnostic$Error, "compiler"_s, "intf.annotation.members.cant.have.type.params"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::IntfExpectedHere, $new($JCDiagnostic$Error, "compiler"_s, "intf.expected.here"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::IntfMethCantHaveBody, $new($JCDiagnostic$Error, "compiler"_s, "intf.meth.cant.have.body"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::IntfNotAllowedHere, $new($JCDiagnostic$Error, "compiler"_s, "intf.not.allowed.here"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::InvalidAnnotationMemberType, $new($JCDiagnostic$Error, "compiler"_s, "invalid.annotation.member.type"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::InvalidBinaryNumber, $new($JCDiagnostic$Error, "compiler"_s, "invalid.binary.number"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::InvalidHexNumber, $new($JCDiagnostic$Error, "compiler"_s, "invalid.hex.number"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::InvalidMethDeclRetTypeReq, $new($JCDiagnostic$Error, "compiler"_s, "invalid.meth.decl.ret.type.req"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::InvalidModuleDirective, $new($JCDiagnostic$Error, "compiler"_s, "invalid.module.directive"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::InvalidYield, $new($JCDiagnostic$Error, "compiler"_s, "invalid.yield"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::IoException, $new($JCDiagnostic$Error, "compiler"_s, "io.exception"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::LambdaBodyNeitherValueNorVoidCompatible, $new($JCDiagnostic$Error, "compiler"_s, "lambda.body.neither.value.nor.void.compatible"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::LimitCode, $new($JCDiagnostic$Error, "compiler"_s, "limit.code"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::LimitCodeTooLargeForTryStmt, $new($JCDiagnostic$Error, "compiler"_s, "limit.code.too.large.for.try.stmt"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::LimitDimensions, $new($JCDiagnostic$Error, "compiler"_s, "limit.dimensions"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::LimitLocals, $new($JCDiagnostic$Error, "compiler"_s, "limit.locals"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::LimitParameters, $new($JCDiagnostic$Error, "compiler"_s, "limit.parameters"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::LimitPool, $new($JCDiagnostic$Error, "compiler"_s, "limit.pool"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::LimitPoolInClass, $new($JCDiagnostic$Error, "compiler"_s, "limit.pool.in.class"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::LimitStack, $new($JCDiagnostic$Error, "compiler"_s, "limit.stack"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::LimitString, $new($JCDiagnostic$Error, "compiler"_s, "limit.string"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::LocalEnum, $new($JCDiagnostic$Error, "compiler"_s, "local.enum"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::MalformedFpLit, $new($JCDiagnostic$Error, "compiler"_s, "malformed.fp.lit"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::MatchBindingExists, $new($JCDiagnostic$Error, "compiler"_s, "match.binding.exists"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::MethodDoesNotOverrideSuperclass, $new($JCDiagnostic$Error, "compiler"_s, "method.does.not.override.superclass"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::MissingMethBodyOrDeclAbstract, $new($JCDiagnostic$Error, "compiler"_s, "missing.meth.body.or.decl.abstract"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::MissingRetStmt, $new($JCDiagnostic$Error, "compiler"_s, "missing.ret.stmt"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::ModuleDeclSbInModuleInfoJava, $new($JCDiagnostic$Error, "compiler"_s, "module.decl.sb.in.module-info.java"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::ModuleNotFoundOnModuleSourcePath, $new($JCDiagnostic$Error, "compiler"_s, "module.not.found.on.module.source.path"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::ModulesourcepathMustBeSpecifiedWithDashMOption, $new($JCDiagnostic$Error, "compiler"_s, "modulesourcepath.must.be.specified.with.dash.m.option"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::MultipleValuesForModuleSourcePath, $new($JCDiagnostic$Error, "compiler"_s, "multiple.values.for.module.source.path"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::NameReservedForInternalUse, $new($JCDiagnostic$Error, "compiler"_s, "name.reserved.for.internal.use"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::NativeMethCantHaveBody, $new($JCDiagnostic$Error, "compiler"_s, "native.meth.cant.have.body"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::NewNotAllowedInAnnotation, $new($JCDiagnostic$Error, "compiler"_s, "new.not.allowed.in.annotation"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::NoAnnotationsOnDotClass, $new($JCDiagnostic$Error, "compiler"_s, "no.annotations.on.dot.class"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::NoIntfExpectedHere, $new($JCDiagnostic$Error, "compiler"_s, "no.intf.expected.here"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::NoMatchEntry, $new($JCDiagnostic$Error, "compiler"_s, "no.match.entry"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::NoOpensUnlessStrong, $new($JCDiagnostic$Error, "compiler"_s, "no.opens.unless.strong"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::NoOutputDir, $new($JCDiagnostic$Error, "compiler"_s, "no.output.dir"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::NoPkgInModuleInfoJava, $new($JCDiagnostic$Error, "compiler"_s, "no.pkg.in.module-info.java"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::NoSourceFiles, $new($JCDiagnostic$Error, "compiler"_s, "no.source.files"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::NoSourceFilesClasses, $new($JCDiagnostic$Error, "compiler"_s, "no.source.files.classes"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::NoSwitchExpression, $new($JCDiagnostic$Error, "compiler"_s, "no.switch.expression"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::NoSwitchExpressionQualify, $new($JCDiagnostic$Error, "compiler"_s, "no.switch.expression.qualify"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::NonSealedOrSealedExpected, $new($JCDiagnostic$Error, "compiler"_s, "non.sealed.or.sealed.expected"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::NonSealedSealedOrFinalExpected, $new($JCDiagnostic$Error, "compiler"_s, "non.sealed.sealed.or.final.expected"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::NotExhaustive, $new($JCDiagnostic$Error, "compiler"_s, "not.exhaustive"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::NotExhaustiveStatement, $new($JCDiagnostic$Error, "compiler"_s, "not.exhaustive.statement"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::NotInModuleOnModuleSourcePath, $new($JCDiagnostic$Error, "compiler"_s, "not.in.module.on.module.source.path"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::NotStmt, $new($JCDiagnostic$Error, "compiler"_s, "not.stmt"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::OutputDirMustBeSpecifiedWithDashMOption, $new($JCDiagnostic$Error, "compiler"_s, "output.dir.must.be.specified.with.dash.m.option"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::PatternDominated, $new($JCDiagnostic$Error, "compiler"_s, "pattern.dominated"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::PatternExpected, $new($JCDiagnostic$Error, "compiler"_s, "pattern.expected"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::PkgAnnotationsSbInPackageInfoJava, $new($JCDiagnostic$Error, "compiler"_s, "pkg.annotations.sb.in.package-info.java"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::PrematureEof, $new($JCDiagnostic$Error, "compiler"_s, "premature.eof"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::PreviewWithoutSourceOrRelease, $new($JCDiagnostic$Error, "compiler"_s, "preview.without.source.or.release"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::ProcCantCreateLoader, $new($JCDiagnostic$Error, "compiler"_s, "proc.cant.create.loader"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::ProcNoService, $new($JCDiagnostic$Error, "compiler"_s, "proc.no.service"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::ProcServiceProblem, $new($JCDiagnostic$Error, "compiler"_s, "proc.service.problem"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::ProcessorpathNoProcessormodulepath, $new($JCDiagnostic$Error, "compiler"_s, "processorpath.no.processormodulepath"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::ProfileBootclasspathConflict, $new($JCDiagnostic$Error, "compiler"_s, "profile.bootclasspath.conflict"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::ReceiverParameterNotApplicableConstructorToplevelClass, $new($JCDiagnostic$Error, "compiler"_s, "receiver.parameter.not.applicable.constructor.toplevel.class"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::RecordCannotDeclareInstanceFields, $new($JCDiagnostic$Error, "compiler"_s, "record.cannot.declare.instance.fields"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::RecordCantDeclareFieldModifiers, $new($JCDiagnostic$Error, "compiler"_s, "record.cant.declare.field.modifiers"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::RecordComponentAndOldArraySyntax, $new($JCDiagnostic$Error, "compiler"_s, "record.component.and.old.array.syntax"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::RecordHeaderExpected, $new($JCDiagnostic$Error, "compiler"_s, "record.header.expected"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::RecursiveCtorInvocation, $new($JCDiagnostic$Error, "compiler"_s, "recursive.ctor.invocation"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::RepeatedAnnotationTarget, $new($JCDiagnostic$Error, "compiler"_s, "repeated.annotation.target"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::RepeatedInterface, $new($JCDiagnostic$Error, "compiler"_s, "repeated.interface"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::RepeatedModifier, $new($JCDiagnostic$Error, "compiler"_s, "repeated.modifier"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::RetOutsideMeth, $new($JCDiagnostic$Error, "compiler"_s, "ret.outside.meth"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::ReturnOutsideSwitchExpression, $new($JCDiagnostic$Error, "compiler"_s, "return.outside.switch.expression"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::RuleCompletesNormally, $new($JCDiagnostic$Error, "compiler"_s, "rule.completes.normally"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::SealedClassMustHaveSubclasses, $new($JCDiagnostic$Error, "compiler"_s, "sealed.class.must.have.subclasses"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::SealedOrNonSealedLocalClassesNotAllowed, $new($JCDiagnostic$Error, "compiler"_s, "sealed.or.non.sealed.local.classes.not.allowed"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::ServiceImplementationMustBeSubtypeOfServiceInterface, $new($JCDiagnostic$Error, "compiler"_s, "service.implementation.must.be.subtype.of.service.interface"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::ServiceImplementationProviderReturnMustBeSubtypeOfServiceInterface, $new($JCDiagnostic$Error, "compiler"_s, "service.implementation.provider.return.must.be.subtype.of.service.interface"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::SignatureDoesntMatchIntf, $new($JCDiagnostic$Error, "compiler"_s, "signature.doesnt.match.intf"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::SignatureDoesntMatchSupertype, $new($JCDiagnostic$Error, "compiler"_s, "signature.doesnt.match.supertype"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::SourcepathModulesourcepathConflict, $new($JCDiagnostic$Error, "compiler"_s, "sourcepath.modulesourcepath.conflict"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::StaticDeclarationNotAllowedInInnerClasses, $new($JCDiagnostic$Error, "compiler"_s, "static.declaration.not.allowed.in.inner.classes"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::StaticImpOnlyClassesAndInterfaces, $new($JCDiagnostic$Error, "compiler"_s, "static.imp.only.classes.and.interfaces"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::StaticMethodsCannotBeAnnotatedWithOverride, $new($JCDiagnostic$Error, "compiler"_s, "static.methods.cannot.be.annotated.with.override"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::StringConstReq, $new($JCDiagnostic$Error, "compiler"_s, "string.const.req"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::SwitchCaseUnexpectedStatement, $new($JCDiagnostic$Error, "compiler"_s, "switch.case.unexpected.statement"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::SwitchExpressionCompletesNormally, $new($JCDiagnostic$Error, "compiler"_s, "switch.expression.completes.normally"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::SwitchExpressionEmpty, $new($JCDiagnostic$Error, "compiler"_s, "switch.expression.empty"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::SwitchExpressionNoResultExpressions, $new($JCDiagnostic$Error, "compiler"_s, "switch.expression.no.result.expressions"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::SwitchMixingCaseTypes, $new($JCDiagnostic$Error, "compiler"_s, "switch.mixing.case.types"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::ThisAsIdentifier, $new($JCDiagnostic$Error, "compiler"_s, "this.as.identifier"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::ThrowsNotAllowedInIntfAnnotation, $new($JCDiagnostic$Error, "compiler"_s, "throws.not.allowed.in.intf.annotation"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::TooManyModules, $new($JCDiagnostic$Error, "compiler"_s, "too.many.modules"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::TotalPatternAndDefault, $new($JCDiagnostic$Error, "compiler"_s, "total.pattern.and.default"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::TryWithResourcesExprNeedsVar, $new($JCDiagnostic$Error, "compiler"_s, "try.with.resources.expr.needs.var"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::TryWithoutCatchFinallyOrResourceDecls, $new($JCDiagnostic$Error, "compiler"_s, "try.without.catch.finally.or.resource.decls"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::TwoClassLoaders1, $new($JCDiagnostic$Error, "compiler"_s, "two.class.loaders.1"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::TypeVarCantBeDeref, $new($JCDiagnostic$Error, "compiler"_s, "type.var.cant.be.deref"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::TypeVarMayNotBeFollowedByOtherBounds, $new($JCDiagnostic$Error, "compiler"_s, "type.var.may.not.be.followed.by.other.bounds"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::TypeVarMoreThanOnce, $new($JCDiagnostic$Error, "compiler"_s, "type.var.more.than.once"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::TypeVarMoreThanOnceInResult, $new($JCDiagnostic$Error, "compiler"_s, "type.var.more.than.once.in.result"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::UnclosedCharLit, $new($JCDiagnostic$Error, "compiler"_s, "unclosed.char.lit"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::UnclosedComment, $new($JCDiagnostic$Error, "compiler"_s, "unclosed.comment"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::UnclosedStrLit, $new($JCDiagnostic$Error, "compiler"_s, "unclosed.str.lit"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::UnclosedTextBlock, $new($JCDiagnostic$Error, "compiler"_s, "unclosed.text.block"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::UnderscoreAsIdentifier, $new($JCDiagnostic$Error, "compiler"_s, "underscore.as.identifier"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::UnderscoreAsIdentifierInLambda, $new($JCDiagnostic$Error, "compiler"_s, "underscore.as.identifier.in.lambda"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::UnexpectedLambda, $new($JCDiagnostic$Error, "compiler"_s, "unexpected.lambda"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::UnexpectedMref, $new($JCDiagnostic$Error, "compiler"_s, "unexpected.mref"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::UnnamedPkgNotAllowedNamedModules, $new($JCDiagnostic$Error, "compiler"_s, "unnamed.pkg.not.allowed.named.modules"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::UnreachableStmt, $new($JCDiagnostic$Error, "compiler"_s, "unreachable.stmt"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::VarargsAndOldArraySyntax, $new($JCDiagnostic$Error, "compiler"_s, "varargs.and.old.array.syntax"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::VarargsAndReceiver, $new($JCDiagnostic$Error, "compiler"_s, "varargs.and.receiver"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::VarargsMustBeLast, $new($JCDiagnostic$Error, "compiler"_s, "varargs.must.be.last"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::VariableNotAllowed, $new($JCDiagnostic$Error, "compiler"_s, "variable.not.allowed"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::VoidNotAllowedHere, $new($JCDiagnostic$Error, "compiler"_s, "void.not.allowed.here"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::WarningsAndWerror, $new($JCDiagnostic$Error, "compiler"_s, "warnings.and.werror"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Errors::WrongReceiver, $new($JCDiagnostic$Error, "compiler"_s, "wrong.receiver"_s, $$new($ObjectArray, 0)));
}

CompilerProperties$Errors::CompilerProperties$Errors() {
}

$Class* CompilerProperties$Errors::load$($String* name, bool initialize) {
	$loadClass(CompilerProperties$Errors, name, initialize, &_CompilerProperties$Errors_ClassInfo_, clinit$CompilerProperties$Errors, allocate$CompilerProperties$Errors);
	return class$;
}

$Class* CompilerProperties$Errors::class$ = nullptr;

				} // resources
			} // javac
		} // tools
	} // sun
} // com