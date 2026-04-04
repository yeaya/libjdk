#include <sun/security/tools/jarsigner/Resources.h>
#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace sun {
	namespace security {
		namespace tools {
			namespace jarsigner {

$ObjectArray2* Resources::contents = nullptr;

void Resources::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* Resources::getContents() {
	return Resources::contents;
}

void Resources::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(Resources::contents, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"SPACE"_s,
			" "_s
		}),
		$$new($ObjectArray, {
			"6SPACE"_s,
			"      "_s
		}),
		$$new($ObjectArray, {
			"COMMA"_s,
			", "_s
		}),
		$$new($ObjectArray, {
			"provclass.not.a.provider"_s,
			"%s not a provider"_s
		}),
		$$new($ObjectArray, {
			"provider.name.not.found"_s,
			"Provider named \"%s\" not found"_s
		}),
		$$new($ObjectArray, {
			"provider.class.not.found"_s,
			"Provider \"%s\" not found"_s
		}),
		$$new($ObjectArray, {
			"jarsigner.error."_s,
			"jarsigner error: "_s
		}),
		$$new($ObjectArray, {
			"Illegal.option."_s,
			"Illegal option: "_s
		}),
		$$new($ObjectArray, {
			"This.option.is.forremoval"_s,
			"This option is deprecated and will be removed in a future release: "_s
		}),
		$$new($ObjectArray, {
			".keystore.must.be.NONE.if.storetype.is.{0}"_s,
			"-keystore must be NONE if -storetype is {0}"_s
		}),
		$$new($ObjectArray, {
			".keypass.can.not.be.specified.if.storetype.is.{0}"_s,
			"-keypass can not be specified if -storetype is {0}"_s
		}),
		$$new($ObjectArray, {
			"If.protected.is.specified.then.storepass.and.keypass.must.not.be.specified"_s,
			"If -protected is specified, then -storepass and -keypass must not be specified"_s
		}),
		$$new($ObjectArray, {
			"If.keystore.is.not.password.protected.then.storepass.and.keypass.must.not.be.specified"_s,
			"If keystore is not password protected, then -storepass and -keypass must not be specified"_s
		}),
		$$new($ObjectArray, {
			"Usage.jarsigner.options.jar.file.alias"_s,
			"Usage: jarsigner [options] jar-file alias"_s
		}),
		$$new($ObjectArray, {
			".jarsigner.verify.options.jar.file.alias."_s,
			"       jarsigner -verify [options] jar-file [alias...]"_s
		}),
		$$new($ObjectArray, {
			".keystore.url.keystore.location"_s,
			"[-keystore <url>]           keystore location"_s
		}),
		$$new($ObjectArray, {
			".storepass.password.password.for.keystore.integrity"_s,
			"[-storepass <password>]     password for keystore integrity"_s
		}),
		$$new($ObjectArray, {
			".storetype.type.keystore.type"_s,
			"[-storetype <type>]         keystore type"_s
		}),
		$$new($ObjectArray, {
			".keypass.password.password.for.private.key.if.different."_s,
			"[-keypass <password>]       password for private key (if different)"_s
		}),
		$$new($ObjectArray, {
			".certchain.file.name.of.alternative.certchain.file"_s,
			"[-certchain <file>]         name of alternative certchain file"_s
		}),
		$$new($ObjectArray, {
			".sigfile.file.name.of.SF.DSA.file"_s,
			"[-sigfile <file>]           name of .SF/.DSA file"_s
		}),
		$$new($ObjectArray, {
			".signedjar.file.name.of.signed.JAR.file"_s,
			"[-signedjar <file>]         name of signed JAR file"_s
		}),
		$$new($ObjectArray, {
			".digestalg.algorithm.name.of.digest.algorithm"_s,
			"[-digestalg <algorithm>]    name of digest algorithm"_s
		}),
		$$new($ObjectArray, {
			".sigalg.algorithm.name.of.signature.algorithm"_s,
			"[-sigalg <algorithm>]       name of signature algorithm"_s
		}),
		$$new($ObjectArray, {
			".verify.verify.a.signed.JAR.file"_s,
			"[-verify]                   verify a signed JAR file"_s
		}),
		$$new($ObjectArray, {
			".verbose.suboptions.verbose.output.when.signing.verifying."_s,
			"[-verbose[:suboptions]]     verbose output when signing/verifying."_s
		}),
		$$new($ObjectArray, {
			".suboptions.can.be.all.grouped.or.summary"_s,
			"                            suboptions can be all, grouped or summary"_s
		}),
		$$new($ObjectArray, {
			".certs.display.certificates.when.verbose.and.verifying"_s,
			"[-certs]                    display certificates when verbose and verifying"_s
		}),
		$$new($ObjectArray, {
			".certs.revocation.check"_s,
			"[-revCheck]                 Enable certificate revocation check"_s
		}),
		$$new($ObjectArray, {
			".tsa.url.location.of.the.Timestamping.Authority"_s,
			"[-tsa <url>]                location of the Timestamping Authority"_s
		}),
		$$new($ObjectArray, {
			".tsacert.alias.public.key.certificate.for.Timestamping.Authority"_s,
			"[-tsacert <alias>]          public key certificate for Timestamping Authority"_s
		}),
		$$new($ObjectArray, {
			".tsapolicyid.tsapolicyid.for.Timestamping.Authority"_s,
			"[-tsapolicyid <oid>]        TSAPolicyID for Timestamping Authority"_s
		}),
		$$new($ObjectArray, {
			".tsadigestalg.algorithm.of.digest.data.in.timestamping.request"_s,
			"[-tsadigestalg <algorithm>] algorithm of digest data in timestamping request"_s
		}),
		$$new($ObjectArray, {
			".altsigner.class.class.name.of.an.alternative.signing.mechanism"_s,
			"[-altsigner <class>]        class name of an alternative signing mechanism\n                            (This option is deprecated and will be removed in a future release.)"_s
		}),
		$$new($ObjectArray, {
			".altsignerpath.pathlist.location.of.an.alternative.signing.mechanism"_s,
			"[-altsignerpath <pathlist>] location of an alternative signing mechanism\n                            (This option is deprecated and will be removed in a future release.)"_s
		}),
		$$new($ObjectArray, {
			".internalsf.include.the.SF.file.inside.the.signature.block"_s,
			"[-internalsf]               include the .SF file inside the signature block"_s
		}),
		$$new($ObjectArray, {
			".sectionsonly.don.t.compute.hash.of.entire.manifest"_s,
			"[-sectionsonly]             don\'t compute hash of entire manifest"_s
		}),
		$$new($ObjectArray, {
			".protected.keystore.has.protected.authentication.path"_s,
			"[-protected]                keystore has protected authentication path"_s
		}),
		$$new($ObjectArray, {
			".providerName.name.provider.name"_s,
			"[-providerName <name>]      provider name"_s
		}),
		$$new($ObjectArray, {
			".add.provider.option"_s,
			"[-addprovider <name>        add security provider by name (e.g. SunPKCS11)"_s
		}),
		$$new($ObjectArray, {
			".providerArg.option.1"_s,
			"  [-providerArg <arg>]] ... configure argument for -addprovider"_s
		}),
		$$new($ObjectArray, {
			".providerClass.option"_s,
			"[-providerClass <class>     add security provider by fully-qualified class name"_s
		}),
		$$new($ObjectArray, {
			".providerArg.option.2"_s,
			"  [-providerArg <arg>]] ... configure argument for -providerClass"_s
		}),
		$$new($ObjectArray, {
			".strict.treat.warnings.as.errors"_s,
			"[-strict]                   treat warnings as errors"_s
		}),
		$$new($ObjectArray, {
			".conf.url.specify.a.pre.configured.options.file"_s,
			"[-conf <url>]               specify a pre-configured options file"_s
		}),
		$$new($ObjectArray, {
			".print.this.help.message"_s,
			"[-? -h --help]              Print this help message"_s
		}),
		$$new($ObjectArray, {
			"Option.lacks.argument"_s,
			"Option lacks argument"_s
		}),
		$$new($ObjectArray, {
			"Please.type.jarsigner.help.for.usage"_s,
			"Please type jarsigner --help for usage"_s
		}),
		$$new($ObjectArray, {
			"Please.specify.jarfile.name"_s,
			"Please specify jarfile name"_s
		}),
		$$new($ObjectArray, {
			"Please.specify.alias.name"_s,
			"Please specify alias name"_s
		}),
		$$new($ObjectArray, {
			"Only.one.alias.can.be.specified"_s,
			"Only one alias can be specified"_s
		}),
		$$new($ObjectArray, {
			"This.jar.contains.signed.entries.which.is.not.signed.by.the.specified.alias.es."_s,
			"This jar contains signed entries which are not signed by the specified alias(es)."_s
		}),
		$$new($ObjectArray, {
			"This.jar.contains.signed.entries.that.s.not.signed.by.alias.in.this.keystore."_s,
			"This jar contains signed entries that are not signed by alias in this keystore."_s
		}),
		$$new($ObjectArray, {
			"s"_s,
			"s"_s
		}),
		$$new($ObjectArray, {
			"m"_s,
			"m"_s
		}),
		$$new($ObjectArray, {
			"k"_s,
			"k"_s
		}),
		$$new($ObjectArray, {
			"X"_s,
			"X"_s
		}),
		$$new($ObjectArray, {
			"q"_s,
			"?"_s
		}),
		$$new($ObjectArray, {
			".and.d.more."_s,
			"(and %d more)"_s
		}),
		$$new($ObjectArray, {
			".s.signature.was.verified."_s,
			"  s = signature was verified "_s
		}),
		$$new($ObjectArray, {
			".m.entry.is.listed.in.manifest"_s,
			"  m = entry is listed in manifest"_s
		}),
		$$new($ObjectArray, {
			".k.at.least.one.certificate.was.found.in.keystore"_s,
			"  k = at least one certificate was found in keystore"_s
		}),
		$$new($ObjectArray, {
			".X.not.signed.by.specified.alias.es."_s,
			"  X = not signed by specified alias(es)"_s
		}),
		$$new($ObjectArray, {
			".q.unsigned.entry"_s,
			"  ? = unsigned entry"_s
		}),
		$$new($ObjectArray, {
			"no.manifest."_s,
			"no manifest."_s
		}),
		$$new($ObjectArray, {
			".Signature.related.entries."_s,
			"(Signature related entries)"_s
		}),
		$$new($ObjectArray, {
			".Unsigned.entries."_s,
			"(Unsigned entries)"_s
		}),
		$$new($ObjectArray, {
			".Directory.entries."_s,
			"(Directory entries)"_s
		}),
		$$new($ObjectArray, {
			"jar.is.unsigned"_s,
			"jar is unsigned."_s
		}),
		$$new($ObjectArray, {
			"jar.treated.unsigned"_s,
			"WARNING: Signature is either not parsable or not verifiable, and the jar will be treated as unsigned. For more information, re-run jarsigner with debug enabled (-J-Djava.security.debug=jar)."_s
		}),
		$$new($ObjectArray, {
			"jar.treated.unsigned.see.weak"_s,
			"The jar will be treated as unsigned, because it is signed with a weak algorithm that is now disabled.\n\nRe-run jarsigner with the -verbose option for more details."_s
		}),
		$$new($ObjectArray, {
			"jar.treated.unsigned.see.weak.verbose"_s,
			"WARNING: The jar will be treated as unsigned, because it is signed with a weak algorithm that is now disabled by the security property:"_s
		}),
		$$new($ObjectArray, {
			"jar.signed."_s,
			"jar signed."_s
		}),
		$$new($ObjectArray, {
			"jar.signed.with.signer.errors."_s,
			"jar signed, with signer errors."_s
		}),
		$$new($ObjectArray, {
			"jar.verified."_s,
			"jar verified."_s
		}),
		$$new($ObjectArray, {
			"jar.verified.with.signer.errors."_s,
			"jar verified, with signer errors."_s
		}),
		$$new($ObjectArray, {
			"history.with.ts"_s,
			"- Signed by \"%1$s\"\n    Digest algorithm: %2$s\n    Signature algorithm: %3$s, %4$s\n  Timestamped by \"%6$s\" on %5$tc\n    Timestamp digest algorithm: %7$s\n    Timestamp signature algorithm: %8$s, %9$s"_s
		}),
		$$new($ObjectArray, {
			"history.without.ts"_s,
			"- Signed by \"%1$s\"\n    Digest algorithm: %2$s\n    Signature algorithm: %3$s, %4$s"_s
		}),
		$$new($ObjectArray, {
			"history.unparsable"_s,
			"- Unparsable signature-related file %s"_s
		}),
		$$new($ObjectArray, {
			"history.nosf"_s,
			"- Missing signature-related file META-INF/%s.SF"_s
		}),
		$$new($ObjectArray, {
			"history.nobk"_s,
			"- Missing block file for signature-related file META-INF/%s.SF"_s
		}),
		$$new($ObjectArray, {
			"with.weak"_s,
			"%s (weak)"_s
		}),
		$$new($ObjectArray, {
			"with.disabled"_s,
			"%s (disabled)"_s
		}),
		$$new($ObjectArray, {
			"key.bit"_s,
			"%d-bit key"_s
		}),
		$$new($ObjectArray, {
			"key.bit.weak"_s,
			"%d-bit key (weak)"_s
		}),
		$$new($ObjectArray, {
			"key.bit.disabled"_s,
			"%d-bit key (disabled)"_s
		}),
		$$new($ObjectArray, {
			"unknown.size"_s,
			"unknown size"_s
		}),
		$$new($ObjectArray, {
			"extra.attributes.detected"_s,
			"POSIX file permission and/or symlink attributes detected. These attributes are ignored when signing and are not protected by the signature."_s
		}),
		$$new($ObjectArray, {
			"jarsigner."_s,
			"jarsigner: "_s
		}),
		$$new($ObjectArray, {
			"signature.filename.must.consist.of.the.following.characters.A.Z.0.9.or."_s,
			"signature filename must consist of the following characters: A-Z, 0-9, _ or -"_s
		}),
		$$new($ObjectArray, {
			"unable.to.open.jar.file."_s,
			"unable to open jar file: "_s
		}),
		$$new($ObjectArray, {
			"unable.to.create."_s,
			"unable to create: "_s
		}),
		$$new($ObjectArray, {
			".adding."_s,
			"   adding: "_s
		}),
		$$new($ObjectArray, {
			".updating."_s,
			" updating: "_s
		}),
		$$new($ObjectArray, {
			".signing."_s,
			"  signing: "_s
		}),
		$$new($ObjectArray, {
			"attempt.to.rename.signedJarFile.to.jarFile.failed"_s,
			"attempt to rename {0} to {1} failed"_s
		}),
		$$new($ObjectArray, {
			"attempt.to.rename.jarFile.to.origJar.failed"_s,
			"attempt to rename {0} to {1} failed"_s
		}),
		$$new($ObjectArray, {
			"unable.to.sign.jar."_s,
			"unable to sign jar: "_s
		}),
		$$new($ObjectArray, {
			"Enter.Passphrase.for.keystore."_s,
			"Enter Passphrase for keystore: "_s
		}),
		$$new($ObjectArray, {
			"keystore.load."_s,
			"keystore load: "_s
		}),
		$$new($ObjectArray, {
			"certificate.exception."_s,
			"certificate exception: "_s
		}),
		$$new($ObjectArray, {
			"unable.to.instantiate.keystore.class."_s,
			"unable to instantiate keystore class: "_s
		}),
		$$new($ObjectArray, {
			"Certificate.chain.not.found.for.alias.alias.must.reference.a.valid.KeyStore.key.entry.containing.a.private.key.and"_s,
			"Certificate chain not found for: {0}.  {1} must reference a valid KeyStore key entry containing a private key and corresponding public key certificate chain."_s
		}),
		$$new($ObjectArray, {
			"File.specified.by.certchain.does.not.exist"_s,
			"File specified by -certchain does not exist"_s
		}),
		$$new($ObjectArray, {
			"Cannot.restore.certchain.from.file.specified"_s,
			"Cannot restore certchain from file specified"_s
		}),
		$$new($ObjectArray, {
			"Certificate.chain.not.found.in.the.file.specified."_s,
			"Certificate chain not found in the file specified."_s
		}),
		$$new($ObjectArray, {
			"found.non.X.509.certificate.in.signer.s.chain"_s,
			"found non-X.509 certificate in signer\'s chain"_s
		}),
		$$new($ObjectArray, {
			"Enter.key.password.for.alias."_s,
			"Enter key password for {0}: "_s
		}),
		$$new($ObjectArray, {
			"unable.to.recover.key.from.keystore"_s,
			"unable to recover key from keystore"_s
		}),
		$$new($ObjectArray, {
			"key.associated.with.alias.not.a.private.key"_s,
			"key associated with {0} not a private key"_s
		}),
		$$new($ObjectArray, {
			"you.must.enter.key.password"_s,
			"you must enter key password"_s
		}),
		$$new($ObjectArray, {
			"unable.to.read.password."_s,
			"unable to read password: "_s
		}),
		$$new($ObjectArray, {
			"certificate.is.valid.from"_s,
			"certificate is valid from {0} to {1}"_s
		}),
		$$new($ObjectArray, {
			"certificate.expired.on"_s,
			"certificate expired on {0}"_s
		}),
		$$new($ObjectArray, {
			"certificate.is.not.valid.until"_s,
			"certificate is not valid until {0}"_s
		}),
		$$new($ObjectArray, {
			"certificate.will.expire.on"_s,
			"certificate will expire on {0}"_s
		}),
		$$new($ObjectArray, {
			".Invalid.certificate.chain."_s,
			"[Invalid certificate chain: "_s
		}),
		$$new($ObjectArray, {
			".Invalid.TSA.certificate.chain."_s,
			"[Invalid TSA certificate chain: "_s
		}),
		$$new($ObjectArray, {
			"requesting.a.signature.timestamp"_s,
			"requesting a signature timestamp"_s
		}),
		$$new($ObjectArray, {
			"TSA.location."_s,
			"TSA location: "_s
		}),
		$$new($ObjectArray, {
			"TSA.certificate."_s,
			"TSA certificate: "_s
		}),
		$$new($ObjectArray, {
			"no.response.from.the.Timestamping.Authority."_s,
			"no response from the Timestamping Authority. When connecting from behind a firewall an HTTP or HTTPS proxy may need to be specified. Supply the following options to jarsigner:"_s
		}),
		$$new($ObjectArray, {
			"or"_s,
			"or"_s
		}),
		$$new($ObjectArray, {
			"Certificate.not.found.for.alias.alias.must.reference.a.valid.KeyStore.entry.containing.an.X.509.public.key.certificate.for.the"_s,
			"Certificate not found for: {0}.  {1} must reference a valid KeyStore entry containing an X.509 public key certificate for the Timestamping Authority."_s
		}),
		$$new($ObjectArray, {
			"using.an.alternative.signing.mechanism"_s,
			"using an alternative signing mechanism"_s
		}),
		$$new($ObjectArray, {
			"entry.was.signed.on"_s,
			"entry was signed on {0}"_s
		}),
		$$new($ObjectArray, {
			"Warning."_s,
			"Warning: "_s
		}),
		$$new($ObjectArray, {
			"Error."_s,
			"Error: "_s
		}),
		$$new($ObjectArray, {
			"...Signer"_s,
			">>> Signer"_s
		}),
		$$new($ObjectArray, {
			"...TSA"_s,
			">>> TSA"_s
		}),
		$$new($ObjectArray, {
			"trusted.certificate"_s,
			"trusted certificate"_s
		}),
		$$new($ObjectArray, {
			"This.jar.contains.unsigned.entries.which.have.not.been.integrity.checked."_s,
			"This jar contains unsigned entries which have not been integrity-checked. "_s
		}),
		$$new($ObjectArray, {
			"This.jar.contains.entries.whose.signer.certificate.has.expired."_s,
			"This jar contains entries whose signer certificate has expired. "_s
		}),
		$$new($ObjectArray, {
			"This.jar.contains.entries.whose.signer.certificate.will.expire.within.six.months."_s,
			"This jar contains entries whose signer certificate will expire within six months. "_s
		}),
		$$new($ObjectArray, {
			"This.jar.contains.entries.whose.signer.certificate.is.not.yet.valid."_s,
			"This jar contains entries whose signer certificate is not yet valid. "_s
		}),
		$$new($ObjectArray, {
			"This.jar.contains.entries.whose.signer.certificate.is.self.signed."_s,
			"This jar contains entries whose signer certificate is self-signed."_s
		}),
		$$new($ObjectArray, {
			"Re.run.with.the.verbose.and.certs.options.for.more.details."_s,
			"Re-run with the -verbose and -certs options for more details."_s
		}),
		$$new($ObjectArray, {
			"The.signer.certificate.has.expired."_s,
			"The signer certificate has expired."_s
		}),
		$$new($ObjectArray, {
			"The.timestamp.expired.1.but.usable.2"_s,
			"The timestamp expired on %1$tY-%1$tm-%1$td. However, the JAR will be valid until the signer certificate expires on %2$tY-%2$tm-%2$td."_s
		}),
		$$new($ObjectArray, {
			"The.timestamp.has.expired."_s,
			"The timestamp has expired."_s
		}),
		$$new($ObjectArray, {
			"The.signer.certificate.will.expire.within.six.months."_s,
			"The signer certificate will expire within six months."_s
		}),
		$$new($ObjectArray, {
			"The.timestamp.will.expire.within.one.year.on.1"_s,
			"The timestamp will expire within one year on %1$tY-%1$tm-%1$td."_s
		}),
		$$new($ObjectArray, {
			"The.timestamp.will.expire.within.one.year.on.1.but.2"_s,
			"The timestamp will expire within one year on %1$tY-%1$tm-%1$td. However, the JAR will be valid until the signer certificate expires on %2$tY-%2$tm-%2$td."_s
		}),
		$$new($ObjectArray, {
			"The.signer.certificate.is.not.yet.valid."_s,
			"The signer certificate is not yet valid."_s
		}),
		$$new($ObjectArray, {
			"The.signer.certificate.s.KeyUsage.extension.doesn.t.allow.code.signing."_s,
			"The signer certificate\'s KeyUsage extension doesn\'t allow code signing."_s
		}),
		$$new($ObjectArray, {
			"The.signer.certificate.s.ExtendedKeyUsage.extension.doesn.t.allow.code.signing."_s,
			"The signer certificate\'s ExtendedKeyUsage extension doesn\'t allow code signing."_s
		}),
		$$new($ObjectArray, {
			"The.signer.certificate.s.NetscapeCertType.extension.doesn.t.allow.code.signing."_s,
			"The signer certificate\'s NetscapeCertType extension doesn\'t allow code signing."_s
		}),
		$$new($ObjectArray, {
			"This.jar.contains.entries.whose.signer.certificate.s.KeyUsage.extension.doesn.t.allow.code.signing."_s,
			"This jar contains entries whose signer certificate\'s KeyUsage extension doesn\'t allow code signing."_s
		}),
		$$new($ObjectArray, {
			"This.jar.contains.entries.whose.signer.certificate.s.ExtendedKeyUsage.extension.doesn.t.allow.code.signing."_s,
			"This jar contains entries whose signer certificate\'s ExtendedKeyUsage extension doesn\'t allow code signing."_s
		}),
		$$new($ObjectArray, {
			"This.jar.contains.entries.whose.signer.certificate.s.NetscapeCertType.extension.doesn.t.allow.code.signing."_s,
			"This jar contains entries whose signer certificate\'s NetscapeCertType extension doesn\'t allow code signing."_s
		}),
		$$new($ObjectArray, {
			".{0}.extension.does.not.support.code.signing."_s,
			"[{0} extension does not support code signing]"_s
		}),
		$$new($ObjectArray, {
			"The.signer.s.certificate.chain.is.invalid.reason.1"_s,
			"The signer\'s certificate chain is invalid. Reason: %s"_s
		}),
		$$new($ObjectArray, {
			"The.tsa.certificate.chain.is.invalid.reason.1"_s,
			"The TSA certificate chain is invalid. Reason: %s"_s
		}),
		$$new($ObjectArray, {
			"The.signer.s.certificate.is.self.signed."_s,
			"The signer\'s certificate is self-signed."_s
		}),
		$$new($ObjectArray, {
			"The.1.algorithm.specified.for.the.2.option.is.considered.a.security.risk..This.algorithm.will.be.disabled.in.a.future.update."_s,
			"The %1$s algorithm specified for the %2$s option is considered a security risk. This algorithm will be disabled in a future update."_s
		}),
		$$new($ObjectArray, {
			"The.1.algorithm.specified.for.the.2.option.is.considered.a.security.risk.and.is.disabled."_s,
			"The %1$s algorithm specified for the %2$s option is considered a security risk and is disabled."_s
		}),
		$$new($ObjectArray, {
			"The.timestamp.digest.algorithm.1.is.considered.a.security.risk..This.algorithm.will.be.disabled.in.a.future.update."_s,
			"The %1$s timestamp digest algorithm is considered a security risk. This algorithm will be disabled in a future update."_s
		}),
		$$new($ObjectArray, {
			"The.digest.algorithm.1.is.considered.a.security.risk..This.algorithm.will.be.disabled.in.a.future.update."_s,
			"The %1$s digest algorithm is considered a security risk. This algorithm will be disabled in a future update."_s
		}),
		$$new($ObjectArray, {
			"The.signature.algorithm.1.is.considered.a.security.risk..This.algorithm.will.be.disabled.in.a.future.update."_s,
			"The %1$s signature algorithm is considered a security risk. This algorithm will be disabled in a future update."_s
		}),
		$$new($ObjectArray, {
			"The.1.signing.key.has.a.keysize.of.2.which.is.considered.a.security.risk..This.key.size.will.be.disabled.in.a.future.update."_s,
			"The %1$s signing key has a keysize of %2$d which is considered a security risk. This key size will be disabled in a future update."_s
		}),
		$$new($ObjectArray, {
			"The.1.signing.key.has.a.keysize.of.2.which.is.considered.a.security.risk.and.is.disabled."_s,
			"The %1$s signing key has a keysize of %2$d which is considered a security risk and is disabled."_s
		}),
		$$new($ObjectArray, {
			"This.jar.contains.entries.whose.certificate.chain.is.invalid.reason.1"_s,
			"This jar contains entries whose certificate chain is invalid. Reason: %s"_s
		}),
		$$new($ObjectArray, {
			"This.jar.contains.entries.whose.tsa.certificate.chain.is.invalid.reason.1"_s,
			"This jar contains entries whose TSA certificate chain is invalid. Reason: %s"_s
		}),
		$$new($ObjectArray, {
			"no.timestamp.signing"_s,
			"No -tsa or -tsacert is provided and this jar is not timestamped. Without a timestamp, users may not be able to validate this jar after the signer certificate\'s expiration date (%1$tY-%1$tm-%1$td)."_s
		}),
		$$new($ObjectArray, {
			"invalid.timestamp.signing"_s,
			"The timestamp is invalid. Without a valid timestamp, users may not be able to validate this jar after the signer certificate\'s expiration date (%1$tY-%1$tm-%1$td)."_s
		}),
		$$new($ObjectArray, {
			"no.timestamp.verifying"_s,
			"This jar contains signatures that do not include a timestamp. Without a timestamp, users may not be able to validate this jar after any of the signer certificates expire (as early as %1$tY-%1$tm-%1$td)."_s
		}),
		$$new($ObjectArray, {
			"bad.timestamp.verifying"_s,
			"This jar contains signatures that include an invalid timestamp. Without a valid timestamp, users may not be able to validate this jar after any of the signer certificates expire (as early as %1$tY-%1$tm-%1$td).\nRerun jarsigner with -J-Djava.security.debug=jar for more information."_s
		}),
		$$new($ObjectArray, {
			"The.signer.certificate.will.expire.on.1."_s,
			"The signer certificate will expire on %1$tY-%1$tm-%1$td."_s
		}),
		$$new($ObjectArray, {
			"The.timestamp.will.expire.on.1."_s,
			"The timestamp will expire on %1$tY-%1$tm-%1$td."_s
		}),
		$$new($ObjectArray, {
			"signer.cert.expired.1.but.timestamp.good.2."_s,
			"The signer certificate expired on %1$tY-%1$tm-%1$td. However, the JAR will be valid until the timestamp expires on %2$tY-%2$tm-%2$td."_s
		}),
		$$new($ObjectArray, {
			"Unknown.password.type."_s,
			"Unknown password type: "_s
		}),
		$$new($ObjectArray, {
			"Cannot.find.environment.variable."_s,
			"Cannot find environment variable: "_s
		}),
		$$new($ObjectArray, {
			"Cannot.find.file."_s,
			"Cannot find file: "_s
		}),
		$$new($ObjectArray, {
			"event.ocsp.check"_s,
			"Contacting OCSP server at %s ..."_s
		}),
		$$new($ObjectArray, {
			"event.crl.check"_s,
			"Downloading CRL from %s ..."_s
		})
	}));
}

Resources::Resources() {
}

$Class* Resources::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"contents", "[[Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Resources, contents)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Resources, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Resources, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.security.tools.jarsigner.Resources",
		"java.util.ListResourceBundle",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Resources, name, initialize, &classInfo$$, Resources::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Resources);
	});
	return class$;
}

$Class* Resources::class$ = nullptr;

			} // jarsigner
		} // tools
	} // security
} // sun