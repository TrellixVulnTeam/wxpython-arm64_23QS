/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.19.19
 *
 *     Copyright: (c) 2020 by Total Control Software
 *     License:   wxWindows License
 */

#include "sipAPI_core.h"

        #include <wx/gdicmn.h>

        #include <wx/gdicmn.h>
        #include <wx/gdicmn.h>
    bool _wxPoint___eq__(wxPoint* self, const wxPoint* other)
    {
        return *self == *other;
    }
    bool _wxPoint___ne__(wxPoint* self, const wxPoint* other)
    {
        return *self != *other;
    }
    PyObject* _wxPoint_Get(wxPoint* self)
    {
        wxPyThreadBlocker blocker;
        return sipBuildResult(0, "(ii)", self->x, self->y);
    }


PyDoc_STRVAR(doc_wxPoint_IsFullySpecified, "IsFullySpecified() -> bool\n"
"\n"
"Returns true if neither of the point components is equal to\n"
"wxDefaultCoord.");

extern "C" {static PyObject *meth_wxPoint_IsFullySpecified(PyObject *, PyObject *);}
static PyObject *meth_wxPoint_IsFullySpecified(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxPoint *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxPoint, &sipCpp))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->IsFullySpecified();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Point, sipName_IsFullySpecified, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxPoint_SetDefaults, "SetDefaults(pt)\n"
"\n"
"Combine this object with another one replacing the uninitialized\n"
"values.");

extern "C" {static PyObject *meth_wxPoint_SetDefaults(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxPoint_SetDefaults(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxPoint* pt;
        int ptState = 0;
         ::wxPoint *sipCpp;

        static const char *sipKwdList[] = {
            sipName_pt,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ1", &sipSelf, sipType_wxPoint, &sipCpp, sipType_wxPoint, &pt, &ptState))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->SetDefaults(*pt);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxPoint *>(pt),sipType_wxPoint,ptState);

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Point, sipName_SetDefaults, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxPoint_Get, "Get() -> (x,y)\n"
"\n"
"Return the x and y properties as a tuple.");

extern "C" {static PyObject *meth_wxPoint_Get(PyObject *, PyObject *);}
static PyObject *meth_wxPoint_Get(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxPoint *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxPoint, &sipCpp))
        {
            PyObject * sipRes = SIP_NULLPTR;
            int sipIsErr = 0;

        PyErr_Clear();
        Py_BEGIN_ALLOW_THREADS
        sipRes = _wxPoint_Get(sipCpp);
        Py_END_ALLOW_THREADS
        if (PyErr_Occurred()) sipIsErr = 1;

            if (sipIsErr)
                return 0;

            return sipRes;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Point, sipName_Get, SIP_NULLPTR);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *slot_wxPoint___div__(PyObject *,PyObject *);}
static PyObject *slot_wxPoint___div__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxPoint* a0;
        int a0State = 0;
        int i;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_wxPoint, &a0, &a0State, &i))
        {
             ::wxPoint*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxPoint((*a0 / i));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_wxPoint,a0State);

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxPoint,SIP_NULLPTR);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI__core, div_slot, SIP_NULLPTR, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_wxPoint___mul__(PyObject *,PyObject *);}
static PyObject *slot_wxPoint___mul__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxPoint* a0;
        int a0State = 0;
        double d;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1d", sipType_wxPoint, &a0, &a0State, &d))
        {
             ::wxPoint*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxPoint((*a0 * d));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_wxPoint,a0State);

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxPoint,SIP_NULLPTR);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI__core, mul_slot, SIP_NULLPTR, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_wxPoint___sub__(PyObject *,PyObject *);}
static PyObject *slot_wxPoint___sub__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxPoint* a0;
        int a0State = 0;
        const  ::wxPoint* other;
        int otherState = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_wxPoint, &a0, &a0State, sipType_wxPoint, &other, &otherState))
        {
             ::wxPoint*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxPoint((*a0 - *other));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_wxPoint,a0State);
            sipReleaseType(const_cast< ::wxPoint *>(other),sipType_wxPoint,otherState);

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxPoint,SIP_NULLPTR);
        }
    }

    {
         ::wxPoint* a0;
        int a0State = 0;
        const  ::wxSize* other;
        int otherState = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_wxPoint, &a0, &a0State, sipType_wxSize, &other, &otherState))
        {
             ::wxPoint*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxPoint((*a0 - *other));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_wxPoint,a0State);
            sipReleaseType(const_cast< ::wxSize *>(other),sipType_wxSize,otherState);

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxPoint,SIP_NULLPTR);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI__core, sub_slot, SIP_NULLPTR, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_wxPoint___neg__(PyObject *);}
static PyObject *slot_wxPoint___neg__(PyObject *sipSelf)
{
     ::wxPoint *sipCpp = reinterpret_cast< ::wxPoint *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_wxPoint));

    if (!sipCpp)
        return SIP_NULLPTR;


    {
        {
             ::wxPoint*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxPoint(-(*sipCpp));
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxPoint,SIP_NULLPTR);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_wxPoint___add__(PyObject *,PyObject *);}
static PyObject *slot_wxPoint___add__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::wxPoint* a0;
        int a0State = 0;
        const  ::wxPoint* other;
        int otherState = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_wxPoint, &a0, &a0State, sipType_wxPoint, &other, &otherState))
        {
             ::wxPoint*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxPoint((*a0 + *other));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_wxPoint,a0State);
            sipReleaseType(const_cast< ::wxPoint *>(other),sipType_wxPoint,otherState);

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxPoint,SIP_NULLPTR);
        }
    }

    {
         ::wxPoint* a0;
        int a0State = 0;
        const  ::wxSize* other;
        int otherState = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_wxPoint, &a0, &a0State, sipType_wxSize, &other, &otherState))
        {
             ::wxPoint*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxPoint((*a0 + *other));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_wxPoint,a0State);
            sipReleaseType(const_cast< ::wxSize *>(other),sipType_wxSize,otherState);

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxPoint,SIP_NULLPTR);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI__core, add_slot, SIP_NULLPTR, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_wxPoint___ne__(PyObject *,PyObject *);}
static PyObject *slot_wxPoint___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::wxPoint *sipCpp = reinterpret_cast< ::wxPoint *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_wxPoint));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxPoint* other;
        int otherState = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_wxPoint, &other, &otherState))
        {
            bool sipRes = 0;
            int sipIsErr = 0;

        PyErr_Clear();
        Py_BEGIN_ALLOW_THREADS
        sipRes = _wxPoint___ne__(sipCpp, other);
        Py_END_ALLOW_THREADS
        if (PyErr_Occurred()) sipIsErr = 1;
            sipReleaseType(const_cast< ::wxPoint *>(other),sipType_wxPoint,otherState);

            if (sipIsErr)
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI__core, ne_slot, sipType_wxPoint, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_wxPoint___eq__(PyObject *,PyObject *);}
static PyObject *slot_wxPoint___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::wxPoint *sipCpp = reinterpret_cast< ::wxPoint *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_wxPoint));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxPoint* other;
        int otherState = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_wxPoint, &other, &otherState))
        {
            bool sipRes = 0;
            int sipIsErr = 0;

        PyErr_Clear();
        Py_BEGIN_ALLOW_THREADS
        sipRes = _wxPoint___eq__(sipCpp, other);
        Py_END_ALLOW_THREADS
        if (PyErr_Occurred()) sipIsErr = 1;
            sipReleaseType(const_cast< ::wxPoint *>(other),sipType_wxPoint,otherState);

            if (sipIsErr)
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI__core, eq_slot, sipType_wxPoint, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_wxPoint___isub__(PyObject *,PyObject *);}
static PyObject *slot_wxPoint___isub__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_wxPoint)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::wxPoint *sipCpp = reinterpret_cast< ::wxPoint *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_wxPoint));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxSize* sz;
        int szState = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_wxSize, &sz, &szState))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp-> ::wxPoint::operator-=(*sz);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxSize *>(sz),sipType_wxSize,szState);

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    {
        const  ::wxPoint* pt;
        int ptState = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_wxPoint, &pt, &ptState))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp-> ::wxPoint::operator-=(*pt);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxPoint *>(pt),sipType_wxPoint,ptState);

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_wxPoint___iadd__(PyObject *,PyObject *);}
static PyObject *slot_wxPoint___iadd__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_wxPoint)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::wxPoint *sipCpp = reinterpret_cast< ::wxPoint *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_wxPoint));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxSize* sz;
        int szState = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_wxSize, &sz, &szState))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp-> ::wxPoint::operator+=(*sz);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxSize *>(sz),sipType_wxSize,szState);

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    {
        const  ::wxPoint* pt;
        int ptState = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_wxPoint, &pt, &ptState))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp-> ::wxPoint::operator+=(*pt);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxPoint *>(pt),sipType_wxPoint,ptState);

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


/* Call the instance's destructor. */
extern "C" {static void release_wxPoint(void *, int);}
static void release_wxPoint(void *sipCppV, int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast< ::wxPoint *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_wxPoint(void *, SIP_SSIZE_T, void *);}
static void assign_wxPoint(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::wxPoint *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::wxPoint *>(sipSrc);
}


extern "C" {static void *array_wxPoint(SIP_SSIZE_T);}
static void *array_wxPoint(SIP_SSIZE_T sipNrElem)
{
    return new  ::wxPoint[sipNrElem];
}


extern "C" {static void *copy_wxPoint(const void *, SIP_SSIZE_T);}
static void *copy_wxPoint(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::wxPoint(reinterpret_cast<const  ::wxPoint *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_wxPoint(sipSimpleWrapper *);}
static void dealloc_wxPoint(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxPoint(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_wxPoint(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_wxPoint(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::wxPoint *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::wxPoint();
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
            {
                delete sipCpp;
                return SIP_NULLPTR;
            }

            return sipCpp;
        }
    }

    {
        int x;
        int y;

        static const char *sipKwdList[] = {
            sipName_x,
            sipName_y,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "ii", &x, &y))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::wxPoint(x,y);
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
            {
                delete sipCpp;
                return SIP_NULLPTR;
            }

            return sipCpp;
        }
    }

    {
        const  ::wxRealPoint* pt;
        int ptState = 0;

        static const char *sipKwdList[] = {
            sipName_pt,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J1", sipType_wxRealPoint, &pt, &ptState))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::wxPoint(*pt);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxRealPoint *>(pt),sipType_wxRealPoint,ptState);

            if (PyErr_Occurred())
            {
                delete sipCpp;
                return SIP_NULLPTR;
            }

            return sipCpp;
        }
    }

    {
        const  ::wxPoint* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J1", sipType_wxPoint, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new  ::wxPoint(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxPoint *>(a0),sipType_wxPoint,a0State);

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


extern "C" {static int convertTo_wxPoint(PyObject *, void **, int *, PyObject *);}
static int convertTo_wxPoint(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
     ::wxPoint **sipCppPtr = reinterpret_cast< ::wxPoint **>(sipCppPtrV);

        // is it just a typecheck?
        if (!sipIsErr) {
            // is it already an instance of wxPoint?
            if (sipCanConvertToType(sipPy, sipType_wxPoint, SIP_NO_CONVERTORS))
                return 1;
        
            if (wxPyNumberSequenceCheck(sipPy, 2)) {
                return 1;
            }
            return 0;
        }
        
         // otherwise do the conversion
         if (sipCanConvertToType(sipPy, sipType_wxPoint, SIP_NO_CONVERTORS)) {
             // Just fetch the existing instance
             *sipCppPtr = reinterpret_cast<wxPoint*>(sipConvertToType(
                     sipPy, sipType_wxPoint, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));
             return 0;  // not a new instance
         }
        
         // or create a new instance
         PyObject* o1 = PySequence_ITEM(sipPy, 0);
         PyObject* o2 = PySequence_ITEM(sipPy, 1);
         *sipCppPtr = new wxPoint(wxPyInt_AsLong(o1), wxPyInt_AsLong(o2));
         Py_DECREF(o1);
         Py_DECREF(o2);
         return SIP_TEMPORARY;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_wxPoint[] = {
    {(void *)slot_wxPoint___div__, div_slot},
    {(void *)slot_wxPoint___mul__, mul_slot},
    {(void *)slot_wxPoint___sub__, sub_slot},
    {(void *)slot_wxPoint___neg__, neg_slot},
    {(void *)slot_wxPoint___add__, add_slot},
    {(void *)slot_wxPoint___ne__, ne_slot},
    {(void *)slot_wxPoint___eq__, eq_slot},
    {(void *)slot_wxPoint___isub__, isub_slot},
    {(void *)slot_wxPoint___iadd__, iadd_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_wxPoint[] = {
    {SIP_MLNAME_CAST(sipName_Get), meth_wxPoint_Get, METH_VARARGS, SIP_MLDOC_CAST(doc_wxPoint_Get)},
    {SIP_MLNAME_CAST(sipName_IsFullySpecified), meth_wxPoint_IsFullySpecified, METH_VARARGS, SIP_MLDOC_CAST(doc_wxPoint_IsFullySpecified)},
    {SIP_MLNAME_CAST(sipName_SetDefaults), SIP_MLMETH_CAST(meth_wxPoint_SetDefaults), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxPoint_SetDefaults)}
};


extern "C" {static PyObject *varget_wxPoint_x(void *, PyObject *, PyObject *);}
static PyObject *varget_wxPoint_x(void *sipSelf, PyObject *, PyObject *)
{
    int sipVal;
     ::wxPoint *sipCpp = reinterpret_cast< ::wxPoint *>(sipSelf);

    sipVal = sipCpp->x;

    return SIPLong_FromLong(sipVal);
}


extern "C" {static int varset_wxPoint_x(void *, PyObject *, PyObject *);}
static int varset_wxPoint_x(void *sipSelf, PyObject *sipPy, PyObject *)
{
    int sipVal;
     ::wxPoint *sipCpp = reinterpret_cast< ::wxPoint *>(sipSelf);

    sipVal = sipLong_AsInt(sipPy);

    if (PyErr_Occurred() != SIP_NULLPTR)
        return -1;

    sipCpp->x = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_wxPoint_y(void *, PyObject *, PyObject *);}
static PyObject *varget_wxPoint_y(void *sipSelf, PyObject *, PyObject *)
{
    int sipVal;
     ::wxPoint *sipCpp = reinterpret_cast< ::wxPoint *>(sipSelf);

    sipVal = sipCpp->y;

    return SIPLong_FromLong(sipVal);
}


extern "C" {static int varset_wxPoint_y(void *, PyObject *, PyObject *);}
static int varset_wxPoint_y(void *sipSelf, PyObject *sipPy, PyObject *)
{
    int sipVal;
     ::wxPoint *sipCpp = reinterpret_cast< ::wxPoint *>(sipSelf);

    sipVal = sipLong_AsInt(sipPy);

    if (PyErr_Occurred() != SIP_NULLPTR)
        return -1;

    sipCpp->y = sipVal;

    return 0;
}

sipVariableDef variables_wxPoint[] = {
    {InstanceVariable, sipName_x, (PyMethodDef *)varget_wxPoint_x, (PyMethodDef *)varset_wxPoint_x, SIP_NULLPTR, SIP_NULLPTR},
    {InstanceVariable, sipName_y, (PyMethodDef *)varget_wxPoint_y, (PyMethodDef *)varset_wxPoint_y, SIP_NULLPTR, SIP_NULLPTR},
};

PyDoc_STRVAR(doc_wxPoint, "Point()\n"
"Point(x, y)\n"
"Point(pt)\n"
"\n"
"A wxPoint is a useful data structure for graphics operations.");


sipClassTypeDef sipTypeDef__core_wxPoint = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_CLASS,
        sipNameNr_wxPoint,
        {SIP_NULLPTR},
        SIP_NULLPTR
    },
    {
        sipNameNr_Point,
        {0, 0, 1},
        3, methods_wxPoint,
        0, SIP_NULLPTR,
        2, variables_wxPoint,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_wxPoint,
    -1,
    -1,
    SIP_NULLPTR,
    slots_wxPoint,
    init_type_wxPoint,
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
    dealloc_wxPoint,
    assign_wxPoint,
    array_wxPoint,
    copy_wxPoint,
    release_wxPoint,
    SIP_NULLPTR,
    convertTo_wxPoint,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};