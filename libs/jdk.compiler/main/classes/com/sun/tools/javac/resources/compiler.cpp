#include <com/sun/tools/javac/resources/compiler.h>
#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace resources {

void compiler::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* compiler::getContents() {
	$useLocalObjectStack();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			"compiler.err.abstract.cant.be.accessed.directly"_s,
			"abstract {0} {1} in {2} cannot be accessed directly"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.abstract.cant.be.instantiated"_s,
			"{0} is abstract; cannot be instantiated"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.abstract.meth.cant.have.body"_s,
			"abstract methods cannot have a body"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.add.exports.with.release"_s,
			"exporting a package from system module {0} is not allowed with --release"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.add.reads.with.release"_s,
			"adding read edges for system module {0} is not allowed with --release"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.addmods.all.module.path.invalid"_s,
			"--add-modules ALL-MODULE-PATH can only be used when compiling the unnamed module or when compiling in the context of an automatic module"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.already.annotated"_s,
			"{0} {1} has already been annotated"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.already.defined"_s,
			"{0} {1} is already defined in {2} {3}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.already.defined.in.clinit"_s,
			"{0} {1} is already defined in {2} of {3} {4}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.already.defined.single.import"_s,
			"a type with the same simple name is already defined by the single-type-import of {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.already.defined.static.single.import"_s,
			"a type with the same simple name is already defined by the static single-type-import of {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.already.defined.this.unit"_s,
			"{0} is already defined in this compilation unit"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.annotation.decl.not.allowed.here"_s,
			"annotation type declaration not allowed here"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.annotation.missing.default.value"_s,
			"annotation @{0} is missing a default value for the element \'\'{1}\'\'"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.annotation.missing.default.value.1"_s,
			"annotation @{0} is missing default values for elements {1}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.annotation.not.valid.for.type"_s,
			"annotation not valid for an element of type {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.annotation.type.not.applicable"_s,
			"annotation type not applicable to this kind of declaration"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.annotation.type.not.applicable.to.type"_s,
			"annotation @{0} not applicable in this type context"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.annotation.value.must.be.annotation"_s,
			"annotation value must be an annotation"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.annotation.value.must.be.class.literal"_s,
			"annotation value must be a class literal"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.annotation.value.must.be.name.value"_s,
			"annotation values must be of the form \'\'name=value\'\'"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.annotation.value.not.allowable.type"_s,
			"annotation value not of an allowable type"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.anon.class.impl.intf.no.args"_s,
			"anonymous class implements interface; cannot have arguments"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.anon.class.impl.intf.no.qual.for.new"_s,
			"anonymous class implements interface; cannot have qualifier for new"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.anon.class.impl.intf.no.typeargs"_s,
			"anonymous class implements interface; cannot have type arguments"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.anonymous.diamond.method.does.not.override.superclass"_s,
			"method does not override or implement a method from a supertype\n{0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.array.and.receiver"_s,
			"legacy array notation not allowed on receiver parameter"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.array.and.varargs"_s,
			"cannot declare both {0} and {1} in {2}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.array.dimension.missing"_s,
			"array dimension missing"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.array.req.but.found"_s,
			"array required, but {0} found"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.assert.as.identifier"_s,
			"as of release 1.4, \'\'assert\'\' is a keyword, and may not be used as an identifier"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.attribute.value.must.be.constant"_s,
			"element value must be a constant expression"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.bad.functional.intf.anno"_s,
			"Unexpected @FunctionalInterface annotation"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.bad.functional.intf.anno.1"_s,
			"Unexpected @FunctionalInterface annotation\n{0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.bad.initializer"_s,
			"bad initializer for {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.bad.name.for.option"_s,
			"bad name in value for {0} option: \'\'{1}\'\'"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.bad.value.for.option"_s,
			"bad value for {0} option: \'\'{1}\'\'"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.break.outside.switch.expression"_s,
			"attempt to break out of a switch expression"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.break.outside.switch.loop"_s,
			"break outside switch or loop"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.call.must.be.first.stmt.in.ctor"_s,
			"call to {0} must be first statement in constructor"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.call.to.super.not.allowed.in.enum.ctor"_s,
			"call to super not allowed in enum constructor"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.cannot.create.array.with.diamond"_s,
			"cannot create array with \'\'<>\'\'"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.cannot.create.array.with.type.arguments"_s,
			"cannot create array with type arguments"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.cannot.generate.class"_s,
			"error while generating class {0}\n({1})"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.cant.access"_s,
			"cannot access {0}\n{1}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.cant.apply.diamond"_s,
			"cannot infer type arguments for {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.cant.apply.diamond.1"_s,
			"cannot infer type arguments for {0}\nreason: {1}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.cant.apply.symbol"_s,
			"{0} {1} in {4} {5} cannot be applied to given types;\nrequired: {2}\nfound:    {3}\nreason: {6}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.cant.apply.symbols"_s,
			"no suitable {0} found for {1}({2})"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.cant.assign.val.to.final.var"_s,
			"cannot assign a value to final variable {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.cant.assign.val.to.this"_s,
			"cannot assign to \'\'this\'\'"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.cant.deref"_s,
			"{0} cannot be dereferenced"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.cant.extend.intf.annotation"_s,
			"\'\'extends\'\' not allowed for @interfaces"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.cant.infer.local.var.type"_s,
			"cannot infer type for local variable {0}\n({1})"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.cant.inherit.diff.arg"_s,
			"{0} cannot be inherited with different arguments: <{1}> and <{2}>"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.cant.inherit.from.anon"_s,
			"cannot inherit from anonymous class"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.cant.inherit.from.final"_s,
			"cannot inherit from final {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.cant.inherit.from.sealed"_s,
			"class is not allowed to extend sealed class: {0} (as it is not listed in its \'permits\' clause)"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.cant.read.file"_s,
			"cannot read: {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.cant.ref.before.ctor.called"_s,
			"cannot reference {0} before supertype constructor has been called"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.cant.ref.non.effectively.final.var"_s,
			"local variables referenced from {1} must be final or effectively final"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.cant.resolve"_s,
			"cannot find symbol\nsymbol: {0} {1}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.cant.resolve.args"_s,
			"cannot find symbol\nsymbol: {0} {1}({3})"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.cant.resolve.args.params"_s,
			"cannot find symbol\nsymbol: {0} <{2}>{1}({3})"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.cant.resolve.location"_s,
			"cannot find symbol\nsymbol:   {0} {1}\nlocation: {4}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.cant.resolve.location.args"_s,
			"cannot find symbol\nsymbol:   {0} {1}({3})\nlocation: {4}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.cant.resolve.location.args.params"_s,
			"cannot find symbol\nsymbol:   {0} <{2}>{1}({3})\nlocation: {4}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.cant.select.static.class.from.param.type"_s,
			"cannot select a static class from a parameterized type"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.cant.type.annotate.scoping"_s,
			"scoping construct cannot be annotated with type-use annotations: {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.cant.type.annotate.scoping.1"_s,
			"scoping construct cannot be annotated with type-use annotation: {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.catch.without.try"_s,
			"\'\'catch\'\' without \'\'try\'\'"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.clash.with.pkg.of.same.name"_s,
			"{0} {1} clashes with package of same name"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.class.cant.write"_s,
			"error while writing {0}: {1}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.class.in.module.cant.extend.sealed.in.diff.module"_s,
			"class {0} in module {1} cannot extend a sealed class in a different module"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.class.in.unnamed.module.cant.extend.sealed.in.diff.package"_s,
			"class {0} in unnamed module cannot extend a sealed class in a different package"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.class.not.allowed"_s,
			"class, interface or enum declaration not allowed here"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.class.public.should.be.in.file"_s,
			"{0} {1} is public, should be declared in a file named {1}.java"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.concrete.inheritance.conflict"_s,
			"methods {0} from {1} and {2} from {3} are inherited with the same signature"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.conflicting.exports"_s,
			"duplicate or conflicting exports: {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.conflicting.exports.to.module"_s,
			"duplicate or conflicting exports to module: {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.conflicting.opens"_s,
			"duplicate or conflicting opens: {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.conflicting.opens.to.module"_s,
			"duplicate or conflicting opens to module: {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.const.expr.req"_s,
			"constant expression required"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.constant.label.not.compatible"_s,
			"constant label of type {0} is not compatible with switch selector type {1}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.cont.outside.loop"_s,
			"continue outside of loop"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.continue.outside.switch.expression"_s,
			"attempt to continue out of a switch expression"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.cyclic.annotation.element"_s,
			"type of element {0} is cyclic"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.cyclic.inheritance"_s,
			"cyclic inheritance involving {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.cyclic.requires"_s,
			"cyclic dependence involving {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.dc.bad.entity"_s,
			"bad HTML entity"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.dc.bad.inline.tag"_s,
			"incorrect use of inline tag"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.dc.gt.expected"_s,
			"\'\'>\'\' expected"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.dc.identifier.expected"_s,
			"identifier expected"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.dc.malformed.html"_s,
			"malformed HTML"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.dc.missing.semicolon"_s,
			"semicolon missing"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.dc.no.content"_s,
			"no content"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.dc.no.tag.name"_s,
			"no tag name after \'@\'"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.dc.ref.bad.parens"_s,
			"unexpected text after parenthesis"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.dc.ref.syntax.error"_s,
			"syntax error in reference"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.dc.ref.unexpected.input"_s,
			"unexpected text"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.dc.unexpected.content"_s,
			"unexpected content"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.dc.unterminated.inline.tag"_s,
			"unterminated inline tag"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.dc.unterminated.signature"_s,
			"unterminated signature"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.dc.unterminated.string"_s,
			"unterminated string"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.default.allowed.in.intf.annotation.member"_s,
			"default value only allowed in an annotation type declaration"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.default.overrides.object.member"_s,
			"default method {0} in {1} {2} overrides a member of java.lang.Object"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.does.not.override.abstract"_s,
			"{0} is not abstract and does not override abstract method {1} in {2}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.doesnt.exist"_s,
			"package {0} does not exist"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.dot.class.expected"_s,
			"\'\'.class\'\' expected"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.duplicate.annotation.invalid.repeated"_s,
			"annotation {0} is not a valid repeatable annotation"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.duplicate.annotation.member.value"_s,
			"duplicate element \'\'{0}\'\' in annotation @{1}."_s
		}),
		$$new($ObjectArray, {
			"compiler.err.duplicate.annotation.missing.container"_s,
			"{0} is not a repeatable annotation type"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.duplicate.case.label"_s,
			"duplicate case label"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.duplicate.class"_s,
			"duplicate class: {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.duplicate.default.label"_s,
			"duplicate default label"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.duplicate.module"_s,
			"duplicate module: {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.duplicate.module.on.path"_s,
			"duplicate module on {0}\nmodule in {1}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.duplicate.provides"_s,
			"duplicate provides: service {0}, implementation {1}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.duplicate.requires"_s,
			"duplicate requires: {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.duplicate.total.pattern"_s,
			"duplicate total pattern"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.duplicate.uses"_s,
			"duplicate uses: {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.else.without.if"_s,
			"\'\'else\'\' without \'\'if\'\'"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.empty.A.argument"_s,
			"-A requires an argument; use \'\'-Akey\'\' or \'\'-Akey=value\'\'"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.empty.char.lit"_s,
			"empty character literal"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.encl.class.required"_s,
			"an enclosing instance that contains {0} is required"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.enum.annotation.must.be.enum.constant"_s,
			"an enum annotation value must be an enum constant"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.enum.as.identifier"_s,
			"as of release 5, \'\'enum\'\' is a keyword, and may not be used as an identifier"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.enum.cant.be.instantiated"_s,
			"enum types may not be instantiated"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.enum.constant.expected"_s,
			"enum constant expected here"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.enum.constant.not.expected"_s,
			"enum constant not expected here"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.enum.label.must.be.unqualified.enum"_s,
			"an enum switch case label must be the unqualified name of an enumeration constant"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.enum.no.finalize"_s,
			"enums cannot have finalize methods"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.enum.no.subclassing"_s,
			"classes cannot directly extend java.lang.Enum"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.enum.types.not.extensible"_s,
			"enum types are not extensible"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.error"_s,
			"error: "_s
		}),
		$$new($ObjectArray, {
			"compiler.err.error.reading.file"_s,
			"error reading {0}; {1}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.error.writing.file"_s,
			"error writing {0}; {1}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.except.already.caught"_s,
			"exception {0} has already been caught"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.except.never.thrown.in.try"_s,
			"exception {0} is never thrown in body of corresponding try statement"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.expected"_s,
			"{0} expected"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.expected.module"_s,
			"expected \'\'module\'\'"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.expected.module.or.open"_s,
			"\'\'module\'\' or \'\'open\'\' expected"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.expected.str"_s,
			"{0} expected"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.expected2"_s,
			"{0} or {1} expected"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.expected3"_s,
			"{0}, {1}, or {2} expected"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.expected4"_s,
			"{0}, {1}, {2}, or {3} expected"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.expression.not.allowable.as.annotation.value"_s,
			"expression not allowed as annotation value"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.feature.not.supported.in.source"_s,
			"{0} is not supported in -source {1}\n(use -source {2} or higher to enable {0})"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.feature.not.supported.in.source.plural"_s,
			"{0} are not supported in -source {1}\n(use -source {2} or higher to enable {0})"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.file.not.directory"_s,
			"not a directory: {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.file.not.file"_s,
			"not a file: {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.file.not.found"_s,
			"file not found: {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.file.patched.and.msp"_s,
			"file accessible from both --patch-module and --module-source-path, but belongs to a different module on each path: {0}, {1}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.file.sb.on.source.or.patch.path.for.module"_s,
			"file should be on source path, or on patch path for module"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.final.parameter.may.not.be.assigned"_s,
			"final parameter {0} may not be assigned"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.finally.without.try"_s,
			"\'\'finally\'\' without \'\'try\'\'"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.first.statement.must.be.call.to.another.constructor"_s,
			"constructor is not canonical, so its first statement must invoke another constructor of class {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.flows.through.from.pattern"_s,
			"illegal fall-through from a pattern"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.flows.through.to.pattern"_s,
			"illegal fall-through to a pattern"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.foreach.not.applicable.to.type"_s,
			"for-each not applicable to expression type\nrequired: {1}\nfound:    {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.fp.number.too.large"_s,
			"floating-point number too large"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.fp.number.too.small"_s,
			"floating-point number too small"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.generic.array.creation"_s,
			"generic array creation"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.generic.throwable"_s,
			"a generic class may not extend java.lang.Throwable"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.icls.cant.have.static.decl"_s,
			"Illegal static declaration in inner class {0}\nmodifier \'\'static\'\' is only allowed in constant variable declarations"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.illegal.argument.for.option"_s,
			"illegal argument for {0}: {1}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.illegal.array.creation.both.dimension.and.initialization"_s,
			"array creation with both dimension expression and initialization is illegal"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.illegal.char"_s,
			"illegal character: \'\'{0}\'\'"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.illegal.char.for.encoding"_s,
			"unmappable character (0x{0}) for encoding {1}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.illegal.combination.of.modifiers"_s,
			"illegal combination of modifiers: {0} and {1}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.illegal.default.super.call"_s,
			"bad type qualifier {0} in default super call\n{1}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.illegal.dot"_s,
			"illegal \'\'.\'\'"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.illegal.enum.static.ref"_s,
			"illegal reference to static field from initializer"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.illegal.esc.char"_s,
			"illegal escape character"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.illegal.forward.ref"_s,
			"illegal forward reference"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.illegal.initializer.for.type"_s,
			"illegal initializer for {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.illegal.line.end.in.char.lit"_s,
			"illegal line end in character literal"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.illegal.nonascii.digit"_s,
			"illegal non-ASCII digit"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.illegal.parenthesized.expression"_s,
			"illegal parenthesized expression"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.illegal.qual.not.icls"_s,
			"illegal qualifier; {0} is not an inner class"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.illegal.record.component.name"_s,
			"illegal record component name {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.illegal.ref.to.restricted.type"_s,
			"illegal reference to restricted type \'\'{0}\'\'"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.illegal.self.ref"_s,
			"self-reference in initializer"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.illegal.start.of.expr"_s,
			"illegal start of expression"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.illegal.start.of.stmt"_s,
			"illegal start of statement"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.illegal.start.of.type"_s,
			"illegal start of type"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.illegal.static.intf.meth.call"_s,
			"illegal static interface method call\nthe receiver expression should be replaced with the type qualifier \'\'{0}\'\'"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.illegal.text.block.open"_s,
			"illegal text block open delimiter sequence, missing line terminator"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.illegal.underscore"_s,
			"illegal underscore"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.illegal.unicode.esc"_s,
			"illegal unicode escape"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.import.requires.canonical"_s,
			"import requires canonical name for {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.improperly.formed.type.inner.raw.param"_s,
			"improperly formed type, type arguments given on a raw type"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.improperly.formed.type.param.missing"_s,
			"improperly formed type, some parameters are missing"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.incomparable.types"_s,
			"incomparable types: {0} and {1}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.incompatible.thrown.types.in.mref"_s,
			"incompatible thrown types {0} in functional expression"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.incorrect.constructor.receiver.name"_s,
			"the receiver name does not match the enclosing outer class type\nrequired: {0}\nfound:    {1}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.incorrect.constructor.receiver.type"_s,
			"the receiver type does not match the enclosing outer class type\nrequired: {0}\nfound:    {1}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.incorrect.receiver.name"_s,
			"the receiver name does not match the enclosing class type\nrequired: {0}\nfound:    {1}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.incorrect.receiver.type"_s,
			"the receiver type does not match the enclosing class type\nrequired: {0}\nfound:    {1}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.initializer.must.be.able.to.complete.normally"_s,
			"initializer must be able to complete normally"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.initializer.not.allowed"_s,
			"initializers not allowed in interfaces"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.instance.initializer.not.allowed.in.records"_s,
			"instance initializers not allowed in records"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.instanceof.pattern.no.subtype"_s,
			"expression type {0} is a subtype of pattern type {1}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.instanceof.reifiable.not.safe"_s,
			"{0} cannot be safely cast to {1}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.int.number.too.large"_s,
			"integer number too large"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.intf.annotation.cant.have.type.params"_s,
			"annotation type {0} cannot be generic"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.intf.annotation.member.clash"_s,
			"annotation type {1} declares an element with the same name as method {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.intf.annotation.members.cant.have.params"_s,
			"elements in annotation type declarations cannot declare formal parameters"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.intf.annotation.members.cant.have.type.params"_s,
			"elements in annotation type declarations cannot be generic methods"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.intf.expected.here"_s,
			"interface expected here"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.intf.meth.cant.have.body"_s,
			"interface abstract methods cannot have body"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.intf.not.allowed.here"_s,
			"interface not allowed here"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.invalid.A.key"_s,
			"key in annotation processor option \'\'{0}\'\' is not a dot-separated sequence of identifiers"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.invalid.accessor.method.in.record"_s,
			"invalid accessor method in record {0}\n({1})"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.invalid.annotation.member.type"_s,
			"invalid type for annotation type element"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.invalid.binary.number"_s,
			"binary numbers must contain at least one binary digit"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.invalid.canonical.constructor.in.record"_s,
			"invalid {0} constructor in record {1}\n({2})"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.invalid.flag"_s,
			"invalid flag: {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.invalid.hex.number"_s,
			"hexadecimal numbers must contain at least one hexadecimal digit"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.invalid.lambda.parameter.declaration"_s,
			"invalid lambda parameter declaration\n({0})"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.invalid.meth.decl.ret.type.req"_s,
			"invalid method declaration; return type required"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.invalid.module.directive"_s,
			"module directive keyword or \'\'}\'\' expected"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.invalid.module.specifier"_s,
			"module specifier not allowed: {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.invalid.mref"_s,
			"invalid {0} reference\n{1}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.invalid.path"_s,
			"Invalid filename: {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.invalid.permits.clause"_s,
			"invalid permits clause\n({0})"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.invalid.profile"_s,
			"invalid profile: {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.invalid.repeatable.annotation"_s,
			"duplicate annotation: {0} is annotated with an invalid @Repeatable annotation"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.invalid.repeatable.annotation.elem.nondefault"_s,
			"containing annotation type ({0}) does not have a default value for element {1}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.invalid.repeatable.annotation.incompatible.target"_s,
			"containing annotation type ({0}) is applicable to more targets than repeatable annotation type ({1})"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.invalid.repeatable.annotation.invalid.value"_s,
			"{0} is not a valid @Repeatable: invalid value element"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.invalid.repeatable.annotation.multiple.values"_s,
			"{0} is not a valid @Repeatable, {1} element methods named \'\'value\'\' declared"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.invalid.repeatable.annotation.no.value"_s,
			"{0} is not a valid @Repeatable, no value element method declared"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.invalid.repeatable.annotation.not.applicable"_s,
			"container {0} is not applicable to element {1}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.invalid.repeatable.annotation.not.applicable.in.context"_s,
			"container {0} is not applicable in this type context"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.invalid.repeatable.annotation.not.documented"_s,
			"repeatable annotation type ({1}) is @Documented while containing annotation type ({0}) is not"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.invalid.repeatable.annotation.not.inherited"_s,
			"repeatable annotation type ({1}) is @Inherited while containing annotation type ({0}) is not"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.invalid.repeatable.annotation.repeated.and.container.present"_s,
			"container {0} must not be present at the same time as the element it contains"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.invalid.repeatable.annotation.retention"_s,
			"retention of containing annotation type ({0}) is shorter than the retention of repeatable annotation type ({2})"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.invalid.repeatable.annotation.value.return"_s,
			"containing annotation type ({0}) must declare an element named \'\'value\'\' of type {2}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.invalid.source"_s,
			"invalid source release: {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.invalid.supertype.record"_s,
			"classes cannot directly extend {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.invalid.target"_s,
			"invalid target release: {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.invalid.yield"_s,
			"invalid use of a restricted identifier \'\'yield\'\'\n(to invoke a method called yield, qualify the yield with a receiver or type name)"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.io.exception"_s,
			"error reading source file: {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.is.preview"_s,
			"{0} is a preview API and is disabled by default.\n(use --enable-preview to enable preview APIs)"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.label.already.in.use"_s,
			"label {0} already in use"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.lambda.body.neither.value.nor.void.compatible"_s,
			"lambda body is neither value nor void compatible"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.limit.code"_s,
			"code too large"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.limit.code.too.large.for.try.stmt"_s,
			"code too large for try statement"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.limit.dimensions"_s,
			"array type has too many dimensions"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.limit.locals"_s,
			"too many local variables"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.limit.parameters"_s,
			"too many parameters"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.limit.pool"_s,
			"too many constants"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.limit.pool.in.class"_s,
			"too many constants in class {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.limit.stack"_s,
			"code requires too much stack"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.limit.string"_s,
			"constant string too long"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.limit.string.overflow"_s,
			"UTF8 representation for string \"{0}...\" is too long for the constant pool"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.local.classes.cant.extend.sealed"_s,
			"{0} classes must not extend sealed classes"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.local.enum"_s,
			"enum types must not be local"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.local.var.accessed.from.icls.needs.final"_s,
			"local variable {0} is accessed from within inner class; needs to be declared final"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.locn.bad.module-info"_s,
			"problem reading module-info.class in {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.locn.cant.get.module.name.for.jar"_s,
			"cannot determine module name for {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.locn.cant.read.directory"_s,
			"cannot read directory {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.locn.cant.read.file"_s,
			"cannot read file {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.locn.invalid.arg.for.xpatch"_s,
			"invalid argument for --patch-module option: {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.locn.module-info.not.allowed.on.patch.path"_s,
			"module-info.class not allowed on patch path: {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.malformed.fp.lit"_s,
			"malformed floating-point literal"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.match.binding.exists"_s,
			"illegal attempt to redefine an existing match binding"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.method.does.not.override.superclass"_s,
			"method does not override or implement a method from a supertype"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.missing.meth.body.or.decl.abstract"_s,
			"missing method body, or declare abstract"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.missing.ret.stmt"_s,
			"missing return statement"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.mod.not.allowed.here"_s,
			"modifier {0} not allowed here"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.modifier.not.allowed.here"_s,
			"modifier {0} not allowed here"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.module.decl.sb.in.module-info.java"_s,
			"module declarations should be in a file named module-info.java"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.module.name.mismatch"_s,
			"module name {0} does not match expected name {1}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.module.non.zero.opens"_s,
			"open module {0} has non-zero opens_count"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.module.not.found"_s,
			"module not found: {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.module.not.found.in.module.source.path"_s,
			"module {0} not found in module source path"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.module.not.found.on.module.source.path"_s,
			"module not found on module source path"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.modulesourcepath.must.be.specified.with.dash.m.option"_s,
			"module source path must be specified if -m option is used"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.multi-module.outdir.cannot.be.exploded.module"_s,
			"in multi-module mode, the output directory cannot be an exploded module: {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.multicatch.parameter.may.not.be.assigned"_s,
			"multi-catch parameter {0} may not be assigned"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.multicatch.types.must.be.disjoint"_s,
			"Alternatives in a multi-catch statement cannot be related by subclassing\nAlternative {0} is a subclass of alternative {1}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.multiple.values.for.module.source.path"_s,
			"--module-source-path specified more than once with a pattern argument"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.name.clash.same.erasure"_s,
			"name clash: {0} and {1} have the same erasure"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.name.clash.same.erasure.no.hide"_s,
			"name clash: {0} in {1} and {2} in {3} have the same erasure, yet neither hides the other"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.name.clash.same.erasure.no.override"_s,
			"name clash: {0}({1}) in {2} and {3}({4}) in {5} have the same erasure, yet neither overrides the other"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.name.clash.same.erasure.no.override.1"_s,
			"name clash: {0} {1} has two methods with the same erasure, yet neither overrides the other\nfirst method:  {2}({3}) in {4}\nsecond method: {5}({6}) in {7}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.name.reserved.for.internal.use"_s,
			"{0} is reserved for internal use"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.native.meth.cant.have.body"_s,
			"native methods cannot have a body"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.new.not.allowed.in.annotation"_s,
			"\'\'new\'\' not allowed in an annotation"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.no.annotation.member"_s,
			"no annotation member {0} in {1}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.no.annotations.on.dot.class"_s,
			"no annotations are allowed in the type of a class literal"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.no.encl.instance.of.type.in.scope"_s,
			"no enclosing instance of type {0} is in scope"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.no.intf.expected.here"_s,
			"no interface expected here"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.no.match.entry"_s,
			"{0} has no match in entry in {1}; required {2}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.no.opens.unless.strong"_s,
			"\'\'opens\'\' only allowed in strong modules"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.no.output.dir"_s,
			"no class output directory specified"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.no.pkg.in.module-info.java"_s,
			"package declarations not allowed in file module-info.java"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.no.source.files"_s,
			"no source files"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.no.source.files.classes"_s,
			"no source files or class names"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.no.superclass"_s,
			"{0} has no superclass."_s
		}),
		$$new($ObjectArray, {
			"compiler.err.no.switch.expression"_s,
			"yield outside of switch expression"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.no.switch.expression.qualify"_s,
			"yield outside of switch expression\n(to invoke a method called yield, qualify the yield with a receiver or type name)"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.no.value.for.option"_s,
			"no value for {0} option"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.no.zipfs.for.archive"_s,
			"No file system provider is available to handle this file: {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.non-static.cant.be.ref"_s,
			"non-static {0} {1} cannot be referenced from a static context"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.non.sealed.or.sealed.expected"_s,
			"sealed or non-sealed modifiers expected"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.non.sealed.sealed.or.final.expected"_s,
			"sealed, non-sealed or final modifiers expected"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.non.sealed.with.no.sealed.supertype"_s,
			"non-sealed modifier not allowed here\n(class {0} does not have any sealed supertypes)"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.not.annotation.type"_s,
			"{0} is not an annotation type"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.not.def.access.class.intf.cant.access"_s,
			"{1}.{0} is defined in an inaccessible class or interface"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.not.def.access.class.intf.cant.access.reason"_s,
			"{1}.{0} in package {2} is not accessible\n({3})"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.not.def.access.package.cant.access"_s,
			"{0} is not visible\n({2})"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.not.def.public"_s,
			"{0} is not public in {1}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.not.def.public.cant.access"_s,
			"{0} is not public in {1}; cannot be accessed from outside package"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.not.encl.class"_s,
			"not an enclosing class: {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.not.exhaustive"_s,
			"the switch expression does not cover all possible input values"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.not.exhaustive.statement"_s,
			"the switch statement does not cover all possible input values"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.not.in.module.on.module.source.path"_s,
			"not in a module on the module source path"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.not.in.profile"_s,
			"{0} is not available in profile \'\'{1}\'\'"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.not.loop.label"_s,
			"not a loop label: {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.not.stmt"_s,
			"not a statement"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.not.within.bounds"_s,
			"type argument {0} is not within bounds of type-variable {1}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.operator.cant.be.applied"_s,
			"bad operand type {1} for unary operator \'\'{0}\'\'"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.operator.cant.be.applied.1"_s,
			"bad operand types for binary operator \'\'{0}\'\'\nfirst type:  {1}\nsecond type: {2}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.option.not.allowed.with.target"_s,
			"option {0} not allowed with target {1}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.option.removed.source"_s,
			"Source option {0} is no longer supported. Use {1} or later."_s
		}),
		$$new($ObjectArray, {
			"compiler.err.option.removed.target"_s,
			"Target option {0} is no longer supported. Use {1} or later."_s
		}),
		$$new($ObjectArray, {
			"compiler.err.option.too.many"_s,
			"option {0} can only be specified once"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.orphaned"_s,
			"orphaned {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.output.dir.must.be.specified.with.dash.m.option"_s,
			"class output directory must be specified if -m option is used"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.override.incompatible.ret"_s,
			"{0}\nreturn type {1} is not compatible with {2}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.override.meth"_s,
			"{0}\noverridden method is {1}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.override.meth.doesnt.throw"_s,
			"{0}\noverridden method does not throw {1}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.override.static"_s,
			"{0}\noverriding method is static"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.override.weaker.access"_s,
			"{0}\nattempting to assign weaker access privileges; was {1}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.package.clash.from.requires"_s,
			"module {0} reads package {1} from both {2} and {3}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.package.clash.from.requires.in.unnamed"_s,
			"the unnamed module reads package {0} from both {1} and {2}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.package.empty.or.not.found"_s,
			"package is empty or does not exist: {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.package.in.other.module"_s,
			"package exists in another module: {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.package.not.visible"_s,
			"package {0} is not visible\n({1})"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.pattern.dominated"_s,
			"this case label is dominated by a preceding case label"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.pattern.expected"_s,
			"type pattern expected"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.pkg.annotations.sb.in.package-info.java"_s,
			"package annotations should be in file package-info.java"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.pkg.clashes.with.class.of.same.name"_s,
			"package {0} clashes with class of same name"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.plugin.not.found"_s,
			"plug-in not found: {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.premature.eof"_s,
			"reached end of file while parsing"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.preview.feature.disabled"_s,
			"{0} is a preview feature and is disabled by default.\n(use --enable-preview to enable {0})"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.preview.feature.disabled.classfile"_s,
			"class file for {0} uses preview features of Java SE {1}.\n(use --enable-preview to allow loading of class files which contain preview features)"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.preview.feature.disabled.plural"_s,
			"{0} are a preview feature and are disabled by default.\n(use --enable-preview to enable {0})"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.preview.not.latest"_s,
			"invalid source release {0} with --enable-preview\n(preview language features are only supported for release {1})"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.preview.without.source.or.release"_s,
			"--enable-preview must be used with either -source or --release"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.prob.found.req"_s,
			"incompatible types: {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.proc.bad.config.file"_s,
			"Bad service configuration file, or exception thrown while constructing Processor object: {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.proc.cant.access"_s,
			"cannot access {0}\n{1}\nConsult the following stack trace for details.\n{2}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.proc.cant.access.1"_s,
			"cannot access {0}\n{1}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.proc.cant.create.loader"_s,
			"Could not create class loader for annotation processors: {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.proc.cant.find.class"_s,
			"Could not find class file for \'\'{0}\'\'."_s
		}),
		$$new($ObjectArray, {
			"compiler.err.proc.cant.load.class"_s,
			"Could not load processor class file due to \'\'{0}\'\'."_s
		}),
		$$new($ObjectArray, {
			"compiler.err.proc.messager"_s,
			"{0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.proc.no.explicit.annotation.processing.requested"_s,
			"Class names, \'\'{0}\'\', are only accepted if annotation processing is explicitly requested"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.proc.no.service"_s,
			"A ServiceLoader was not usable and is required for annotation processing."_s
		}),
		$$new($ObjectArray, {
			"compiler.err.proc.processor.bad.option.name"_s,
			"Bad option name \'\'{0}\'\' provided by processor \'\'{1}\'\'"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.proc.processor.cant.instantiate"_s,
			"Could not instantiate an instance of processor \'\'{0}\'\'"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.proc.processor.not.found"_s,
			"Annotation processor \'\'{0}\'\' not found"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.proc.processor.wrong.type"_s,
			"Annotation processor \'\'{0}\'\' does not implement javax.annotation.processing.Processor"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.proc.service.problem"_s,
			"Error creating a service loader to load Processors."_s
		}),
		$$new($ObjectArray, {
			"compiler.err.processorpath.no.processormodulepath"_s,
			"illegal combination of -processorpath and --processor-module-path"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.profile.bootclasspath.conflict"_s,
			"profile and bootclasspath options cannot be used together"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.qualified.new.of.static.class"_s,
			"qualified new of static class"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.receiver.parameter.not.applicable.constructor.toplevel.class"_s,
			"receiver parameter not applicable for constructor of top-level class"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.record.cannot.declare.instance.fields"_s,
			"field declaration must be static\n(consider replacing field with record component)"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.record.cant.declare.field.modifiers"_s,
			"record components cannot have modifiers"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.record.component.and.old.array.syntax"_s,
			"legacy array notation not allowed on record components"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.record.header.expected"_s,
			"record header expected"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.recursive.ctor.invocation"_s,
			"recursive constructor invocation"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.ref.ambiguous"_s,
			"reference to {0} is ambiguous\nboth {1} {2} in {3} and {4} {5} in {6} match"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.release.bootclasspath.conflict"_s,
			"option {0} cannot be used together with --release"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.repeated.annotation.target"_s,
			"repeated annotation target"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.repeated.interface"_s,
			"repeated interface"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.repeated.modifier"_s,
			"repeated modifier"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.repeated.provides.for.service"_s,
			"multiple \'\'provides\'\' for service {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.repeated.value.for.module.source.path"_s,
			"--module-source-path specified more than once for module {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.repeated.value.for.patch.module"_s,
			"--patch-module specified more than once for module {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.report.access"_s,
			"{0} has {1} access in {2}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.req.arg"_s,
			"{0} requires an argument"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.restricted.type.not.allowed"_s,
			"\'\'{0}\'\' not allowed here\nas of release {1}, \'\'{0}\'\' is a restricted type name and cannot be used for type declarations"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.restricted.type.not.allowed.array"_s,
			"\'\'{0}\'\' is not allowed as an element type of an array"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.restricted.type.not.allowed.compound"_s,
			"\'\'{0}\'\' is not allowed in a compound declaration"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.restricted.type.not.allowed.here"_s,
			"\'\'{0}\'\' is not allowed here"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.ret.outside.meth"_s,
			"return outside method"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.return.outside.switch.expression"_s,
			"attempt to return out of a switch expression"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.rule.completes.normally"_s,
			"switch rule completes without providing a value\n(switch rules in switch expressions must either provide a value or throw)"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.same.binary.name"_s,
			"classes: {0} and {1} have the same binary name"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.sealed.class.must.have.subclasses"_s,
			"sealed class must have subclasses"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.sealed.or.non.sealed.local.classes.not.allowed"_s,
			"sealed or non-sealed local classes are not allowed"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.service.definition.is.enum"_s,
			"the service definition is an enum: {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.service.implementation.doesnt.have.a.no.args.constructor"_s,
			"the service implementation does not have a default constructor: {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.service.implementation.is.abstract"_s,
			"the service implementation is an abstract class: {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.service.implementation.is.inner"_s,
			"the service implementation is an inner class: {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.service.implementation.must.be.subtype.of.service.interface"_s,
			"the service implementation type must be a subtype of the service interface type, or have a public static no-args method named \"provider\" returning the service implementation"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.service.implementation.no.args.constructor.not.public"_s,
			"the no arguments constructor of the service implementation is not public: {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.service.implementation.not.in.right.module"_s,
			"service implementation must be defined in the same module as the provides directive"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.service.implementation.provider.return.must.be.subtype.of.service.interface"_s,
			"the \"provider\" method return type must be a subtype of the service interface type"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.signature.doesnt.match.intf"_s,
			"signature does not match {0}; incompatible interfaces"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.signature.doesnt.match.supertype"_s,
			"signature does not match {0}; incompatible supertype"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.source.cant.overwrite.input.file"_s,
			"error writing source; cannot overwrite input file {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.sourcepath.modulesourcepath.conflict"_s,
			"cannot specify both --source-path and --module-source-path"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.stack.sim.error"_s,
			"Internal error: stack sim error on {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.static.declaration.not.allowed.in.inner.classes"_s,
			"static declarations not allowed in inner classes"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.static.imp.only.classes.and.interfaces"_s,
			"static import only from classes and interfaces"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.static.methods.cannot.be.annotated.with.override"_s,
			"static methods cannot be annotated with @Override"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.string.const.req"_s,
			"constant string expression required"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.switch.case.unexpected.statement"_s,
			"unexpected statement in case, expected is an expression, a block or a throw statement"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.switch.expression.completes.normally"_s,
			"switch expression completes without providing a value\n(switch expressions must either provide a value or throw for all possible input values)"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.switch.expression.empty"_s,
			"switch expression does not have any case clauses"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.switch.expression.no.result.expressions"_s,
			"switch expression does not have any result expressions"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.switch.mixing.case.types"_s,
			"different case kinds used in the switch"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.this.as.identifier"_s,
			"as of release 8, \'\'this\'\' is allowed as the parameter name for the receiver type only\nwhich has to be the first parameter, and cannot be a lambda parameter"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.throws.not.allowed.in.intf.annotation"_s,
			"throws clause not allowed in @interface members"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.too.many.modules"_s,
			"too many module declarations found"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.too.many.patched.modules"_s,
			"too many patched modules ({0}), use --module-source-path"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.total.pattern.and.default"_s,
			"switch has both a total pattern and a default label"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.try.resource.may.not.be.assigned"_s,
			"auto-closeable resource {0} may not be assigned"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.try.with.resources.expr.effectively.final.var"_s,
			"variable {0} used as a try-with-resources resource neither final nor effectively final"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.try.with.resources.expr.needs.var"_s,
			"the try-with-resources resource must either be a variable declaration or an expression denoting a reference to a final or effectively final variable"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.try.without.catch.finally.or.resource.decls"_s,
			"\'\'try\'\' without \'\'catch\'\', \'\'finally\'\' or resource declarations"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.two.class.loaders.1"_s,
			"javac is split between multiple class loaders: check your configuration"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.two.class.loaders.2"_s,
			"javac is split between multiple class loaders:\none class comes from file: {0}\nwhile javac comes from {1}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.type.doesnt.take.params"_s,
			"type {0} does not take parameters"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.type.found.req"_s,
			"unexpected type\nrequired: {1}\nfound:    {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.type.var.cant.be.deref"_s,
			"cannot select from a type variable"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.type.var.may.not.be.followed.by.other.bounds"_s,
			"a type variable may not be followed by other bounds"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.type.var.more.than.once"_s,
			"type variable {0} occurs more than once in result type of {1}; cannot be left uninstantiated"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.type.var.more.than.once.in.result"_s,
			"type variable {0} occurs more than once in type of {1}; cannot be left uninstantiated"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.types.incompatible"_s,
			"types {0} and {1} are incompatible;\n{2}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.unclosed.char.lit"_s,
			"unclosed character literal"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.unclosed.comment"_s,
			"unclosed comment"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.unclosed.str.lit"_s,
			"unclosed string literal"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.unclosed.text.block"_s,
			"unclosed text block"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.undef.label"_s,
			"undefined label: {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.underscore.as.identifier"_s,
			"as of release 9, \'\'_\'\' is a keyword, and may not be used as an identifier"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.underscore.as.identifier.in.lambda"_s,
			"\'\'_\'\' used as an identifier\n(use of \'\'_\'\' as an identifier is forbidden for lambda parameters)"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.unexpected.lambda"_s,
			"lambda expression not expected here"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.unexpected.mref"_s,
			"method reference not expected here"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.unexpected.type"_s,
			"unexpected type\nrequired: {0}\nfound:    {1}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.unmatched.quote"_s,
			"unmatched quote in environment variable {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.unnamed.pkg.not.allowed.named.modules"_s,
			"unnamed package is not allowed in named modules"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.unreachable.stmt"_s,
			"unreachable statement"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.unreported.exception.default.constructor"_s,
			"unreported exception {0} in default constructor"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.unreported.exception.implicit.close"_s,
			"unreported exception {0}; must be caught or declared to be thrown\nexception thrown from implicit call to close() on resource variable \'\'{1}\'\'"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.unreported.exception.need.to.catch.or.throw"_s,
			"unreported exception {0}; must be caught or declared to be thrown"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.unsupported.encoding"_s,
			"unsupported encoding: {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.unsupported.release.version"_s,
			"release version {0} not supported"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.var.might.already.be.assigned"_s,
			"variable {0} might already have been assigned"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.var.might.be.assigned.in.loop"_s,
			"variable {0} might be assigned in loop"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.var.might.not.have.been.initialized"_s,
			"variable {0} might not have been initialized"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.var.not.initialized.in.default.constructor"_s,
			"variable {0} not initialized in the default constructor"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.varargs.and.old.array.syntax"_s,
			"legacy array notation not allowed on variable-arity parameter"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.varargs.and.receiver"_s,
			"varargs notation not allowed on receiver parameter"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.varargs.invalid.trustme.anno"_s,
			"Invalid {0} annotation. {1}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.varargs.must.be.last"_s,
			"varargs parameter must be the last parameter"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.variable.not.allowed"_s,
			"variable declaration not allowed here"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.void.not.allowed.here"_s,
			"\'\'void\'\' type not allowed here"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.warnings.and.werror"_s,
			"warnings found and -Werror specified"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.wrong.number.type.args"_s,
			"wrong number of type arguments; required {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.err.wrong.receiver"_s,
			"wrong receiver parameter name"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.accessor.method.cant.throw.exception"_s,
			"throws clause not allowed for accessor method"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.accessor.method.must.not.be.generic"_s,
			"accessor method must not be generic"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.accessor.method.must.not.be.static"_s,
			"accessor method must not be static"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.accessor.return.type.doesnt.match"_s,
			"return type of accessor method {0} must match the type of record component {1}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.anachronistic.module.info"_s,
			"module declaration found in version {0}.{1} classfile"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.anonymous"_s,
			"anonymous"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.anonymous.class"_s,
			"<anonymous {0}>"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.applicable.method.found"_s,
			"#{0} applicable method found: {1}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.applicable.method.found.1"_s,
			"#{0} applicable method found: {1}\n({2})"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.applicable.method.found.2"_s,
			"#{0} applicable method found: {1} {2}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.applicable.method.found.3"_s,
			"#{0} applicable method found: {1} {2}\n({3})"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.arg.length.mismatch"_s,
			"actual and formal argument lists differ in length"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.bad.class.file"_s,
			"class file is invalid for class {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.bad.class.file.header"_s,
			"bad class file: {0}\n{1}\nPlease remove or make sure it appears in the correct subdirectory of the classpath."_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.bad.class.signature"_s,
			"bad class signature: {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.bad.const.pool.entry"_s,
			"bad constant pool entry in {0}\nexpected {1} at index {2}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.bad.const.pool.index"_s,
			"bad constant pool index in {0}\nindex {1} is not within pool size {2}."_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.bad.const.pool.tag"_s,
			"bad constant pool tag: {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.bad.const.pool.tag.at"_s,
			"bad constant pool tag: {0} at {1}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.bad.constant.range"_s,
			"constant value \'\'{0}\'\' for {1} is outside the expected range for {2}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.bad.constant.value"_s,
			"bad constant value \'\'{0}\'\' for {1}, expected {2}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.bad.constant.value.type"_s,
			"variable of type \'\'{0}\'\' cannot have a constant value, but has one specified"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.bad.enclosing.class"_s,
			"bad enclosing class for {0}: {1}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.bad.enclosing.method"_s,
			"bad enclosing method attribute for class {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.bad.instance.method.in.unbound.lookup"_s,
			"unexpected instance {0} {1} found in unbound lookup"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.bad.intersection.target.for.functional.expr"_s,
			"bad intersection type target for lambda or method reference\n{0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.bad.module-info.name"_s,
			"bad class name"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.bad.requires.flag"_s,
			"bad requires flag: {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.bad.runtime.invisible.param.annotations"_s,
			"bad RuntimeInvisibleParameterAnnotations attribute: {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.bad.signature"_s,
			"bad signature: {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.bad.source.file.header"_s,
			"bad source file: {0}\n{1}\nPlease remove or make sure it appears in the correct subdirectory of the sourcepath."_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.bad.static.method.in.bound.lookup"_s,
			"unexpected static {0} {1} found in bound lookup"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.bad.static.method.in.unbound.lookup"_s,
			"unexpected static {0} {1} found in unbound lookup"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.bad.type.annotation.value"_s,
			"bad type annotation target type value: {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.base.membership"_s,
			"all your base class are belong to us"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.bound"_s,
			"bound"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.canonical"_s,
			"canonical"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.canonical.cant.have.return.statement"_s,
			"compact constructor must not have return statements"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.canonical.must.not.contain.explicit.constructor.invocation"_s,
			"canonical constructor must not contain explicit constructor invocation"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.canonical.must.not.declare.type.variables"_s,
			"canonical constructor must not declare type variables"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.canonical.must.not.have.stronger.access"_s,
			"attempting to assign stronger access privileges; was {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.canonical.with.name.mismatch"_s,
			"invalid parameter names in canonical constructor"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.cant.access.inner.cls.constr"_s,
			"cannot access constructor {0}({1})\nan enclosing instance of type {2} is not in scope"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.cant.apply.diamond.1"_s,
			"cannot infer type arguments for {0}\nreason: {1}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.cant.apply.symbol"_s,
			"{0} {1} in {4} {5} cannot be applied to given types\nrequired: {2}\nfound:    {3}\nreason: {6}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.cant.apply.symbols"_s,
			"no suitable {0} found for {1}({2})"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.cant.hide"_s,
			"{0} in {1} cannot hide {2} in {3}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.cant.implement"_s,
			"{0} in {1} cannot implement {2} in {3}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.cant.override"_s,
			"{0} in {1} cannot override {2} in {3}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.cant.resolve.args"_s,
			"cannot find symbol\nsymbol: {0} {1}({3})"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.cant.resolve.location.args"_s,
			"cannot find symbol\nsymbol:   {0} {1}({3})\nlocation: {4}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.cant.resolve.location.args.params"_s,
			"cannot find symbol\nsymbol:   {0} <{2}>{1}({3})\nlocation: {4}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.cant.resolve.modules"_s,
			"cannot resolve modules"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.captured.type"_s,
			"CAP#{0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.clashes.with"_s,
			"{0} in {1} clashes with {2} in {3}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.class.file.not.found"_s,
			"class file for {0} not found"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.class.file.wrong.class"_s,
			"class file contains wrong class: {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.class.is.not.sealed"_s,
			"{0} must be sealed"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.compact"_s,
			"compact"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.conditional.target.cant.be.void"_s,
			"target-type for conditional expression cannot be void"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.count.error"_s,
			"{0} error"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.count.error.plural"_s,
			"{0} errors"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.count.error.recompile"_s,
			"only showing the first {0} errors, of {1} total; use -Xmaxerrs if you would like to see more"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.count.warn"_s,
			"{0} warning"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.count.warn.plural"_s,
			"{0} warnings"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.count.warn.recompile"_s,
			"only showing the first {0} warnings, of {1} total; use -Xmaxwarns if you would like to see more"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.descriptor"_s,
			"descriptor: {2} {0}({1})"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.descriptor.throws"_s,
			"descriptor: {2} {0}({1}) throws {3}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.diamond"_s,
			"{0}<>"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.diamond.and.explicit.params"_s,
			"cannot use \'\'<>\'\' with explicit type parameters for constructor"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.diamond.anonymous.methods.implicitly.override"_s,
			"(due to <>, every non-private method declared in this anonymous class must override or implement a method from a supertype)"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.diamond.invalid.arg"_s,
			"type argument {0} inferred for {1} is not allowed in this context\ninferred argument is not expressible in the Signature attribute"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.diamond.invalid.args"_s,
			"type arguments {0} inferred for {1} are not allowed in this context\ninferred arguments are not expressible in the Signature attribute"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.diamond.non.generic"_s,
			"cannot use \'\'<>\'\' with non-generic class {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.doesnt.extend.sealed"_s,
			"subclass {0} must extend sealed class"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.eq.bounds"_s,
			"equality constraints: {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.exception.message"_s,
			"{0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.explicit.param.do.not.conform.to.bounds"_s,
			"explicit type argument {0} does not conform to declared bound(s) {1}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.fatal.err.cant.close"_s,
			"Fatal Error: Cannot close compiler resources"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.fatal.err.cant.locate.ctor"_s,
			"Fatal Error: Unable to find constructor for {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.fatal.err.cant.locate.field"_s,
			"Fatal Error: Unable to find field {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.fatal.err.cant.locate.meth"_s,
			"Fatal Error: Unable to find method {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.fatal.err.no.java.lang"_s,
			"Fatal Error: Unable to find package java.lang in classpath or bootclasspath"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.feature.annotations.after.type.params"_s,
			"annotations after method type parameters"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.feature.case.null"_s,
			"null in switch cases"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.feature.default.methods"_s,
			"default methods"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.feature.diamond"_s,
			"diamond operator"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.feature.diamond.and.anon.class"_s,
			"\'\'<>\'\' with anonymous inner classes"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.feature.intersection.types.in.cast"_s,
			"intersection types"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.feature.lambda"_s,
			"lambda expressions"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.feature.method.references"_s,
			"method references"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.feature.modules"_s,
			"modules"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.feature.multiple.case.labels"_s,
			"multiple case labels"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.feature.not.supported.in.source"_s,
			"{0} is not supported in -source {1}\n(use -source {2} or higher to enable {0})"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.feature.not.supported.in.source.plural"_s,
			"{0} are not supported in -source {1}\n(use -source {2} or higher to enable {0})"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.feature.pattern.matching.instanceof"_s,
			"pattern matching in instanceof"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.feature.pattern.switch"_s,
			"patterns in switch statements"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.feature.private.intf.methods"_s,
			"private interface methods"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.feature.records"_s,
			"records"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.feature.reifiable.types.instanceof"_s,
			"reifiable types in instanceof"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.feature.repeatable.annotations"_s,
			"repeated annotations"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.feature.sealed.classes"_s,
			"sealed classes"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.feature.static.intf.method.invoke"_s,
			"static interface method invocations"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.feature.static.intf.methods"_s,
			"static interface methods"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.feature.switch.expressions"_s,
			"switch expressions"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.feature.switch.rules"_s,
			"switch rules"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.feature.text.blocks"_s,
			"text blocks"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.feature.type.annotations"_s,
			"type annotations"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.feature.var.in.try.with.resources"_s,
			"variables in try-with-resources"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.feature.var.syntax.in.implicit.lambda"_s,
			"var syntax in implicit lambdas"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.file.does.not.contain.module"_s,
			"file does not contain module declaration"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.file.does.not.contain.package"_s,
			"file does not contain package {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.file.doesnt.contain.class"_s,
			"file does not contain class {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.guard"_s,
			"a guard"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.illegal.signature"_s,
			"illegal signature attribute for type {1}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.illegal.start.of.class.file"_s,
			"illegal start of class file"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.implicit.and.explicit.not.allowed"_s,
			"cannot mix implicitly-typed and explicitly-typed parameters"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.inaccessible.varargs.type"_s,
			"formal varargs element type {0} is not accessible from {1} {2}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.inapplicable.method"_s,
			"{0} {1}.{2} is not applicable\n({3})"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.incompatible.abstract.default"_s,
			"{0} {1} inherits abstract and default for {2}({3}) from types {4} and {5}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.incompatible.abstracts"_s,
			"multiple non-overriding abstract methods found in {0} {1}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.incompatible.arg.types.in.lambda"_s,
			"incompatible parameter types in lambda expression"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.incompatible.arg.types.in.mref"_s,
			"incompatible parameter types in method reference"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.incompatible.bounds"_s,
			"inference variable {0} has incompatible bounds\n{1}\n{2}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.incompatible.descs.in.functional.intf"_s,
			"incompatible function descriptors found in {0} {1}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.incompatible.diff.ret"_s,
			"both define {0}({1}), but with unrelated return types"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.incompatible.eq.bounds"_s,
			"inference variable {0} has incompatible equality constraints {1}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.incompatible.ret.type.in.lambda"_s,
			"bad return type in lambda expression\n{0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.incompatible.ret.type.in.mref"_s,
			"bad return type in method reference\n{0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.incompatible.type.in.conditional"_s,
			"bad type in conditional expression\n{0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.incompatible.type.in.switch.expression"_s,
			"bad type in switch expression\n{0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.incompatible.unrelated.defaults"_s,
			"{0} {1} inherits unrelated defaults for {2}({3}) from types {4} and {5}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.incompatible.upper.bounds"_s,
			"inference variable {0} has incompatible upper bounds {1}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.inconvertible.types"_s,
			"{0} cannot be converted to {1}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.infer.arg.length.mismatch"_s,
			"cannot infer type-variable(s) {0}\n(actual and formal argument lists differ in length)"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.infer.no.conforming.assignment.exists"_s,
			"cannot infer type-variable(s) {0}\n(argument mismatch; {1})"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.infer.no.conforming.instance.exists"_s,
			"no instance(s) of type variable(s) {0} exist so that {1} conforms to {2}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.infer.varargs.argument.mismatch"_s,
			"cannot infer type-variable(s) {0}\n(varargs mismatch; {1})"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.inferred.do.not.conform.to.eq.bounds"_s,
			"inferred type does not conform to equality constraint(s)\ninferred: {0}\nequality constraints(s): {1}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.inferred.do.not.conform.to.lower.bounds"_s,
			"inferred type does not conform to lower bound(s)\ninferred: {0}\nlower bound(s): {1}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.inferred.do.not.conform.to.upper.bounds"_s,
			"inferred type does not conform to upper bound(s)\ninferred: {0}\nupper bound(s): {1}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.inner.cls"_s,
			"an inner class"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.intersection.type"_s,
			"INT#{0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.invalid.default.interface"_s,
			"default method found in version {0}.{1} classfile"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.invalid.generic.lambda.target"_s,
			"invalid functional descriptor for lambda expression\nmethod {0} in {1} {2} is generic"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.invalid.mref"_s,
			"invalid {0} reference\n{1}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.invalid.static.interface"_s,
			"static method found in version {0}.{1} classfile"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.is.a.type.variable"_s,
			"must not include type variables: {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.is.duplicated"_s,
			"must not contain duplicates: {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.kindname.annotation"_s,
			"@interface"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.kindname.class"_s,
			"class"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.kindname.constructor"_s,
			"constructor"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.kindname.enum"_s,
			"enum"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.kindname.instance.init"_s,
			"instance initializer"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.kindname.interface"_s,
			"interface"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.kindname.method"_s,
			"method"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.kindname.module"_s,
			"module"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.kindname.package"_s,
			"package"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.kindname.record"_s,
			"record"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.kindname.record.component"_s,
			"record component"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.kindname.static"_s,
			"static"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.kindname.static.init"_s,
			"static initializer"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.kindname.type.variable"_s,
			"type variable"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.kindname.type.variable.bound"_s,
			"bound of type variable"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.kindname.value"_s,
			"value"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.kindname.variable"_s,
			"variable"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.lambda"_s,
			"a lambda expression"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.local"_s,
			"local"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.local.array.missing.target"_s,
			"array initializer needs an explicit target-type"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.local.cant.infer.null"_s,
			"variable initializer is \'\'null\'\'"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.local.cant.infer.void"_s,
			"variable initializer is \'\'void\'\'"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.local.lambda.missing.target"_s,
			"lambda expression needs an explicit target-type"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.local.missing.init"_s,
			"cannot use \'\'var\'\' on variable without initializer"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.local.mref.missing.target"_s,
			"method reference needs an explicit target-type"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.local.self.ref"_s,
			"cannot use \'\'var\'\' on self-referencing variable"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.location"_s,
			"{0} {1}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.location.1"_s,
			"{0} {1} of type {2}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.locn.module_path"_s,
			"application module path"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.locn.module_source_path"_s,
			"module source path"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.locn.system_modules"_s,
			"system modules"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.locn.upgrade_module_path"_s,
			"upgrade module path"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.lower.bounds"_s,
			"lower bounds: {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.malformed.vararg.method"_s,
			"class file contains malformed variable arity method: {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.method.descriptor.invalid"_s,
			"method descriptor invalid for {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.method.must.be.public"_s,
			"accessor method must be public"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.missing.ret.val"_s,
			"missing return value"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.module.info.definition.expected"_s,
			"module-info definition expected"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.module.info.invalid.super.class"_s,
			"module-info with invalid super class"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.module.name.mismatch"_s,
			"module name {0} does not match expected name {1}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.module.non.zero.opens"_s,
			"open module {0} has non-zero opens_count"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.mref.infer.and.explicit.params"_s,
			"cannot use raw constructor reference with explicit type parameters for constructor"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.must.not.be.same.class"_s,
			"illegal self-reference in permits clause"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.must.not.be.supertype"_s,
			"illegal reference to supertype {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.no.abstracts"_s,
			"no abstract method found in {0} {1}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.no.args"_s,
			"no arguments"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.no.conforming.assignment.exists"_s,
			"argument mismatch; {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.no.suitable.functional.intf.inst"_s,
			"cannot infer functional interface descriptor for {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.no.unique.maximal.instance.exists"_s,
			"no unique maximal instance exists for type variable {0} with upper bounds {1}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.no.unique.minimal.instance.exists"_s,
			"no unique minimal instance exists for type variable {0} with lower bounds {1}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.non.static"_s,
			"non-static"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.not.a.functional.intf"_s,
			"{0} is not a functional interface"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.not.a.functional.intf.1"_s,
			"{0} is not a functional interface\n{1}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.not.an.intf.component"_s,
			"component type {0} is not an interface"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.not.applicable.method.found"_s,
			"#{0} not applicable method found: {1}\n({2})"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.not.def.access.class.intf.cant.access"_s,
			"{1}.{0} is defined in an inaccessible class or interface"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.not.def.access.class.intf.cant.access.reason"_s,
			"{1}.{0} in package {2} is not accessible\n({3})"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.not.def.access.does.not.read"_s,
			"package {1} is declared in module {2}, but module {0} does not read it"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.not.def.access.does.not.read.from.unnamed"_s,
			"package {0} is declared in module {1}, which is not in the module graph"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.not.def.access.does.not.read.unnamed"_s,
			"package {0} is declared in the unnamed module, but module {1} does not read it"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.not.def.access.not.exported"_s,
			"package {0} is declared in module {1}, which does not export it"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.not.def.access.not.exported.from.unnamed"_s,
			"package {0} is declared in module {1}, which does not export it"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.not.def.access.not.exported.to.module"_s,
			"package {0} is declared in module {1}, which does not export it to module {2}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.not.def.access.not.exported.to.module.from.unnamed"_s,
			"package {0} is declared in module {1}, which does not export it to the unnamed module"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.not.def.access.package.cant.access"_s,
			"{0} is not visible\n({2})"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.not.def.public.cant.access"_s,
			"{0} is not public in {1}; cannot be accessed from outside package"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.overridden.default"_s,
			"method {0} is overridden in {1}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.package.not.visible"_s,
			"package {0} is not visible\n({1})"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.partial.inst.sig"_s,
			"partially instantiated to: {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.possible.loss.of.precision"_s,
			"possible lossy conversion from {0} to {1}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.prob.found.req"_s,
			"incompatible types: {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.redundant.supertype"_s,
			"redundant interface {0} is extended by {1}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.ref.ambiguous"_s,
			"reference to {0} is ambiguous\nboth {1} {2} in {3} and {4} {5} in {6} match"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.report.access"_s,
			"{0} has {1} access in {2}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.resume.abort"_s,
			"R)esume, A)bort>"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.source.unavailable"_s,
			"(source unavailable)"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.stat.expr.expected"_s,
			"lambda body is not compatible with a void functional interface\n(consider using a block lambda body, or use a statement expression instead)"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.static"_s,
			"static"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.static.mref.with.targs"_s,
			"parameterized qualifier on static method reference"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.switch.expression.target.cant.be.void"_s,
			"target-type for switch expression cannot be void"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.synthetic.name.conflict"_s,
			"the symbol {0} conflicts with a compiler-synthesized symbol in {1}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.throws.clause.not.allowed.for.canonical.constructor"_s,
			"throws clause not allowed for {0} constructor"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.token.bad-symbol"_s,
			"<bad symbol>"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.token.character"_s,
			"<character>"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.token.double"_s,
			"<double>"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.token.end-of-input"_s,
			"<end of input>"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.token.float"_s,
			"<float>"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.token.identifier"_s,
			"<identifier>"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.token.integer"_s,
			"<integer>"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.token.long-integer"_s,
			"<long integer>"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.token.string"_s,
			"<string>"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.try.not.applicable.to.type"_s,
			"try-with-resources not applicable to variable type\n({0})"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.type.captureof"_s,
			"capture#{0} of {1}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.type.captureof.1"_s,
			"capture#{0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.type.must.be.identical.to.corresponding.record.component.type"_s,
			"type and arity must match that of the corresponding record component"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.type.none"_s,
			"<none>"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.type.null"_s,
			"<null>"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.type.parameter"_s,
			"type parameter {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.type.req.array.or.iterable"_s,
			"array or java.lang.Iterable"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.type.req.class"_s,
			"class"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.type.req.class.array"_s,
			"class or array"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.type.req.exact"_s,
			"class or interface without bounds"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.type.req.ref"_s,
			"reference"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.type.var"_s,
			"{0}#{1}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.unable.to.access.file"_s,
			"unable to access file: {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.unbound"_s,
			"unbound"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.unchecked.assign"_s,
			"unchecked conversion"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.unchecked.cast.to.type"_s,
			"unchecked cast"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.unchecked.clash.with"_s,
			"{0} in {1} overrides {2} in {3}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.unchecked.implement"_s,
			"{0} in {1} implements {2} in {3}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.unchecked.override"_s,
			"{0} in {1} overrides {2} in {3}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.undecl.type.var"_s,
			"undeclared type variable: {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.unexpected.const.pool.tag.at"_s,
			"unexpected constant pool tag: {0} at {1}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.unexpected.ret.val"_s,
			"unexpected return value"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.unicode.str.not.supported"_s,
			"unicode string in class file not supported"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.unnamed.module"_s,
			"unnamed module"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.unnamed.package"_s,
			"unnamed package"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.upper.bounds"_s,
			"lower bounds: {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.user.selected.completion.failure"_s,
			"user-selected completion failure by class name"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.var.and.explicit.not.allowed"_s,
			"cannot mix \'\'var\'\' and explicitly-typed parameters"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.var.and.implicit.not.allowed"_s,
			"cannot mix \'\'var\'\' and implicitly-typed parameters"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.varargs.argument.mismatch"_s,
			"varargs mismatch; {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.varargs.clash.with"_s,
			"{0} in {1} overrides {2} in {3}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.varargs.implement"_s,
			"{0} in {1} implements {2} in {3}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.varargs.override"_s,
			"{0} in {1} overrides {2} in {3}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.varargs.trustme.on.non.varargs.accessor"_s,
			"Accessor {0} is not a varargs method."_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.varargs.trustme.on.non.varargs.meth"_s,
			"Method {0} is not a varargs method."_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.varargs.trustme.on.reifiable.varargs"_s,
			"Varargs element type {0} is reifiable."_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.varargs.trustme.on.virtual.varargs"_s,
			"Instance method {0} is neither final nor private."_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.varargs.trustme.on.virtual.varargs.final.only"_s,
			"Instance method {0} is not final."_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.verbose.checking.attribution"_s,
			"[checking {0}]"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.verbose.classpath"_s,
			"[search path for class files: {0}]"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.verbose.loading"_s,
			"[loading {0}]"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.verbose.parsing.done"_s,
			"[parsing completed {0}ms]"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.verbose.parsing.started"_s,
			"[parsing started {0}]"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.verbose.sourcepath"_s,
			"[search path for source files: {0}]"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.verbose.total"_s,
			"[total {0}ms]"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.verbose.wrote.file"_s,
			"[wrote {0}]"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.version.not.available"_s,
			"(version info not available)"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.where.captured"_s,
			"{0} extends {1} super: {2} from capture of {3}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.where.captured.1"_s,
			"{0} extends {1} from capture of {3}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.where.description.captured"_s,
			"where {0} is a fresh type-variable:"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.where.description.captured.1"_s,
			"where {0} are fresh type-variables:"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.where.description.intersection"_s,
			"where {0} is an intersection type:"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.where.description.intersection.1"_s,
			"where {0} are intersection types:"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.where.description.typevar"_s,
			"where {0} is a type-variable:"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.where.description.typevar.1"_s,
			"where {0} are type-variables:"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.where.fresh.typevar"_s,
			"{0} extends {1}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.where.intersection"_s,
			"{0} extends {1}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.where.typevar"_s,
			"{0} extends {1} declared in {2} {3}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.where.typevar.1"_s,
			"{0} declared in {2} {3}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.wrong.number.type.args"_s,
			"wrong number of type arguments; required {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.wrong.version"_s,
			"class file has wrong version {0}.{1}, should be {2}.{3}"_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.x.print.processor.info"_s,
			"Processor {0} matches {1} and returns {2}."_s
		}),
		$$new($ObjectArray, {
			"compiler.misc.x.print.rounds"_s,
			"Round {0}:\n\tinput files: {1}\n\tannotations: {2}\n\tlast round: {3}"_s
		}),
		$$new($ObjectArray, {
			"compiler.note.compressed.diags"_s,
			"Some messages have been simplified; recompile with -Xdiags:verbose to get full output"_s
		}),
		$$new($ObjectArray, {
			"compiler.note.deferred.method.inst"_s,
			"Deferred instantiation of method {0}\ninstantiated signature: {1}\ntarget-type: {2}"_s
		}),
		$$new($ObjectArray, {
			"compiler.note.deprecated.filename"_s,
			"{0} uses or overrides a deprecated API."_s
		}),
		$$new($ObjectArray, {
			"compiler.note.deprecated.filename.additional"_s,
			"{0} has additional uses or overrides of a deprecated API."_s
		}),
		$$new($ObjectArray, {
			"compiler.note.deprecated.plural"_s,
			"Some input files use or override a deprecated API."_s
		}),
		$$new($ObjectArray, {
			"compiler.note.deprecated.plural.additional"_s,
			"Some input files additionally use or override a deprecated API."_s
		}),
		$$new($ObjectArray, {
			"compiler.note.deprecated.recompile"_s,
			"Recompile with -Xlint:deprecation for details."_s
		}),
		$$new($ObjectArray, {
			"compiler.note.lambda.stat"_s,
			"Translating lambda expression\nalternate metafactory = {0}\nsynthetic method = {1}"_s
		}),
		$$new($ObjectArray, {
			"compiler.note.method.ref.search.results.multi"_s,
			"{0} search results for {1}, with most specific {2}\napplicable candidates:"_s
		}),
		$$new($ObjectArray, {
			"compiler.note.mref.stat"_s,
			"Translating method reference\nalternate metafactory = {0}\n"_s
		}),
		$$new($ObjectArray, {
			"compiler.note.mref.stat.1"_s,
			"Translating method reference\nalternate metafactory = {0}\nbridge method = {1}"_s
		}),
		$$new($ObjectArray, {
			"compiler.note.multiple.elements"_s,
			"Multiple elements named \'\'{1}\'\' in modules \'\'{2}\'\' were found by javax.lang.model.util.Elements.{0}."_s
		}),
		$$new($ObjectArray, {
			"compiler.note.note"_s,
			"Note: "_s
		}),
		$$new($ObjectArray, {
			"compiler.note.preview.filename"_s,
			"{0} uses preview features of Java SE {1}."_s
		}),
		$$new($ObjectArray, {
			"compiler.note.preview.filename.additional"_s,
			"{0} has additional uses of preview features of Java SE {1}."_s
		}),
		$$new($ObjectArray, {
			"compiler.note.preview.plural"_s,
			"Some input files use preview features of Java SE {0}."_s
		}),
		$$new($ObjectArray, {
			"compiler.note.preview.plural.additional"_s,
			"Some input files additionally use preview features of Java SE {0}."_s
		}),
		$$new($ObjectArray, {
			"compiler.note.preview.recompile"_s,
			"Recompile with -Xlint:preview for details."_s
		}),
		$$new($ObjectArray, {
			"compiler.note.proc.messager"_s,
			"{0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.note.removal.filename"_s,
			"{0} uses or overrides a deprecated API that is marked for removal."_s
		}),
		$$new($ObjectArray, {
			"compiler.note.removal.filename.additional"_s,
			"{0} has additional uses or overrides of a deprecated API that is marked for removal."_s
		}),
		$$new($ObjectArray, {
			"compiler.note.removal.plural"_s,
			"Some input files use or override a deprecated API that is marked for removal."_s
		}),
		$$new($ObjectArray, {
			"compiler.note.removal.plural.additional"_s,
			"Some input files additionally use or override a deprecated API that is marked for removal."_s
		}),
		$$new($ObjectArray, {
			"compiler.note.removal.recompile"_s,
			"Recompile with -Xlint:removal for details."_s
		}),
		$$new($ObjectArray, {
			"compiler.note.unchecked.filename"_s,
			"{0} uses unchecked or unsafe operations."_s
		}),
		$$new($ObjectArray, {
			"compiler.note.unchecked.filename.additional"_s,
			"{0} has additional unchecked or unsafe operations."_s
		}),
		$$new($ObjectArray, {
			"compiler.note.unchecked.plural"_s,
			"Some input files use unchecked or unsafe operations."_s
		}),
		$$new($ObjectArray, {
			"compiler.note.unchecked.plural.additional"_s,
			"Some input files additionally use unchecked or unsafe operations."_s
		}),
		$$new($ObjectArray, {
			"compiler.note.unchecked.recompile"_s,
			"Recompile with -Xlint:unchecked for details."_s
		}),
		$$new($ObjectArray, {
			"compiler.note.verbose.l2m.deduplicate"_s,
			"deduplicating lambda implementation method {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.note.verbose.resolve.multi"_s,
			"resolving method {0} in type {1} to candidate {2}\nphase: {3}\nwith actuals: {4}\nwith type-args: {5}\ncandidates:"_s
		}),
		$$new($ObjectArray, {
			"compiler.note.verbose.resolve.multi.1"_s,
			"erroneous resolution for method {0} in type {1}\nphase: {3}\nwith actuals: {4}\nwith type-args: {5}\ncandidates:"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.access.to.member.from.serializable.element"_s,
			"access to member {0} from serializable element can be publicly accessible to untrusted code"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.access.to.member.from.serializable.lambda"_s,
			"access to member {0} from serializable lambda can be publicly accessible to untrusted code"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.addopens.ignored"_s,
			"--add-opens has no effect at compile time"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.annotation.method.not.found"_s,
			"Cannot find annotation method \'\'{1}()\'\' in type \'\'{0}\'\'"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.annotation.method.not.found.reason"_s,
			"Cannot find annotation method \'\'{1}()\'\' in type \'\'{0}\'\': {2}"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.attempt.to.synchronize.on.instance.of.value.based.class"_s,
			"attempt to synchronize on an instance of a value-based class"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.auxiliary.class.accessed.from.outside.of.its.source.file"_s,
			"auxiliary class {0} in {1} should not be accessed from outside its own source file"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.bad.name.for.option"_s,
			"bad name in value for {0} option: \'\'{1}\'\'"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.big.major.version"_s,
			"{0}: major version {1} is newer than {2}, the highest major version supported by this compiler.\nIt is recommended that the compiler be upgraded."_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.constant.SVUID"_s,
			"serialVersionUID must be constant in class {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.declared.using.preview"_s,
			"{0} {1} is declared using a preview feature, which may be removed in a future release."_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.deprecated.annotation.has.no.effect"_s,
			"@Deprecated annotation has no effect on this {0} declaration"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.diamond.redundant.args"_s,
			"Redundant type arguments in new expression (use diamond operator instead)."_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.dir.path.element.not.directory"_s,
			"bad path element \"{0}\": not a directory"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.dir.path.element.not.found"_s,
			"bad path element \"{0}\": no such directory"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.div.zero"_s,
			"division by zero"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.doclint.not.available"_s,
			"No service provider for doclint is available"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.empty.if"_s,
			"empty statement after if"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.file.from.future"_s,
			"Modification date is in the future for file {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.finally.cannot.complete"_s,
			"finally clause cannot complete normally"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.forward.ref"_s,
			"reference to variable \'\'{0}\'\' before it has been initialized"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.future.attr"_s,
			"{0} attribute introduced in version {1}.{2} class files is ignored in version {3}.{4} class files"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.has.been.deprecated"_s,
			"{0} in {1} has been deprecated"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.has.been.deprecated.for.removal"_s,
			"{0} in {1} has been deprecated and marked for removal"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.has.been.deprecated.for.removal.module"_s,
			"module {0} has been deprecated and marked for removal"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.has.been.deprecated.module"_s,
			"module {0} has been deprecated"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.illegal.char.for.encoding"_s,
			"unmappable character for encoding {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.illegal.ref.to.restricted.type"_s,
			"illegal reference to restricted type \'\'{0}\'\'"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.improper.SVUID"_s,
			"serialVersionUID must be declared static final in class {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.inconsistent.white.space.indentation"_s,
			"inconsistent white space indentation"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.incubating.modules"_s,
			"using incubating module(s): {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.inexact.non-varargs.call"_s,
			"non-varargs call of varargs method with inexact argument type for last parameter;\ncast to {0} for a varargs call\ncast to {1} for a non-varargs call and to suppress this warning"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.invalid.archive.file"_s,
			"Unexpected file on path: {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.invalid.path"_s,
			"Invalid filename: {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.invalid.yield"_s,
			"\'\'yield\'\' may become a restricted identifier in a future release\n(to invoke a method called yield, qualify the yield with a receiver or type name)"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.is.preview"_s,
			"{0} is a preview API and may be removed in a future release."_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.is.preview.reflective"_s,
			"{0} is a reflective preview API and may be removed in a future release."_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.leaks.not.accessible"_s,
			"{0} {1} in module {2} is not accessible to clients that require this module"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.leaks.not.accessible.not.required.transitive"_s,
			"{0} {1} in module {2} is not indirectly exported using \'requires transitive\'"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.leaks.not.accessible.unexported"_s,
			"{0} {1} in module {2} is not exported"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.leaks.not.accessible.unexported.qualified"_s,
			"{0} {1} in module {2} may not be visible to all clients that require this module"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.lintOption"_s,
			"[{0}] "_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.local.redundant.type"_s,
			"Redundant type for local variable (replace explicit type with \'\'var\'\')."_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.locn.unknown.file.on.module.path"_s,
			"unknown file on module path: {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.long.SVUID"_s,
			"serialVersionUID must be of type long in class {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.method.redundant.typeargs"_s,
			"Redundant type arguments in method call."_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.missing-explicit-ctor"_s,
			"class {0} in exported package {1} declares no explicit constructors, thereby exposing a default constructor to clients of module {2}"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.missing.SVUID"_s,
			"serializable class {0} has no definition of serialVersionUID"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.missing.deprecated.annotation"_s,
			"deprecated item is not annotated with @Deprecated"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.module.for.option.not.found"_s,
			"module name in {0} option not found: {1}"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.module.not.found"_s,
			"module not found: {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.option.obsolete.source"_s,
			"source value {0} is obsolete and will be removed in a future release"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.option.obsolete.suppression"_s,
			"To suppress warnings about obsolete options, use -Xlint:-options."_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.option.obsolete.target"_s,
			"target value {0} is obsolete and will be removed in a future release"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.option.parameters.unsupported"_s,
			"-parameters is not supported for target value {0}. Use {1} or later."_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.outdir.is.in.exploded.module"_s,
			"the output directory is within an exploded module: {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.override.bridge"_s,
			"{0}; overridden method is a bridge method"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.override.equals.but.not.hashcode"_s,
			"Class {0} overrides equals, but neither it nor any superclass overrides hashCode method"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.override.unchecked.ret"_s,
			"{0}\nreturn type requires unchecked conversion from {1} to {2}"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.override.unchecked.thrown"_s,
			"{0}\noverridden method does not throw {1}"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.override.varargs.extra"_s,
			"{0}; overriding method is missing \'\'...\'\'"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.override.varargs.missing"_s,
			"{0}; overridden method has no \'\'...\'\'"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.package.empty.or.not.found"_s,
			"package is empty or does not exist: {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.path.element.not.found"_s,
			"bad path element \"{0}\": no such file or directory"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.pkg-info.already.seen"_s,
			"a package-info.java file has already been seen for package {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.poor.choice.for.module.name"_s,
			"module name component {0} should avoid terminal digits"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.position.overflow"_s,
			"Position encoding overflows at line {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.possible.fall-through.into.case"_s,
			"possible fall-through into case"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.potential.lambda.found"_s,
			"This anonymous inner class creation can be turned into a lambda expression."_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.potentially.ambiguous.overload"_s,
			"{0} in {1} is potentially ambiguous with {2} in {3}"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.preview.feature.use"_s,
			"{0} is a preview feature and may be removed in a future release."_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.preview.feature.use.classfile"_s,
			"class file for {0} uses preview features of Java SE {1}."_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.preview.feature.use.plural"_s,
			"{0} are a preview feature and may be removed in a future release."_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.prob.found.req"_s,
			"{0}\nrequired: {2}\nfound:    {1}"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.proc.annotations.without.processors"_s,
			"No processor claimed any of these annotations: {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.proc.duplicate.option.name"_s,
			"Duplicate supported option \'\'{0}\'\' returned by annotation processor \'\'{1}\'\'"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.proc.duplicate.supported.annotation"_s,
			"Duplicate supported annotation type \'\'{0}\'\' returned by annotation processor \'\'{1}\'\'"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.proc.file.create.last.round"_s,
			"File for type \'\'{0}\'\' created in the last round will not be subject to annotation processing."_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.proc.file.reopening"_s,
			"Attempt to create a file for \'\'{0}\'\' multiple times"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.proc.illegal.file.name"_s,
			"Cannot create file for illegal name \'\'{0}\'\'."_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.proc.malformed.supported.string"_s,
			"Malformed string \'\'{0}\'\' for a supported annotation type returned by processor \'\'{1}\'\'"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.proc.messager"_s,
			"{0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.proc.package.does.not.exist"_s,
			"package {0} does not exist"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.proc.proc-only.requested.no.procs"_s,
			"Annotation processing without compilation requested but no processors were found."_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.proc.processor.incompatible.source.version"_s,
			"Supported source version \'\'{0}\'\' from annotation processor \'\'{1}\'\' less than -source \'\'{2}\'\'"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.proc.redundant.types.with.wildcard"_s,
			"Annotation processor \'\'{0}\'\' redundantly supports both \'\'*\'\' and other annotation types"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.proc.suspicious.class.name"_s,
			"Creating file for a type whose name ends in {1}: \'\'{0}\'\'"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.proc.type.already.exists"_s,
			"A file for type \'\'{0}\'\' already exists on the sourcepath or classpath"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.proc.type.recreate"_s,
			"Attempt to create a file for type \'\'{0}\'\' multiple times"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.proc.unclosed.type.files"_s,
			"Unclosed files for the types \'\'{0}\'\'; these types will not undergo annotation processing"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.proc.unmatched.processor.options"_s,
			"The following options were not recognized by any processor: \'\'{0}\'\'"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.proc.use.implicit"_s,
			"Implicitly compiled files were not subject to annotation processing.\nUse -implicit to specify a policy for implicit compilation."_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.proc.use.proc.or.implicit"_s,
			"Implicitly compiled files were not subject to annotation processing.\nUse -proc:none to disable annotation processing or -implicit to specify a policy for implicit compilation."_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.profile.target.conflict"_s,
			"profile {0} is not valid for target release {1}"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.raw.class.use"_s,
			"found raw type: {0}\nmissing type arguments for generic class {1}"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.redundant.cast"_s,
			"redundant cast to {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.requires.automatic"_s,
			"requires directive for an automatic module"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.requires.transitive.automatic"_s,
			"requires transitive directive for an automatic module"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.restricted.type.not.allowed"_s,
			"as of release {1}, \'\'{0}\'\' is a restricted type name and cannot be used for type declarations or as the element type of an array"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.restricted.type.not.allowed.preview"_s,
			"\'\'{0}\'\' may become a restricted type name in a future release and may be unusable for type declarations or as the element type of an array"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.self.ref"_s,
			"self-reference in initializer of variable \'\'{0}\'\'"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.service.provided.but.not.exported.or.used"_s,
			"service interface provided but not exported or used"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.source.no.bootclasspath"_s,
			"bootstrap class path not set in conjunction with -source {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.source.no.system.modules.path"_s,
			"system modules path not set in conjunction with -source {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.source.target.conflict"_s,
			"source release {0} requires target release {1}"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.static.not.qualified.by.type"_s,
			"static {0} should be qualified by type name, {1}, instead of by an expression"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.strictfp"_s,
			"as of release 17, all floating-point expressions are evaluated strictly and \'\'strictfp\'\' is not required"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.sun.proprietary"_s,
			"{0} is internal proprietary API and may be removed in a future release"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.target.default.source.conflict"_s,
			"target release {0} conflicts with default source release {1}"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.trailing.white.space.will.be.removed"_s,
			"trailing white space will be removed"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.try.explicit.close.call"_s,
			"explicit call to close() on an auto-closeable resource"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.try.resource.not.referenced"_s,
			"auto-closeable resource {0} is never referenced in body of corresponding try statement"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.try.resource.throws.interrupted.exc"_s,
			"auto-closeable resource {0} has a member method close() that could throw InterruptedException"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.unchecked.assign"_s,
			"unchecked assignment: {0} to {1}"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.unchecked.assign.to.var"_s,
			"unchecked assignment to variable {0} as member of raw type {1}"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.unchecked.call.mbr.of.raw.type"_s,
			"unchecked call to {0} as a member of the raw type {1}"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.unchecked.cast.to.type"_s,
			"unchecked cast to type {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.unchecked.generic.array.creation"_s,
			"unchecked generic array creation for varargs parameter of type {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.unchecked.meth.invocation.applied"_s,
			"unchecked method invocation: {0} {1} in {4} {5} is applied to given types\nrequired: {2}\nfound:    {3}"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.unchecked.varargs.non.reifiable.type"_s,
			"Possible heap pollution from parameterized vararg type {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.underscore.as.identifier"_s,
			"as of release 9, \'\'_\'\' is a keyword, and may not be used as an identifier"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.unexpected.archive.file"_s,
			"Unexpected extension for archive file: {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.unknown.enum.constant"_s,
			"unknown enum constant {1}.{2}"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.unknown.enum.constant.reason"_s,
			"unknown enum constant {1}.{2}\nreason: {3}"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.unreachable.catch"_s,
			"unreachable catch clause\nthrown type {0} has already been caught"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.unreachable.catch.1"_s,
			"unreachable catch clause\nthrown types {0} have already been caught"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.varargs.redundant.trustme.anno"_s,
			"Redundant {0} annotation. {1}"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.varargs.unsafe.use.varargs.param"_s,
			"Varargs method could cause heap pollution from non-reifiable varargs parameter {0}"_s
		}),
		$$new($ObjectArray, {
			"compiler.warn.warning"_s,
			"warning: "_s
		})
	});
}

compiler::compiler() {
}

$Class* compiler::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(compiler, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(compiler, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.tools.javac.resources.compiler",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(compiler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(compiler);
	});
	return class$;
}

$Class* compiler::class$ = nullptr;

				} // resources
			} // javac
		} // tools
	} // sun
} // com