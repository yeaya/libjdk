#include <com/sun/org/apache/bcel/internal/util/BCELifier.h>
#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/Repository.h>
#include <com/sun/org/apache/bcel/internal/classfile/ClassParser.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantPool.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantValue.h>
#include <com/sun/org/apache/bcel/internal/classfile/EmptyVisitor.h>
#include <com/sun/org/apache/bcel/internal/classfile/Field.h>
#include <com/sun/org/apache/bcel/internal/classfile/JavaClass.h>
#include <com/sun/org/apache/bcel/internal/classfile/Method.h>
#include <com/sun/org/apache/bcel/internal/classfile/Utility.h>
#include <com/sun/org/apache/bcel/internal/classfile/Visitor.h>
#include <com/sun/org/apache/bcel/internal/generic/ArrayType.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/MethodGen.h>
#include <com/sun/org/apache/bcel/internal/generic/Type.h>
#include <com/sun/org/apache/bcel/internal/util/BCELFactory.h>
#include <com/sun/org/apache/bcel/internal/util/BCELifier$FLAGS.h>
#include <java/io/OutputStream.h>
#include <java/io/PrintWriter.h>
#include <java/lang/Package.h>
#include <java/util/Locale.h>
#include <jcpp.h>

#undef ACCESS_NAMES_LENGTH
#undef ACC_SYNCHRONIZED
#undef ACC_TRANSIENT
#undef ACC_VOLATILE
#undef BASE_PACKAGE
#undef CLASS
#undef CONSTANT_PREFIX
#undef ENGLISH
#undef MAX_ACC_FLAG_I
#undef METHOD
#undef T_VOID
#undef UNKNOWN

using $FieldArray = $Array<::com::sun::org::apache::bcel::internal::classfile::Field>;
using $MethodArray = $Array<::com::sun::org::apache::bcel::internal::classfile::Method>;
using $TypeArray = $Array<::com::sun::org::apache::bcel::internal::generic::Type>;
using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $Repository = ::com::sun::org::apache::bcel::internal::Repository;
using $ClassParser = ::com::sun::org::apache::bcel::internal::classfile::ClassParser;
using $ConstantValue = ::com::sun::org::apache::bcel::internal::classfile::ConstantValue;
using $EmptyVisitor = ::com::sun::org::apache::bcel::internal::classfile::EmptyVisitor;
using $Field = ::com::sun::org::apache::bcel::internal::classfile::Field;
using $JavaClass = ::com::sun::org::apache::bcel::internal::classfile::JavaClass;
using $Method = ::com::sun::org::apache::bcel::internal::classfile::Method;
using $Utility = ::com::sun::org::apache::bcel::internal::classfile::Utility;
using $ArrayType = ::com::sun::org::apache::bcel::internal::generic::ArrayType;
using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $MethodGen = ::com::sun::org::apache::bcel::internal::generic::MethodGen;
using $Type = ::com::sun::org::apache::bcel::internal::generic::Type;
using $BCELFactory = ::com::sun::org::apache::bcel::internal::util::BCELFactory;
using $BCELifier$FLAGS = ::com::sun::org::apache::bcel::internal::util::BCELifier$FLAGS;
using $OutputStream = ::java::io::OutputStream;
using $PrintWriter = ::java::io::PrintWriter;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace util {

$String* BCELifier::BASE_PACKAGE = nullptr;
$String* BCELifier::CONSTANT_PREFIX = nullptr;

void BCELifier::init$($JavaClass* clazz, $OutputStream* out) {
	$EmptyVisitor::init$();
	$set(this, _clazz, clazz);
	$set(this, _out, $new($PrintWriter, out));
	$set(this, _cp, $new($ConstantPoolGen, $($nc(this->_clazz)->getConstantPool())));
}

void BCELifier::start() {
	visitJavaClass(this->_clazz);
	this->_out->flush();
}

void BCELifier::visitJavaClass($JavaClass* clazz) {
	$useLocalObjectStack();
	$var($String, class_name, $nc(clazz)->getClassName());
	$var($String, super_name, clazz->getSuperclassName());
	$var($String, package_name, clazz->getPackageName());
	$var($String, inter, $Utility::printArray($(clazz->getInterfaceNames()), false, true));
	if (!""_s->equals(package_name)) {
		$assign(class_name, $nc(class_name)->substring($nc(package_name)->length() + 1));
		this->_out->println($$str({"package "_s, package_name, ";"_s}));
		this->_out->println();
	}
	this->_out->println($$str({"import "_s, BCELifier::BASE_PACKAGE, ".generic.*;"_s}));
	this->_out->println($$str({"import "_s, BCELifier::BASE_PACKAGE, ".classfile.*;"_s}));
	this->_out->println($$str({"import "_s, BCELifier::BASE_PACKAGE, ".*;"_s}));
	this->_out->println("import java.io.*;"_s);
	this->_out->println();
	this->_out->println($$str({"public class "_s, class_name, "Creator {"_s}));
	this->_out->println("  private InstructionFactory _factory;"_s);
	this->_out->println("  private ConstantPoolGen    _cp;"_s);
	this->_out->println("  private ClassGen           _cg;"_s);
	this->_out->println();
	this->_out->println($$str({"  public "_s, class_name, "Creator() {"_s}));
	$var($StringBuilder, var$0, $new($StringBuilder));
	var$0->append("    _cg = new ClassGen(\""_s);
	var$0->append((""_s->equals(package_name)) ? class_name : $$str({package_name, "."_s, class_name}));
	var$0->append("\", \""_s);
	var$0->append(super_name);
	var$0->append("\", \""_s);
	var$0->append($(clazz->getSourceFileName()));
	var$0->append("\", "_s);
	$init($BCELifier$FLAGS);
	var$0->append($(printFlags(clazz->getAccessFlags(), $BCELifier$FLAGS::CLASS)));
	var$0->append(", new String[] { "_s);
	var$0->append(inter);
	var$0->append(" });"_s);
	this->_out->println($$str(var$0));
	this->_out->println($$str({"    _cg.setMajor("_s, $$str(clazz->getMajor()), ");"_s}));
	this->_out->println($$str({"    _cg.setMinor("_s, $$str(clazz->getMinor()), ");"_s}));
	this->_out->println();
	this->_out->println("    _cp = _cg.getConstantPool();"_s);
	this->_out->println("    _factory = new InstructionFactory(_cg, _cp);"_s);
	this->_out->println("  }"_s);
	this->_out->println();
	printCreate();
	$var($FieldArray, fields, clazz->getFields());
	if ($nc(fields)->length > 0) {
		this->_out->println("  private void createFields() {"_s);
		this->_out->println("    FieldGen field;"_s);
		{
			$var($FieldArray, arr$, fields);
			for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
				$var($Field, field, arr$->get(i$));
				{
					$nc(field)->accept(this);
				}
			}
		}
		this->_out->println("  }"_s);
		this->_out->println();
	}
	$var($MethodArray, methods, clazz->getMethods());
	for (int32_t i = 0; i < $nc(methods)->length; ++i) {
		this->_out->println($$str({"  private void createMethod_"_s, $$str(i), "() {"_s}));
		$nc(methods->get(i))->accept(this);
		this->_out->println("  }"_s);
		this->_out->println();
	}
	printMain();
	this->_out->println("}"_s);
}

void BCELifier::printCreate() {
	$useLocalObjectStack();
	this->_out->println("  public void create(OutputStream out) throws IOException {"_s);
	$var($FieldArray, fields, $nc(this->_clazz)->getFields());
	if ($nc(fields)->length > 0) {
		this->_out->println("    createFields();"_s);
	}
	$var($MethodArray, methods, this->_clazz->getMethods());
	for (int32_t i = 0; i < $nc(methods)->length; ++i) {
		this->_out->println($$str({"    createMethod_"_s, $$str(i), "();"_s}));
	}
	this->_out->println("    _cg.getJavaClass().dump(out);"_s);
	this->_out->println("  }"_s);
	this->_out->println();
}

void BCELifier::printMain() {
	$useLocalObjectStack();
	$var($String, class_name, $nc(this->_clazz)->getClassName());
	this->_out->println("  public static void main(String[] args) throws Exception {"_s);
	this->_out->println($$str({"    "_s, class_name, "Creator creator = new "_s, class_name, "Creator();"_s}));
	this->_out->println($$str({"    creator.create(new FileOutputStream(\""_s, class_name, ".class\"));"_s}));
	this->_out->println("  }"_s);
}

void BCELifier::visitField($Field* field) {
	$useLocalObjectStack();
	this->_out->println();
	$var($StringBuilder, var$0, $new($StringBuilder));
	var$0->append("    field = new FieldGen("_s);
	var$0->append($(printFlags($nc(field)->getAccessFlags())));
	var$0->append(", "_s);
	var$0->append($(printType($(field->getSignature()))));
	var$0->append(", \""_s);
	var$0->append($(field->getName()));
	var$0->append("\", _cp);"_s);
	this->_out->println($$str(var$0));
	$var($ConstantValue, cv, $nc(field)->getConstantValue());
	if (cv != nullptr) {
		$var($String, value, cv->toString());
		this->_out->println($$str({"    field.setInitValue("_s, value, ")"_s}));
	}
	this->_out->println("    _cg.addField(field.getField());"_s);
}

void BCELifier::visitMethod($Method* method) {
	$useLocalObjectStack();
	$var($MethodGen, mg, $new($MethodGen, method, $($nc(this->_clazz)->getClassName()), this->_cp));
	this->_out->println("    InstructionList il = new InstructionList();"_s);
	$var($StringBuilder, var$0, $new($StringBuilder));
	var$0->append("    MethodGen method = new MethodGen("_s);
	$init($BCELifier$FLAGS);
	var$0->append($(printFlags($nc(method)->getAccessFlags(), $BCELifier$FLAGS::METHOD)));
	var$0->append(", "_s);
	var$0->append($(printType($(mg->getReturnType()))));
	var$0->append(", "_s);
	var$0->append($(printArgumentTypes($(mg->getArgumentTypes()))));
	var$0->append(", new String[] { "_s);
	var$0->append($($Utility::printArray($(mg->getArgumentNames()), false, true)));
	var$0->append(" }, \""_s);
	var$0->append($(method->getName()));
	var$0->append("\", \""_s);
	var$0->append($(this->_clazz->getClassName()));
	var$0->append("\", il, _cp);"_s);
	this->_out->println($$str(var$0));
	this->_out->println();
	$var($BCELFactory, factory, $new($BCELFactory, mg, this->_out));
	factory->start();
	this->_out->println("    method.setMaxStack();"_s);
	this->_out->println("    method.setMaxLocals();"_s);
	this->_out->println("    _cg.addMethod(method.getMethod());"_s);
	this->_out->println("    il.dispose();"_s);
}

$String* BCELifier::printFlags(int32_t flags) {
	$init(BCELifier);
	$init($BCELifier$FLAGS);
	return printFlags(flags, $BCELifier$FLAGS::UNKNOWN);
}

$String* BCELifier::printFlags(int32_t flags, $BCELifier$FLAGS* location) {
	$init(BCELifier);
	$useLocalObjectStack();
	if (flags == 0) {
		return "0"_s;
	}
	$var($StringBuilder, buf, $new($StringBuilder));
	for (int32_t i = 0, pow = 1; pow <= $Const::MAX_ACC_FLAG_I; ++i) {
		if ((flags & pow) != 0) {
			$init($BCELifier$FLAGS);
			if ((pow == $Const::ACC_SYNCHRONIZED) && (location == $BCELifier$FLAGS::CLASS)) {
				buf->append($$str({BCELifier::CONSTANT_PREFIX, "ACC_SUPER | "_s}));
			} else if ((pow == $Const::ACC_VOLATILE) && (location == $BCELifier$FLAGS::METHOD)) {
				buf->append($$str({BCELifier::CONSTANT_PREFIX, "ACC_BRIDGE | "_s}));
			} else if ((pow == $Const::ACC_TRANSIENT) && (location == $BCELifier$FLAGS::METHOD)) {
				buf->append($$str({BCELifier::CONSTANT_PREFIX, "ACC_VARARGS | "_s}));
			} else {
				$init($Const);
				if (i < $Const::ACCESS_NAMES_LENGTH) {
					$init($Locale);
					buf->append($$str({BCELifier::CONSTANT_PREFIX, "ACC_"_s}))->append($($$nc($Const::getAccessName(i))->toUpperCase($Locale::ENGLISH)))->append(" | "_s);
				} else {
					buf->append($($String::format($$str({BCELifier::CONSTANT_PREFIX, "ACC_BIT %x | "_s}), $$new($ObjectArray, {$($Integer::valueOf(pow))}))));
				}
			}
		}
		pow <<= 1;
	}
	$var($String, str, buf->toString());
	return str->substring(0, str->length() - 3);
}

$String* BCELifier::printArgumentTypes($TypeArray* arg_types) {
	$init(BCELifier);
	$useLocalObjectStack();
	if ($nc(arg_types)->length == 0) {
		return "Type.NO_ARGS"_s;
	}
	$var($StringBuilder, args, $new($StringBuilder));
	for (int32_t i = 0; i < arg_types->length; ++i) {
		args->append($(printType(arg_types->get(i))));
		if (i < arg_types->length - 1) {
			args->append(", "_s);
		}
	}
	return $str({"new Type[] { "_s, $(args->toString()), " }"_s});
}

$String* BCELifier::printType($Type* type) {
	$init(BCELifier);
	return printType($($nc(type)->getSignature()));
}

$String* BCELifier::printType($String* signature) {
	$init(BCELifier);
	$useLocalObjectStack();
	$var($Type, type, $Type::getType(signature));
	int8_t t = $nc(type)->getType();
	if (t <= $Const::T_VOID) {
		$init($Locale);
		return $str({"Type."_s, $($$nc($Const::getTypeName(t))->toUpperCase($Locale::ENGLISH))});
	} else if ($$nc(type->toString())->equals("java.lang.String"_s)) {
		return "Type.STRING"_s;
	} else if ($$nc(type->toString())->equals("java.lang.Object"_s)) {
		return "Type.OBJECT"_s;
	} else if ($$nc(type->toString())->equals("java.lang.StringBuffer"_s)) {
		return "Type.STRINGBUFFER"_s;
	} else if ($instanceOf($ArrayType, type)) {
		$var($ArrayType, at, $cast($ArrayType, type));
		$var($StringBuilder, var$0, $new($StringBuilder));
		var$0->append("new ArrayType("_s);
		var$0->append($(printType($(at->getBasicType()))));
		var$0->append(", "_s);
		var$0->append(at->getDimensions());
		var$0->append(")"_s);
		return $str(var$0);
	} else {
		return $str({"new ObjectType(\""_s, $($Utility::signatureToString(signature, false)), "\")"_s});
	}
}

void BCELifier::main($StringArray* argv) {
	$init(BCELifier);
	$useLocalObjectStack();
	if ($nc(argv)->length != 1) {
		$nc($System::out)->println("Usage: BCELifier classname"_s);
		$System::out->println("\tThe class must exist on the classpath"_s);
		return;
	}
	$var($JavaClass, java_class, getJavaClass(argv->get(0)));
	$var(BCELifier, bcelifier, $new(BCELifier, java_class, $System::out));
	bcelifier->start();
}

$JavaClass* BCELifier::getJavaClass($String* name) {
	$init(BCELifier);
	$useLocalObjectStack();
	$var($JavaClass, java_class, nullptr);
	if (($assign(java_class, $Repository::lookupClass(name))) == nullptr) {
		$assign(java_class, $$new($ClassParser, name)->parse());
	}
	return java_class;
}

void BCELifier::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$load($Const);
	$assignStatic(BCELifier::BASE_PACKAGE, $$nc($Const::class$->getPackage())->getName());
	$assignStatic(BCELifier::CONSTANT_PREFIX, $str({$($Const::class$->getSimpleName()), "."_s}));
}

BCELifier::BCELifier() {
}

$Class* BCELifier::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"BASE_PACKAGE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BCELifier, BASE_PACKAGE)},
		{"CONSTANT_PREFIX", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BCELifier, CONSTANT_PREFIX)},
		{"_clazz", "Lcom/sun/org/apache/bcel/internal/classfile/JavaClass;", nullptr, $PRIVATE | $FINAL, $field(BCELifier, _clazz)},
		{"_out", "Ljava/io/PrintWriter;", nullptr, $PRIVATE | $FINAL, $field(BCELifier, _out)},
		{"_cp", "Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;", nullptr, $PRIVATE | $FINAL, $field(BCELifier, _cp)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/org/apache/bcel/internal/classfile/JavaClass;Ljava/io/OutputStream;)V", nullptr, $PUBLIC, $method(BCELifier, init$, void, $JavaClass*, $OutputStream*)},
		{"getJavaClass", "(Ljava/lang/String;)Lcom/sun/org/apache/bcel/internal/classfile/JavaClass;", nullptr, $STATIC, $staticMethod(BCELifier, getJavaClass, $JavaClass*, $String*), "java.lang.ClassNotFoundException,java.io.IOException"},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(BCELifier, main, void, $StringArray*), "java.lang.Exception"},
		{"printArgumentTypes", "([Lcom/sun/org/apache/bcel/internal/generic/Type;)Ljava/lang/String;", nullptr, $STATIC, $staticMethod(BCELifier, printArgumentTypes, $String*, $TypeArray*)},
		{"printCreate", "()V", nullptr, $PRIVATE, $method(BCELifier, printCreate, void)},
		{"printFlags", "(I)Ljava/lang/String;", nullptr, $STATIC, $staticMethod(BCELifier, printFlags, $String*, int32_t)},
		{"printFlags", "(ILcom/sun/org/apache/bcel/internal/util/BCELifier$FLAGS;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(BCELifier, printFlags, $String*, int32_t, $BCELifier$FLAGS*)},
		{"printMain", "()V", nullptr, $PRIVATE, $method(BCELifier, printMain, void)},
		{"printType", "(Lcom/sun/org/apache/bcel/internal/generic/Type;)Ljava/lang/String;", nullptr, $STATIC, $staticMethod(BCELifier, printType, $String*, $Type*)},
		{"printType", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $STATIC, $staticMethod(BCELifier, printType, $String*, $String*)},
		{"start", "()V", nullptr, $PUBLIC, $virtualMethod(BCELifier, start, void)},
		{"visitField", "(Lcom/sun/org/apache/bcel/internal/classfile/Field;)V", nullptr, $PUBLIC, $virtualMethod(BCELifier, visitField, void, $Field*)},
		{"visitJavaClass", "(Lcom/sun/org/apache/bcel/internal/classfile/JavaClass;)V", nullptr, $PUBLIC, $virtualMethod(BCELifier, visitJavaClass, void, $JavaClass*)},
		{"visitMethod", "(Lcom/sun/org/apache/bcel/internal/classfile/Method;)V", nullptr, $PUBLIC, $virtualMethod(BCELifier, visitMethod, void, $Method*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.bcel.internal.util.BCELifier$FLAGS", "com.sun.org.apache.bcel.internal.util.BCELifier", "FLAGS", $PUBLIC | $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.bcel.internal.util.BCELifier",
		"com.sun.org.apache.bcel.internal.classfile.EmptyVisitor",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"com.sun.org.apache.bcel.internal.util.BCELifier$FLAGS"
	};
	$loadClass(BCELifier, name, initialize, &classInfo$$, BCELifier::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(BCELifier);
	});
	return class$;
}

$Class* BCELifier::class$ = nullptr;

						} // util
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com