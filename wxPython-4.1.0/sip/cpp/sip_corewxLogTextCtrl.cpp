/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.19.19
 *
 *     Copyright: (c) 2020 by Total Control Software
 *     License:   wxWindows License
 */

#include "sipAPI_core.h"

        #include <wx/log.h>

        #include <wx/textctrl.h>
        #include <wx/log.h>
        #include <wx/log.h>
        #include <wx/log.h>


class sipwxLogTextCtrl : public  ::wxLogTextCtrl
{
public:
    sipwxLogTextCtrl( ::wxTextCtrl*);
    virtual ~sipwxLogTextCtrl();

    /*
     * There is a public method for every protected method visible from
     * this class.
     */
    void sipProtectVirt_DoLogRecord(bool, ::wxLogLevel,const  ::wxString&,const  ::wxLogRecordInfo&);
    void sipProtectVirt_DoLogTextAtLevel(bool, ::wxLogLevel,const  ::wxString&);
    void sipProtectVirt_DoLogText(bool,const  ::wxString&);

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void Flush() SIP_OVERRIDE;
    void DoLogRecord( ::wxLogLevel,const  ::wxString&,const  ::wxLogRecordInfo&) SIP_OVERRIDE;
    void DoLogTextAtLevel( ::wxLogLevel,const  ::wxString&) SIP_OVERRIDE;
    void DoLogText(const  ::wxString&) SIP_OVERRIDE;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipwxLogTextCtrl(const sipwxLogTextCtrl &);
    sipwxLogTextCtrl &operator = (const sipwxLogTextCtrl &);

    char sipPyMethods[4];
};

sipwxLogTextCtrl::sipwxLogTextCtrl( ::wxTextCtrl*pTextCtrl):  ::wxLogTextCtrl(pTextCtrl), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipwxLogTextCtrl::~sipwxLogTextCtrl()
{
    sipInstanceDestroyedEx(&sipPySelf);
}

void sipwxLogTextCtrl::Flush()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,SIP_NULLPTR,sipName_Flush);

    if (!sipMeth)
    {
         ::wxLogTextCtrl::Flush();
        return;
    }

    extern void sipVH__core_51(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    sipVH__core_51(sipGILState, 0, sipPySelf, sipMeth);
}

void sipwxLogTextCtrl::DoLogRecord( ::wxLogLevel level,const  ::wxString& msg,const  ::wxLogRecordInfo& info)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,SIP_NULLPTR,sipName_DoLogRecord);

    if (!sipMeth)
    {
         ::wxLogTextCtrl::DoLogRecord(level,msg,info);
        return;
    }

    extern void sipVH__core_52(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxLogLevel,const  ::wxString&,const  ::wxLogRecordInfo&);

    sipVH__core_52(sipGILState, 0, sipPySelf, sipMeth, level, msg, info);
}

void sipwxLogTextCtrl::DoLogTextAtLevel( ::wxLogLevel level,const  ::wxString& msg)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,SIP_NULLPTR,sipName_DoLogTextAtLevel);

    if (!sipMeth)
    {
         ::wxLogTextCtrl::DoLogTextAtLevel(level,msg);
        return;
    }

    extern void sipVH__core_53(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxLogLevel,const  ::wxString&);

    sipVH__core_53(sipGILState, 0, sipPySelf, sipMeth, level, msg);
}

void sipwxLogTextCtrl::DoLogText(const  ::wxString& msg)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,SIP_NULLPTR,sipName_DoLogText);

    if (!sipMeth)
    {
         ::wxLogTextCtrl::DoLogText(msg);
        return;
    }

    extern void sipVH__core_54(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::wxString&);

    sipVH__core_54(sipGILState, 0, sipPySelf, sipMeth, msg);
}

void sipwxLogTextCtrl::sipProtectVirt_DoLogRecord(bool sipSelfWasArg, ::wxLogLevel level,const  ::wxString& msg,const  ::wxLogRecordInfo& info)
{
    (sipSelfWasArg ?  ::wxLog::DoLogRecord(level,msg,info) : DoLogRecord(level,msg,info));
}

void sipwxLogTextCtrl::sipProtectVirt_DoLogTextAtLevel(bool sipSelfWasArg, ::wxLogLevel level,const  ::wxString& msg)
{
    (sipSelfWasArg ?  ::wxLog::DoLogTextAtLevel(level,msg) : DoLogTextAtLevel(level,msg));
}

void sipwxLogTextCtrl::sipProtectVirt_DoLogText(bool sipSelfWasArg,const  ::wxString& msg)
{
    (sipSelfWasArg ?  ::wxLog::DoLogText(msg) : DoLogText(msg));
}


PyDoc_STRVAR(doc_wxLogTextCtrl_DoLogRecord, "DoLogRecord(level, msg, info)\n"
"\n"
"Called to log a new record.");

extern "C" {static PyObject *meth_wxLogTextCtrl_DoLogRecord(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxLogTextCtrl_DoLogRecord(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::wxLogLevel level;
        const  ::wxString* msg;
        int msgState = 0;
        const  ::wxLogRecordInfo* info;
        sipwxLogTextCtrl *sipCpp;

        static const char *sipKwdList[] = {
            sipName_level,
            sipName_msg,
            sipName_info,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BmJ1J9", &sipSelf, sipType_wxLogTextCtrl, &sipCpp, &level, sipType_wxString,&msg, &msgState, sipType_wxLogRecordInfo, &info))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->sipProtectVirt_DoLogRecord(sipSelfWasArg,level,*msg,*info);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxString *>(msg),sipType_wxString,msgState);

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_LogTextCtrl, sipName_DoLogRecord, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxLogTextCtrl_DoLogTextAtLevel, "DoLogTextAtLevel(level, msg)\n"
"\n"
"Called to log the specified string at given level.");

extern "C" {static PyObject *meth_wxLogTextCtrl_DoLogTextAtLevel(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxLogTextCtrl_DoLogTextAtLevel(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::wxLogLevel level;
        const  ::wxString* msg;
        int msgState = 0;
        sipwxLogTextCtrl *sipCpp;

        static const char *sipKwdList[] = {
            sipName_level,
            sipName_msg,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BmJ1", &sipSelf, sipType_wxLogTextCtrl, &sipCpp, &level, sipType_wxString,&msg, &msgState))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->sipProtectVirt_DoLogTextAtLevel(sipSelfWasArg,level,*msg);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxString *>(msg),sipType_wxString,msgState);

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_LogTextCtrl, sipName_DoLogTextAtLevel, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxLogTextCtrl_DoLogText, "DoLogText(msg)\n"
"\n"
"Called to log the specified string.");

extern "C" {static PyObject *meth_wxLogTextCtrl_DoLogText(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxLogTextCtrl_DoLogText(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::wxString* msg;
        int msgState = 0;
        sipwxLogTextCtrl *sipCpp;

        static const char *sipKwdList[] = {
            sipName_msg,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ1", &sipSelf, sipType_wxLogTextCtrl, &sipCpp, sipType_wxString,&msg, &msgState))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->sipProtectVirt_DoLogText(sipSelfWasArg,*msg);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxString *>(msg),sipType_wxString,msgState);

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_LogTextCtrl, sipName_DoLogText, SIP_NULLPTR);

    return SIP_NULLPTR;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_wxLogTextCtrl(void *, const sipTypeDef *);}
static void *cast_wxLogTextCtrl(void *sipCppV, const sipTypeDef *targetType)
{
     ::wxLogTextCtrl *sipCpp = reinterpret_cast< ::wxLogTextCtrl *>(sipCppV);

    if (targetType == sipType_wxLog)
        return static_cast< ::wxLog *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_wxLogTextCtrl(void *, int);}
static void release_wxLogTextCtrl(void *sipCppV, int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipwxLogTextCtrl *>(sipCppV);
    else
        delete reinterpret_cast< ::wxLogTextCtrl *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_wxLogTextCtrl(sipSimpleWrapper *);}
static void dealloc_wxLogTextCtrl(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipwxLogTextCtrl *>(sipGetAddress(sipSelf))->sipPySelf = SIP_NULLPTR;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxLogTextCtrl(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_wxLogTextCtrl(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_wxLogTextCtrl(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipwxLogTextCtrl *sipCpp = SIP_NULLPTR;

    {
         ::wxTextCtrl* pTextCtrl;

        static const char *sipKwdList[] = {
            sipName_pTextCtrl,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J8", sipType_wxTextCtrl, &pTextCtrl))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipwxLogTextCtrl(pTextCtrl);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
            {
                delete sipCpp;
                return SIP_NULLPTR;
            }

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_wxLogTextCtrl[] = {{308, 255, 1}};


static PyMethodDef methods_wxLogTextCtrl[] = {
    {SIP_MLNAME_CAST(sipName_DoLogRecord), SIP_MLMETH_CAST(meth_wxLogTextCtrl_DoLogRecord), METH_VARARGS|METH_KEYWORDS, SIP_NULLPTR},
    {SIP_MLNAME_CAST(sipName_DoLogText), SIP_MLMETH_CAST(meth_wxLogTextCtrl_DoLogText), METH_VARARGS|METH_KEYWORDS, SIP_NULLPTR},
    {SIP_MLNAME_CAST(sipName_DoLogTextAtLevel), SIP_MLMETH_CAST(meth_wxLogTextCtrl_DoLogTextAtLevel), METH_VARARGS|METH_KEYWORDS, SIP_NULLPTR}
};

PyDoc_STRVAR(doc_wxLogTextCtrl, "LogTextCtrl(pTextCtrl)\n"
"\n"
"Using these target all the log messages can be redirected to a text\n"
"control.");


sipClassTypeDef sipTypeDef__core_wxLogTextCtrl = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_CLASS,
        sipNameNr_wxLogTextCtrl,
        {SIP_NULLPTR},
        SIP_NULLPTR
    },
    {
        sipNameNr_LogTextCtrl,
        {0, 0, 1},
        3, methods_wxLogTextCtrl,
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_wxLogTextCtrl,
    -1,
    -1,
    supers_wxLogTextCtrl,
    SIP_NULLPTR,
    init_type_wxLogTextCtrl,
    SIP_NULLPTR,
    SIP_NULLPTR,
#if PY_MAJOR_VERSION >= 3
    SIP_NULLPTR,
    SIP_NULLPTR,
#else
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
#endif
    dealloc_wxLogTextCtrl,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    release_wxLogTextCtrl,
    cast_wxLogTextCtrl,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};